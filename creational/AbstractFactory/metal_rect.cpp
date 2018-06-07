#pragma once
#include <iostream>
#include "rectangle.cpp"

class MetalRect: public Rectangle {
    public:
        void draw() {
            std::cout << "Drawing Metal rectangle" << std::endl;
        }
};
