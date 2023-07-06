for /f "delims=" %%i in ('powershell -Command "Get-Ciminstance -Namespace root/WMI -ClassName WmiMonitorBrightness | Select -ExpandProperty "CurrentBrightness""') do set /A crntVal=%%i
set /A newVal=%crntVal%+5
if %newVal% GTR 100 ( set /A newVal=100)
powershell (Get-WmiObject -Namespace root/WMI -Class WmiMonitorBrightnessMethods).WmiSetBrightness(1,%newVal%)