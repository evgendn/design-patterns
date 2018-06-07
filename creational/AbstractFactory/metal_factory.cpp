#pragma once
#include <iostream>
#include "abstract_factory.cpp"
#include "metal_rect.cpp"
#include "metal_info.cpp"

class MetalFactory: public AbstractFactory {
    public:
        Rectangle* createRect() {
            return new MetalRect;
        }

        GPUInfo* createGPUInfo() {
            return new MetalInfo;
        } 
};

