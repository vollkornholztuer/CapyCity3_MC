#include "Building.h"
#include "Material.h"
#include <map>

char label;

//Building::Building() : neededMaterial() {};

EmptySpace::EmptySpace() {
	double netCost = 0;
	this->label = 'E';
}

//WindPlant::WindPlant() {
//	neededMaterial = {
//		{Wood(), 2},
//		{Metal(), 1},
//		{Plastic(), 4}
//	};
//}

WindPlant::WindPlant() {
	this->label = 'W';
	neededMaterial = std::map<Material, int>({
		{Wood(), 2},
		{Metal(), 1},
		{Plastic(), 4}
	});
}

HydroPlant::HydroPlant() {
	this->label = 'H';
	neededMaterial = std::map<Material, int>({
		{Wood(), 5},
		{Metal(), 2}
		});	
}

SolarPlant::SolarPlant() {
	this->label = 'S';
	neededMaterial = std::map<Material, int>({
		{Plastic(), 2},
		{Metal(), 5}
		});
}

char Building::getLabel() {
	return label;
}

double Building::getNetCost()
{
	return netCost;
}

std::map<Material, int>& Building::getNeededMaterial()
{
	return neededMaterial;
}