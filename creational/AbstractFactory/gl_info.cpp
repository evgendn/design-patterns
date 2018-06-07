#pragma once
#include <iostream>
#include "gpu_info.cpp"

class GLInfo: public GPUInfo {
	public:
		void getInfo() {
			std::cout << "Metal sostab" << std::endl;
		} 
};
