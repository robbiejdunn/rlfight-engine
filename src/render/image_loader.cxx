// https://wiki.libsdl.org/SDL_CreateRGBSurfaceFrom

#include "image_loader.h"

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#include "SDL.h"


void imageLoader::testFunction()
{
    // the color format you request stb_image to output,
    // use STBI_rgb if you don't want/need the alpha channel
    // std::string path = "assets";
    // for (const auto & entry : std::filesystem::directory_iterator(path))
    //     std::cout << entry.path() << std::endl;

    int req_format = STBI_rgb_alpha;
    int width, height, orig_format;
    unsigned char* data = stbi_load("assets/test.png", &width, &height, &orig_format, req_format);
    if(data == NULL) {
        SDL_Log("Loading image failed: %s", stbi_failure_reason());
        exit(1);
    }
    stbi_image_free(data);
    SDL_Log("Loaded successfully");
}

// SDL_Surface *getSDLSurfaceFromFile(char *fileName)
// {
//     // the color format you request stb_image to output,
//     // use STBI_rgb if you don't want/need the alpha channel
//     int req_format = STBI_rgb_alpha;
//     int width, height, orig_format;
//     unsigned char* data = stbi_load("./test.png", &width, &height, &orig_format, req_format);
// }
