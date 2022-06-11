#ifndef RTWEEKEND_STB_IMAGE_H
#define RTWEEKEND_STB_IMAGE_H

//Disable pedantic warnings for this external library.
#ifdef _MSC_VER
    //Microsoft Visual C++ Comiler
    #pragma warning (push ,0)
#endif

#define STB_IMAGE_IMPLEMENTATION
#include"external/stb_image.h"

#ifdef _MSC_VER
    //Microsoft Visual C++ Comiler

    #pragma warning (pop)
#endif

#endif