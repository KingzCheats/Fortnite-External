#include "pattern.hpp"
#include <vector>
#include <string>s

void apply_hook()
{
	UNICODE_STRING driver_name = RTL_CONSTANT_STRING(L"\\Driver\\Disk");
	PDRIVER_OBJECT driver_object = nullptr;
	auto status = ObReferenceObjectByName(
		&driver_name,
		OBJ_CASE_INSENSITIVE,
		nullptr,
		0,
		*IoDriverObjectType,
		KernelMode,
		nullptr,
		(PVOID*)&driver_object
	);

	if(!driver_object || !NT_SUCCESS(status))
	{
		KdPrint(("%s %d : ObReferenceObjectByName returned 0x%08X driver_object: 0x%016X\n", __FUNCTION__, __LINE__, status, driver_object));
		return;
	}

	auto& device_control = driver_object->MajorFunction[IRP_MJ_DEVICE_CONTROL];
	g_original_device_control = device_control;
	device_control = &hooked_device_control;

	ObDereferenceObject(driver_object);
}

