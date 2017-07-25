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
		class Components: Components {
			class SensorsManagerComponent {
				class Components {
					class IRSensorComponent : SensorTemplateIR {
						class AirTarget {
							minRange = 50;
							maxRange = 8000;
						};
						class GroundTarget {
							minRange = 50;
							maxRange = 4000;
						};
						// TODO: Fix so that the animation works
						//animDirection = "mainTurret";
						angleRangeHorizontal = 180;
					};
					class VisualSensorComponent: SensorTemplateVisual {
						class AirTarget {
							minRange = 50;
							maxRange = 8000;
						};
						class GroundTarget {
							minRange = 50;
							maxRange = 4000;
						};
						// TODO: Fix so that the animation works
						//animDirection = "mainTurret";
						angleRangeHorizontal = 180;
					};
					class LaserSensorComponent: SensorTemplateLaser { };
				}
			}
		}
	};
}