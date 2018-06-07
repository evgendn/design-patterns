#pragma once
#include <iostream>
#include "gpu_info.cpp"

class MetalInfo: public GPUInfo {
	public:
		void getInfo() {
			std::cout << "OpenGL is depricated now, lol" << std::endl;
		}
};
