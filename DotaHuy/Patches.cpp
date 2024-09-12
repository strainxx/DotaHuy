#include "Patches.hpp"
#include <Windows.h>

static void PatchMem(uintptr_t addressToWrite, const char* valueToWrite, int byteNum)
{
    unsigned long OldProtection;
    VirtualProtect((LPVOID)(addressToWrite), byteNum, PAGE_EXECUTE_READWRITE, &OldProtection);
    memcpy((LPVOID)addressToWrite, valueToWrite, byteNum);
    VirtualProtect((LPVOID)(addressToWrite), byteNum, OldProtection, NULL);
}

void Patches::addPatch(Patch* patch)
{
	Patches::patches.push_back(patch);
}

void Patches::applyUnpatched()
{
	for (Patch* patch : Patches::patches) {
		if (!patch->patched) {
			apply(patch);
		}
	}
}

void Patches::reapplyAll() {
	for (Patch* patch : Patches::patches) {
		apply(patch);
	}
}

void Patches::apply(Patch* patch)
{
	patch->patched = true;
	PatchMem(patch->address, patch->patch, patch->size);
}
