@ECHO OFF
SET DXC="D:\GITHUB\UE5\UnrealEngine\Engine\Binaries\ThirdParty\ShaderConductor\Win64\dxc.exe"
IF NOT EXIST %DXC% (
	ECHO Couldn't find dxc.exe under "D:\GITHUB\UE5\UnrealEngine\Engine\Binaries\ThirdParty\ShaderConductor\Win64"
	GOTO :END
)
%DXC% -HV 2021 -Zpr -O3 -auto-binding-space 0 -Wno-parentheses-equality -disable-lifetime-markers -T ps_6_6 -E CombineMainPS -Fc Shaders.d3dasm -Fo Shaders.dxil Shaders.usf
:END
PAUSE
