#pragma once
#include "rectangle.cpp"
#include "gpu_info.cpp"

class AbstractFactory {
    public:
        virtual Rectangle* createRect() = 0; 
        virtual GPUInfo* createGPUInfo() = 0;
};
