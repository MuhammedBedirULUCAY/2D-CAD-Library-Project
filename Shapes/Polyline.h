#ifndef Polyline_H
#define Polyline_H

#include "../Point2D.h"
#include <vector>

class Polyline{

    public:
        
        Polyline();
        Polyline(const Polyline& polyline);

        void connetPolyline(const Polyline& polyline);
        void addPoint(const Point2D& point);
        void addPoint(const double x, const double y);
        void showPoints()const;
        int getSize()const ;

        const Point2D& getPoint(int index);

    private:
        std::vector<Point2D> myPolyline;
};

#endif