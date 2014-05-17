#include "character_creator_characteristic_page.h"
#include "ui_character_creator_characteristic_page.h"
#include "character_creator_left_guides_widget.h"
#include "widget_manager.h"

#define TEST_CHARACTERISTIC(value)  \


CharacterCreator_CharacteristicPage::CharacterCreator_CharacteristicPage(QWidget *parent)
    : QWizardPage(parent), _checkCount(0)
{
    _ui = new Ui::CharacterCreator_CharacteristicPage();
    _ui->setupUi(this);

    QVBoxLayout* layout = new QVBoxLayout(this);
    CharacterCreator_LeftGuidesWidget* leftWidget = new CharacterCreator_LeftGuidesWidget(this);
    leftWidget->setCurrentPage(CHRACTERISTIC_PAGE);
    layout->addWidget(leftWidget);

    std::function<void (const QObjectList&)> checkboxesRecursion
        = [&checkboxesRecursion, this](const QObjectList& objectList) -> void
    {
        for (QObject* object : objectList)
        {
            if (object != nullptr && object->inherits("QCheckBox"))
            {
                QCheckBox* checkbox = dynamic_cast<QCheckBox*>(object);
                connect(checkbox, SIGNAL(clicked(bool)), this, SLOT(onChecked(bool)));
                _characteristicCheckBoxes.push_back(checkbox);
            }
            else
            {
                if (!object->children().empty())
                {
                    checkboxesRecursion(object->children());
                }
            }
        }
    };

    checkboxesRecursion(this->children());
}

CharacterCreator_CharacteristicPage::~CharacterCreator_CharacteristicPage()
{
    delete _ui;
}

bool CharacterCreator_CharacteristicPage::validatePage()
{
    if (_checkCount == 0)
    {
        _ui->lblTip->setText("<font color=red>����ѡ��1���Ը�</font>");
        return false;
    }

    wizard()->setProperty("characteristic_values", _characteristicValues);

    QMessageBox::StandardButton result = QMessageBox::StandardButton::No;
    if (_checkCount < MaxCharacteristicOptions)
    {
        result = QMessageBox::question(
            this,
            "ѯ��",
            "Ŀǰ������ѡ�������Ը��Ƿ����ֱ�ӽ�����һҳ��",
            QMessageBox::Yes | QMessageBox::No);

        _ui->lblTip->setText("");
        return (result == QMessageBox::StandardButton::Yes);
    }

    _ui->lblTip->setText("");
    return true;
}

void CharacterCreator_CharacteristicPage::onChecked(bool checked)
{
    if (checked)
    {
        _checkCount++;
    }
    else
    {
        _checkCount--;
    }

    std::function<void (bool)> updateState = [this](bool enabled)
    {
        for (QCheckBox* checkbox : this->_characteristicCheckBoxes)
        {
            if (checkbox->isChecked())
            {
                Characteristic value = static_cast<Characteristic>(checkbox->property("characteristicValue").toInt());
                _characteristicValues |= value;
            }

            if (enabled == false)
            {
                if (!checkbox->isChecked())
                {
                    checkbox->setEnabled(enabled);
                }
            }
            else
            {
                checkbox->setEnabled(enabled);
            }

            //qDebug() << checkbox->text() + ((_characteristicValues & KindHearted) == 1 ? "(true)" : "(false)");
        }
    };

    _characteristicValues = 0;
    updateState(_checkCount != MaxCharacteristicOptions);

    qDebug() << "_optionsValues = " << _characteristicValues << ", characteristic count = " << _checkCount;
}

