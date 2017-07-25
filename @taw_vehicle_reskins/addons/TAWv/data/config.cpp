class CfgPatches
{
    class TAWv {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Air_F_Beta_Heli_Transport_01"};
    };
};

class cfgVehicles
{
    class I_Heli_Transport_02_F; 
	class I_Heli_light_03_dynamicLoadout_F; 
	class I_Heli_light_03_unarmed_F; 
	class I_MBT_03_cannon_F; 
	class I_APC_tracked_03_cannon_F; 
	class I_APC_Wheeled_03_cannon_F; 
	class I_MRAP_03_F; 
	class I_MRAP_03_hmg_F; 
	class I_MRAP_03_gmg_F; 
    class taw_merlin_nato: I_Heli_Transport_02_F    
        { 
            scope = 2; 
            side = 1; 
            faction = "BLU_F";
            displayName="AW101 Merlin";
        crew = "B_Helipilot_F";
        hiddenSelections[]= {"camo1","camo2","camo3"};
        hiddenSelectionsTextures[]= {"TAWv\data\MERLIN\TAW_MERLIN_1.paa","TAWv\data\MERLIN\TAW_MERLIN_2.paa","TAWv\data\MERLIN\TAW_MERLIN_3.paa"};            
        typicalCargo[] = {"B_Helipilot_F"}; 
            availableForSupportTypes[] = {"Drop","Transport"}; 
       };  
    class taw_wildcat_nato_a: I_Heli_light_03_dynamicLoadout_F   
        { 
            scope = 2; 
            side = 1; 
            faction = "BLU_F";
            displayName="AW159 Wildcat (Armed)";
        crew = "B_Helipilot_F";
        hiddenSelections[]= {"camo"};
        hiddenSelectionsTextures[]= {"TAWv\data\WILDCAT\TAW_WILDCAT_F.paa"};            
        typicalCargo[] = {"B_Helipilot_F"}; 
            availableForSupportTypes[] = {"Drop","Transport"}; 
       };  
    class taw_wildcat_nato_a_c: I_Heli_light_03_dynamicLoadout_F    
        { 
            scope = 2; 
            side = 1; 
            faction = "BLU_F";
            displayName="AW159 Wildcat (Camo)(Armed)";
        crew = "B_Helipilot_F";
        hiddenSelections[]= {"camo"};
        hiddenSelectionsTextures[]= {"TAWv\data\WILDCAT\TAW_WILDCAT_C.paa"};            
        typicalCargo[] = {"B_Helipilot_F"}; 
            availableForSupportTypes[] = {"Drop","Transport"}; 
       }; 
    class taw_wildcat_nato_u: I_Heli_light_03_unarmed_F    
        { 
            scope = 2; 
            side = 1; 
            faction = "BLU_F";
            displayName="AW159 Wildcat (Unarmed)";
        crew = "B_Helipilot_F";
        hiddenSelections[]= {"camo"};
        hiddenSelectionsTextures[]= {"TAWv\data\WILDCAT\TAW_WILDCAT_F.paa"};            
        typicalCargo[] = {"B_Helipilot_F"}; 
            availableForSupportTypes[] = {"Drop","Transport"}; 
       };  
    class taw_wildcat_nato_u_c: I_Heli_light_03_unarmed_F    
        { 
            scope = 2; 
            side = 1; 
            faction = "BLU_F";
            displayName="AW159 Wildcat (Camo)(Unarmed)";
        crew = "B_Helipilot_F";
        hiddenSelections[]= {"camo"};
        hiddenSelectionsTextures[]= {"TAWv\data\WILDCAT\TAW_WILDCAT_C.paa"};            
        typicalCargo[] = {"B_Helipilot_F"}; 
            availableForSupportTypes[] = {"Drop","Transport"}; 
       };  
    class taw_leopard_nato: I_MBT_03_cannon_F    
        { 
            scope = 2; 
            side = 1; 
            faction = "BLU_F";
            displayName="Leopard 2SG";
        crew = "B_Soldier_F";
        hiddenSelections[]= {"camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[]= {"TAWv\data\LEOPARD\TAW_LEOPARD_1.paa", "TAWv\data\LEOPARD\TAW_LEOPARD_2.paa", "TAWv\data\LEOPARD\TAW_LEOPARD_3.paa"};            
        typicalCargo[] = {"B_Soldier_F"}; 
            availableForSupportTypes[] = {"Transport"}; 
       };  
    class taw_warrior_nato: I_APC_tracked_03_cannon_F    
        { 
            scope = 2; 
            side = 1; 
            faction = "BLU_F";
            displayName="FV510 Warrior";
        crew = "B_Soldier_F";
        hiddenSelections[]= {"camo1", "camo2"};
        hiddenSelectionsTextures[]= {"TAWv\data\WARRIOR\TAW_WARRIOR_1.paa", "TAWv\data\WARRIOR\TAW_WARRIOR_2.paa"};            
        typicalCargo[] = {"B_Soldier_F"}; 
            availableForSupportTypes[] = {"Transport"}; 
       };  
    class taw_pandur_nato: I_APC_Wheeled_03_cannon_F
        { 
            scope = 2; 
            side = 1; 
            faction = "BLU_F";
            displayName="Pandur II";
        crew = "B_Soldier_F";
        hiddenSelections[]= {"camo1", "camo2", "camo3", "camo4"};
        hiddenSelectionsTextures[]= {"TAWv\data\PANDUR\TAW_PANDUR_1.paa", "TAWv\data\PANDUR\TAW_PANDUR_2.paa", "TAWv\data\PANDUR\TAW_PANDUR_3.paa", "TAWv\data\PANDUR\TAW_PANDUR_4.paa"};
        typicalCargo[] = {"B_Soldier_F"}; 
            availableForSupportTypes[] = {"Transport"}; 
       };  
    class taw_fennek_nato: I_MRAP_03_F    
        { 
            scope = 2; 
            side = 1; 
            faction = "BLU_F";
            displayName="Fennek";
        crew = "B_Soldier_F";
        hiddenSelections[]= {"camo1", "camo2"};
        hiddenSelectionsTextures[]= {"TAWv\data\FENNEK\TAW_FENNEK_1.paa", "TAWv\data\FENNEK\TAW_FENNEK_2.paa"};            
        typicalCargo[] = {"B_Soldier_F"}; 
            availableForSupportTypes[] = {"Transport"}; 
       };  
    class taw_fennek_nato_h: I_MRAP_03_hmg_F    
        { 
            scope = 2; 
            side = 1; 
            faction = "BLU_F";
            displayName="Fennek (HMG)";
        crew = "B_Soldier_F";
        hiddenSelections[]= {"camo1", "camo2"};
        hiddenSelectionsTextures[]= {"TAWv\data\FENNEK\TAW_FENNEK_1.paa", "TAWv\data\FENNEK\TAW_FENNEK_2.paa"};            
        typicalCargo[] = {"B_Soldier_F"}; 
            availableForSupportTypes[] = {"Transport"}; 
       };  
    class taw_fennek_nato_g: I_MRAP_03_gmg_F    
        { 
            scope = 2; 
            side = 1; 
            faction = "BLU_F";
            displayName="Fennek (GMG)";
        crew = "B_Soldier_F";
        hiddenSelections[]= {"camo1", "camo2"};
        hiddenSelectionsTextures[]= {"TAWv\data\FENNEK\TAW_FENNEK_1.paa", "TAWv\data\FENNEK\TAW_FENNEK_2.paa"};            
        typicalCargo[] = {"B_Soldier_F"}; 
            availableForSupportTypes[] = {"Transport"}; 
       };  
};

class CfgWeapons
{
	class arifle_TRG20_F;
	class arifle_TRG21_F;
	class arifle_TRG21_GL_F;
	class arifle_Mk20_plain_F;
	class arifle_Mk20_GL_F;
	class arifle_Mk20C_F;
	class CTAR21_black: arifle_TRG20_F
	{
		author="Blackbox";
		displayName="CTAR-21 (Black)";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"TAWv\data\WEP\TAR21b.paa"
		};
	};
	class TAR21_black: arifle_TRG21_F
	{
		author="Blackbox";
		displayName="TAR-21 (Black)";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"TAWv\data\WEP\TAR21b.paa"
		};
	};
	class TAR21_GL_black: arifle_TRG21_GL_F
	{
		author="Blackbox";
		displayName="TAR-21 EGLM (Black)";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"TAWv\data\WEP\TAR21b.paa"
		};
	};
	class F2000_black: arifle_Mk20_plain_F
	{
		displayName="F2000 (Black)";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"TAWv\data\WEP\F2000b.paa"
		};
	};
	class F2000c_black: arifle_Mk20C_F
	{
		displayName="F2000 Tactical (Black)";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"TAWv\data\WEP\F2000b.paa"
		};
	};
	class F2000_GL_black: arifle_Mk20_GL_F
	{
		displayName="F2000 EGLM (Black)";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"TAWv\data\WEP\F2000b.paa"
		};
	};
};