#pragma once
#include <iostream>
#include "abstract_factory.cpp"
#include "gl_rect.cpp"
#include "gl_info.cpp"

class GLFactory: public AbstractFactory {
    public:
        Rectangle* createRect() {
            return new GLRect();
        }

        GPUInfo* createGPUInfo() {
            return new GLInfo();
        } 
};

