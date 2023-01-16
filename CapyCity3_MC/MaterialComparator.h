#pragma once
#include "Material.h"

class MaterialComparator {
public:
	bool operator()(const Material& m1, const Material& m2);
};
