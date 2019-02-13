#pragma once

#define BE_PLATFORM_WINDOWS
#ifdef BE_PLATFORM_WINDOWS
#include "../bepch.h"

// extern BE::Application* BE::CreateApplication();

int main(int argc, char** argv)
{
	BE::Log::Init();
	BE_WARN("ASDASD");
	std::cin.get();
}

#endif