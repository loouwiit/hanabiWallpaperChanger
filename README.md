# hanabiWallpaperChanger
一个控制[hanabi](https://github.com/jeffshee/gnome-ext-hanabi)的小软件

## 原理
使用dconf-editor写入gnome-extension的配置，从而修改hanabi的壁纸

## 环境
* dconf-editor

``` sh
sudo apt install dconf-editor
```

## 编译
``` sh
$ git clone https://github.com/loouwiit/hanabiWallpaperChanger
$ cd hanabiWallpaperChanger
$ mkdir build
$ g++ main.cpp function.cpp -o build/hanabiWallpaperChanger
```
编译完成的可执行文件为build/hanabiWallpaperChanger

## 使用

由参数传入视频路径：
``` sh
$ hanabiWallpaperChanger path/to/video
```

运行时输入视频路径：
``` sh
$ hanabiWallpaperChanger
input new video path:path/to/video
```
