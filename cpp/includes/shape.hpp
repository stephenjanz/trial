#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape
{
    public:
        Shape();
        void setWidth(int);
        void setHeight(int);
        int getWidth(void);
        int getHeight(void);

    protected:
        int width;
        int height;
};

#endif /** SHAPE_HPP */
