#ifndef Polygon_H
#define Polygon_H

#include<iostream>
#include <vector>
#include <cmath>
#include"../Point2D.h"
#define PI 3.14285714

class Polygon{

    public :
        
        Polygon();
        Polygon(int edges,int length,double centerX = 0, double centerY = 0);
        Polygon(const Polygon& polygon);

        void setProperties(int edges, int length, double centerX, double centerY);
        int getSize();
        double getXofEdges(int index);
        double getYofEdges(int index);
        Point2D& getPoint(int index);

        void rotate(double degree, bool clockWise = true);

        void addPoints(const Point2D& point);
        void showPoints();

        void findAndAddPoints();

    private:

        int edges, length;
        double centerX, centerY;
        std::vector<Point2D> myPoligon;
};

#endif