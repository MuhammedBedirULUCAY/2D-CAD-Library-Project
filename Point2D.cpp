#include "Point2D.h"

Point2D::Point2D(double x, double y, bool moveTo) : x(x), y(y) , moveTo(moveTo)
{}

void Point2D::setCoordinate(double x, double y){
    setX(x);           setY(y);
}

void Point2D::setX(double x){
    this->x = x;
}

void Point2D::setY(double y){
    this->y = y;
}

void Point2D::setMoveTo(bool& moveTo){
    this->moveTo = moveTo;
}

double Point2D::getX(){
    return x;
}

double Point2D::getY(){
    return y;
}

double Point2D::getMoveTo(){
    return moveTo;
}

void Point2D::showPoint() const{
    std::cout << "(" << x << "," << y << "," << moveTo<<")";
}

std::string Point2D::getAsEpsOnPoint() const{
    std::string tm;
    if(moveTo)
        return std::to_string(x) + " " + std::to_string(y) + " moveto\n";
    return std::to_string(x)  + " " + std::to_string(y)  +  " lineto\n";
}
