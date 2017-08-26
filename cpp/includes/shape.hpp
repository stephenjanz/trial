#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape
{
    public:
        void setWidth(int w) {
            width = w;
        }

        void setHeight(int h) {
            height = h;
        }

    protected:
        int width;
        int height;
};

#endif /** SHAPE_HPP */
