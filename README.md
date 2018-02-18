# play_video_openCV_C
How to play video using OpenCV with fullscreen option. Tested On Raspberry Pi3 - 2017-11-29-raspbian-stretch - tft 3.5"

# Prerequirement
libopencv2-dev

$ apt-get install libopencv2-dev

# Compile
$ g++ -o playvideo -lopencv_core -lopencv_video playvideo.cpp

# Run ?
$ ./playvideo

![Demo](demo.png?raw=true "Demo Play Video with OpenCV C++")
