#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include <iostream>

using namespace std;

class Triangle {
    private:
        int base;
        int height;
    public:
        void set_base(int b);
        void set_height(int h);
        int area();
};

#endif
