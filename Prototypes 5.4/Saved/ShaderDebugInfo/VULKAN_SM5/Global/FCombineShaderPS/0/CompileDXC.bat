@ECHO OFF
SET DXC="D:\GITHUB\UE5\UnrealEngine\Engine\Binaries\ThirdParty\ShaderConductor\Win64\dxc.exe"
SET SPIRVCROSS="spirv-cross.exe"
IF NOT EXIST %DXC% (
	ECHO Couldn't find dxc.exe under "D:\GITHUB\UE5\UnrealEngine\Engine\Binaries\ThirdParty\ShaderConductor\Win64"
	GOTO :END
)
ECHO Compiling with DXC...
%DXC% -E CombineMainPS -T ps_6_2 -spirv -Qunused-arguments -HV 2021 -fspv-svposition-implicit-invariant -fspv-target-env=vulkan1.1 -Fo Shaders.DXC.spv Shaders.usf
WHERE %SPIRVCROSS%
IF %ERRORLEVEL% NEQ 0 (
	ECHO spirv-cross.exe not found in Path environment variable, please build it from source https://github.com/KhronosGroup/SPIRV-Cross
	GOTO :END
)
ECHO Translating SPIRV back to glsl...
%SPIRVCROSS% --vulkan-semantics --output Shaders.SPV.glsl Shaders.DXC.spv
:END
PAUSE
