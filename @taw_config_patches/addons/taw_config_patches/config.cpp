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

class CfgVehicles {
	class Helicopter;
	class Helicopter_Base_F {
		class Components;
	};
	class Heli_light_03_base_F: Helicopter_Base_F {
		class Components: Components {
			class SensorsManagerComponent {
				class Components {
					class IRSensorComponent : SensorTemplateIR {
						class AirTarget {
							minRange = 0;
							maxRange = 10000;
						};
						class GroundTarget {
							minRange = 0;
							maxRange = 6000;
						};
						animDirection = "mainTurret";
					};
					class VisualSensorComponent: SensorTemplateVisual {
						class AirTarget {
							minRange = 0;
							maxRange = 10000;
						};
						class GroundTarget {
							minRange = 0;
							maxRange = 6000;
						};
						animDirection = "mainTurret"
					};
					class LaserSensorComponent: SensorTemplateLaser { };
				}
			}
		}
	};
}