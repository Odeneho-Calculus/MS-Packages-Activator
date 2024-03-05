@echo off
Microsoft Office 2019 (ALL versions) Activator Pro for FREE - MSGuides&echo -------------------------------------------------------------------------------------&echo Ongoing: Activating Microsoft software products&echo -------------------------------------------------------------------------------------&echo.&echo We activate the following products:&echo - Microsoft Office Standard 2019&echo - Microsoft Office Professional Plus 2019&echo.&echo.&(if exist "%ProgramFiles%\Microsoft Office\Office16\ospp.vbs" cd /d "%ProgramFiles%\Microsoft Office\Office16")&(if exist "%ProgramFiles(x86)%\Microsoft Office\Office16\ospp.vbs" cd /d "%ProgramFiles(x86)%\Microsoft Office\Office16")&(for /f %%x in ('dir /b ..\root\Licenses16\ProPlus2019VL*.xrm-ms') do cscript ospp.vbs /inslic:"..\root\Licenses16\%%x" >nul)&(for /f %%x in ('dir /b ..\root\Licenses16\ProPlus2019VL*.xrm-ms') do cscript ospp.vbs /inslic:"..\root\Licenses16\%%x" >nul)&echo.&echo ----------------------------------------------------------------------------&echo Activating your Office...&cscript //nologo slmgr.vbs /ckms >nul&cscript //nologo ospp.vbs /setprt:1688 >nul&cscript //nologo ospp.vbs /unpkey:6MWKP >nul&set i=1&cscript //nologo ospp.vbs /inpkey:NMMKJ-6RK4F-KMJVX-8D9MJ-6MWKP >nul||goto notsupported
:skms
if %i% GTR 10 goto busy
if %i% EQU 1 set KMS=kms7.MSGuides.com
if %i% EQU 2 set KMS=e8.us.to
if %i% EQU 3 set KMS=e9.us.to
if %i% GTR 3 goto ato
cscript //nologo ospp.vbs /sethst:%KMS% >nul
:ato
echo ----------------------------------------------------------------------------&echo.&echo.&cscript //nologo ospp.vbs /act | find /i "successful" && (echo.&echo ----------------------------------------------------------------------------&echo.&echo Contact Calculus for any information&echo.&echo Whatsapp him on +233597537575&echo.&echo Phone call on +233597537575&echo.&echo References &echo -------------&echo kms-server&echo.&echo Msguides&echo.&echo #Please if you want to support Calculus to motivate him in doing more then donate to him via below payment methods&echo.&echo MTN Momo: 0597537575&echo.&echo Voda Cash: 0202745448 &echo.&echo Thank you very much&echo Your support is helping me keep doing more!&echo.&echo -----------------------------------------------------------------------------&choice /n /c YN /m "Would you like to learn from calculus [Y,N]?" & if errorlevel 2 exit) || (echo The connection to KMS server failed! Trying to connect to another one... & echo Please wait... & echo. & echo. & set /a i+=1 & goto skms)
explorer "http://calculus-guy.web.app"&goto halt
:notsupported
echo ----------------------------------------------------------------------------&echo.&echo Sorry, your version is not supported.&echo.&goto halt
:busy
echo ----------------------------------------------------------------------------&echo.&echo Sorry, Your Internet connection is very poor. Please press any key to try again.&echo.
:halt
pause >nul