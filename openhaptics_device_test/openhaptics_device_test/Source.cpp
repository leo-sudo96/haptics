//OpenHaptics QuickHaptics - ComplexScene example
//SensAble Technologies, Woburn, MA
//September 03, 2008
//Programmer: Hari Vasudevan
//////////////////////////////////////////////////////////////////////////////




#include <QHHeadersGLUT.h>//Include all necessary headers
#include<HD/hd.h>
#include<GL/glut.h>
#include<iostream>
#include <string>

int main(int argc, char* argv[])
{
    HDErrorInfo error;
    HHD hHD = hdInitDevice(HD_DEFAULT_DEVICE);
  

    if (HD_DEVICE_ERROR(error = hdGetError()))
    {
        hduPrintError(stderr, &error, "Failed to initialize haptic device");
        fprintf(stderr, "\nPress any key to quit.\n");
        int ch = std::cin.get();
        return -1;
    }

    printf("1. Found device %s\n", hdGetString(HD_DEVICE_SERIAL_NUMBER));

 

    //qhStart();//Set everything in motion

    return 0;
}
