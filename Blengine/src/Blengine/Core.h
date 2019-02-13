#pragma once

#define BE_PLATFORM_WINDOWS
#define BE_BUILD_DLL
#ifdef BE_PLATFORM_WINDOWS
#	ifdef BE_BUILD_DLL
#		define BE_API __declspec(dllexport)
#	else
#		define BE_API __declspec(dllimport)
#	endif
#else
#	error Blengine only supports Windows!
#endif

#ifdef BL_DEBUG
#	define HZ_ENABLE_ASSERTS
#endif

#ifdef BL_ENABLE_ASSERTS
#	define BL_ASSERT(x, ...) { if(!(x)) { HZ_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#	define BL_CORE_ASSERT(x, ...) { if(!(x)) { HZ_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
#	define BL_ASSERT(x, ...)
#	define BL_CORE_ASSERT(x, ...)
#endif