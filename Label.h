#ifndef Label_H
#define Label_H
    
#include <iostream>
#include <vector>
#include <string>
#include "Point2D.h"


class RGB{
    public:
        int red = 0, green = 0, blue = 0;
};

class Label{

    public:
        Label();
        void pushPoint(const Point2D &point);
        void popPoint();
        void setColor(int &r, int &g, int &b);
        void setThickness(int& thickness);
        void showPoints(const int index)const;

        std::string getPointsOnLabel()const;

    private : 
        std::string id;
        RGB color;
        int thickness;
        std::vector<Point2D> PointsInLabel;
};


#endif