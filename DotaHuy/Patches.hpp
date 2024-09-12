#pragma once
#include <vector>
//#include "Memoria.hpp"

struct Patch {
	uintptr_t address;
	const char* patch;
	int size;
	bool patched = false;
};

class Patches
{
public:
	void addPatch(Patch* patch);
	void applyUnpatched();
	void reapplyAll();
private:
	std::vector<Patch*> patches = {};
	void apply(Patch* patch);
};