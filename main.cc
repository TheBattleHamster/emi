

#include <vector>
#include <cstdint>
#include <random>
#include <iostream>
#include <fstream>

#include <SDL2/SDL.h>

#include "Window.h"

int main(int, char **)
{
	SDL_Init(SDL_INIT_EVERYTHING);
				Window win;
				win.main();
	/*try {

		} catch (const std::exception & e) {
			std::cerr << e.what() << std::endl;
			return 1;
		} catch (...) {
			std::cerr << "????????? ??????????? ??????" << std::endl;
			return 2;
		}*/
	return 0;
}



