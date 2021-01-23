
#pragma once
#include "stdafx.h"

const int FilterIndex = 1;
const std::string name = "PhoneCam Video";
const std::wstring wname(name.begin(), name.end());
#define g_wszVirtualCamera wname.c_str()

#define FILTER_GUID "{1950D08B-6EED-47AF-9154-DA463C8CA037}"
// {1950D08B-6EED-47AF-9154-DA463C8CA037}
DEFINE_GUID(CLSID_VIRTUALCAMERAFILTER,
0x1950d08b, 0x6eed, 0x47af, 0x91, 0x54, 0xda, 0x46, 0x3c, 0x8c, 0xa0, 0x37);

#ifdef __cplusplus
extern "C" {
#endif

DEFINE_GUID(nullGuid, 
		0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0);

#ifdef __cplusplus
}
#endif
