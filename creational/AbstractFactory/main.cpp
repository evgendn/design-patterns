#include <cstring>
#include <iostream>
#include "abstract_factory.cpp"
#include "metal_factory.cpp"
#include "gl_factory.cpp"

int main() {
    char apiType[] = "GL";
	AbstractFactory* factory = nullptr;
	if (strcmp(apiType, "GL") == 0) {
		factory = new GLFactory();
	} else if (strcmp(apiType, "Metal") == 0) {
		factory = new MetalFactory();
	} else {
		std::cout << "Does not support" << std::endl;
		exit(0);
	}

	Rectangle* rect = factory->createRect();
	GPUInfo* info = factory->createGPUInfo();

	rect->draw();
	info->getInfo();
}
