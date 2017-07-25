class CfgPatches
{
	class taw_config_patches
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.70;
	}
};

class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateLaser;
class Turrets;

class CfgVehicles {
	class Helicopter;
	class Helicopter_Base_F {
		class Components;
	};
	class Heli_light_03_base_F: Helicopter_Base_F {
		ace_hellfire_addLaserDesignator = 1;
		class Components: Components {
			class SensorsManagerComponent {
				class Components {
					class LaserSensorComponent: SensorTemplateLaser { };
				}
			}
		}
	};
}