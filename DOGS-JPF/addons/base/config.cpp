#include "macros\addon_defines.hpp"
class CfgPatches
{
	class ADDON
	{
		name="DOGS' Jet/JumpPack Framework";
		units[]={};
		weapons[]={};
		requiredVersion=REQ_VERSION;
		requiredAddons[]={
			"cba_main",
			"RPF_base"
		};
		authors[]=
        {
			"Daisy",
			"Mesa",
            "Outshadow",
            "Silencer"
        };
    };
};
class CfgFunctions {
	class PREFIX {
		tag=STR(PREFIX); // JPF_fnc_ ...
		class COMPONENT {
			file="base\functions";
			class alterEnergy;
			class customWoundHandler;
			class hashmapCreate {
				preInit=1;
			};
            class jetpackOmni;
            class jetpackOmniShort;
            class jetpackVector;
            class jetpackVectorShort;
			class jumpL;
			class jumpS;
			class packCheck;
			class playerEH {
				postInit = 1;
			};
			class playerVarsInit {
				postInit = 1;
			}
			class rechargeLoop;
			class rechargeToggle;
		};
	};
	class Keys {
		class KeyInt {
			class fallingPostInit {
				file = "base\fallingDebug_Key.sqf";
				postInit=1;
			};
		};
	};
};
class CfgSFX
{
	class MM_Bullfrog_Jump_SoundSFX
	{
		sound0[]={"82nd_JetpackFuncs\sounds\SLACKJAWBESTSOUNDENGINEER.wav", 250, 1, 25, 1, 0, 0, 4};
		sounds[]={sound0};
		empty[]={"", 0, 0, 0, 0, 0, 0, 0};
	};
};
class CfgVehicles {
	#include "CfgVehicles.hpp"
};

#include "ACE_Medical_Injuries.hpp"