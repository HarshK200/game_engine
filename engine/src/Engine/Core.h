#pragma once

#ifdef ENGINE_PLATFORM_LINUX
        #ifdef ENGINE_BUILD_SO
                #define ENGINE_API __attribute__((visibility("default")))
        #else
                #define ENGINE_API
        #endif
#else
        #error engine only supports Linux!
#endif
