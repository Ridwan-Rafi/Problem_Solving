for /f "delims=" %%i in ('powershell -Command "Get-Ciminstance -Namespace root/WMI -ClassName WmiMonitorBrightness | Select -ExpandProperty "CurrentBrightness""') do set /A crntVal=%%i
set /A newVal=%crntVal%-10
if %newVal% LSS 0 ( set /A newVal=0)
powershell (Get-WmiObject -Namespace root/WMI -Class WmiMonitorBrightnessMethods).WmiSetBrightness(1,%newVal%)