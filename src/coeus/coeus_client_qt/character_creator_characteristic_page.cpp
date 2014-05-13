#include "character_creator_characteristic_page.h"
#include "ui_character_creator_characteristic_page.h"
#include "character_creator_left_guides_widget.h"
#include "widget_manager.h"

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
    setField("characteristic_values", _characteristicValues);
    if (_checkCount < MaxCharacteristicOptions)
    {
        QMessageBox::StandardButton result = QMessageBox::question(
            this,
            QStringLiteral("询问"),
            QStringLiteral("目前还可以选择更多的性格，是否放弃直接进入下一页？"),
            QMessageBox::Yes | QMessageBox::No);

        return (result == QMessageBox::StandardButton::Yes);
    }

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
                _characteristicValues |= checkbox->property("characteristicValue").toInt();
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
        }
    };

    _characteristicValues = 0;
    updateState(_checkCount != MaxCharacteristicOptions);

    qDebug() << "_optionsValues = " << _characteristicValues << ", characteristic count = " << _checkCount;
}

