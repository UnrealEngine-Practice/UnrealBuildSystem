
#include "UnrealBuildSystem.h"
#include "Modules/ModuleManager.h"

/*
 * 주 게임모듈 하나 지정한다.
 * 모듈을 구현한 클래스를 지정해야한다.
 * 언리얼에서 제공하는 FDefaultGameModuleImpl을 게임모듈 기본 클래스를 지정하여 사용한다.
 */
IMPLEMENT_PRIMARY_GAME_MODULE(FDefaultGameModuleImpl, UnrealBuildSystem, "UnrealBuildSystem");

