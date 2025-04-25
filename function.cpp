#include <string>
#include <iostream>

#include "function.hpp"

namespace HanabiWallpaperChanger
{
	namespace Commands
	{
		constexpr char dconf[] = "dconf";
		constexpr char write[] = "write";
		constexpr char videoPathKey[] = "/io/github/jeffshee/hanabi-extension/video-path";
	}
}

void HanabiWallpaperChanger::setPath(const char* path)
{
	using Commands::dconf;
	using Commands::write;
	using Commands::videoPathKey;

	std::string commandString;
	commandString = std::string(dconf) + ' ' +
		std::string(write) + ' ' +
		std::string(videoPathKey) + ' ' +
		"\"'" + std::string(path) + "'\"";
	// dconf write videoPathKey videoPath

	// std::cout << commandString << '\n';
	system(commandString.c_str());
}
