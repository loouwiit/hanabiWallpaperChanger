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

	std::string videoPathString{ path };
	if (videoPathString[0] != '\'')
	{
		if (videoPathString[0] == '"')
		{
			// replace
			videoPathString[0] = '\'';
			videoPathString.pop_back();
			videoPathString.push_back('\'');
		}
		else
		{
			// add
			videoPathString.insert(0, 1, '\'');
			videoPathString.push_back('\'');
		}
	}

	std::string commandString;
	commandString = std::string(dconf) + ' ' +
		std::string(write) + ' ' +
		std::string(videoPathKey) + ' ' +
		'\"' + videoPathString + '\"';
	// dconf write videoPathKey videoPath

	// std::cout << commandString << '\n';
	system(commandString.c_str());
}
