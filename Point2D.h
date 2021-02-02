#ifndef point2D_H
#define point2D_H

#include <iostream>
#include <string>

class Point2D{
    
    public:
        Point2D(double x, double y,bool moveTo = false);
        void setCoordinate(double x, double y);
        
        void setX(double x);
        void setY(double Y);
        void setMoveTo(bool& moveTo);

        double getX();
        double getY();
        double getMoveTo();

        void showPoint()const;
        std::string getAsEpsOnPoint() const;

    private :
       double  x,y;
       bool moveTo = false;
}; 

#endif 

