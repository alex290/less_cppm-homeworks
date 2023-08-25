#pragma once

#ifdef LEAVELIB_EXPORTS
#define LEAVE_LIB_API __declspec(dllexport)
#else
#define LEAVE_LIB_API __declspec(dllimport)
#endif

#include <string>

class Leaver
{
public:
	Leaver() = default;
	LEAVE_LIB_API std::string leave(std::string name);
};