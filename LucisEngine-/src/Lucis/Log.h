#pragma once

#include <memory>
#include "Core.h"
#include "spdlog\spdlog.h"

namespace Lucis {

	class LUCIS_API Log
	{
	public:
		Log();
		~Log();
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core Log Macros
#define LE_CORE_ERROR(...)	::Lucis::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LE_CORE_WARN(...)	::Lucis::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LE_CORE_INFO(...)	::Lucis::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LE_CORE_TRACE(...)	::Lucis::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define LE_CORE_FATAL(...)	::Lucis::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client Log Macros
#define LE_ERROR(...)	::Lucis::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LE_WARN(...)	::Lucis::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LE_INFO(...)	::Lucis::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LE_TRACE(...)	::Lucis::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define LE_FATAL(...)	::Lucis::Log::GetCoreLogger()->fatal(__VA_ARGS__)
