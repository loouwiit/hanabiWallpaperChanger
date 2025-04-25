#include <iostream>

#include "function.hpp"

int main(int argc, char* argv[])
{
	if (argc > 1)
	{
		HanabiWallpaperChanger::setPath(argv[1]);
		return 0;
	}

	// input one
	std::string videoPath;
	std::cout << "input new video path:";
	std::getline(std::cin, videoPath);
	HanabiWallpaperChanger::setPath(videoPath.c_str());

	return 0;
}
