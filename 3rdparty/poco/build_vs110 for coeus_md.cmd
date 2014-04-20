@echo off
if defined VS110COMNTOOLS (
call "%VS110COMNTOOLS%\vsvars32.bat")
buildwin 110 build static_md both Win32 nosamples
