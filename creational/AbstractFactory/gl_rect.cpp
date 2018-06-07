#pragma once
#include <iostream>
#include "rectangle.cpp"

class GLRect: public Rectangle {
    public:
        void draw() {
            std::cout << "Drawing GL rectangle" << std::endl;
        }
};
