#pragma once

#ifdef LE_PLATFORM_WINDOWS
	#ifdef LE_BUILD_DLL
	#define LUCIS_API __declspec(dllexport)
	#else
	#define LUCIS_API __declspec(dllimport)
	#endif


#endif //  LE_PLATFORM_WINDOWS
