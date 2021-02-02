#include "Label.h"

Label::Label()
{               }

void Label::pushPoint(const Point2D& point){
    PointsInLabel.push_back(point);
}

void Label::popPoint(){
    PointsInLabel.pop_back();
}

void Label::setColor(int& r, int& g, int& b){
    this->color.red  = r;
    this->color.green = g;
    this->color.blue = b;
}

void Label::setThickness(int& thickness){
    this->thickness = thickness;
}

void Label::showPoints(const int index) const{

    for (auto P : PointsInLabel){
        P.showPoint();
        std::cout << "\n";
    }
}

std::string Label::getPointsOnLabel() const{
    
    std::string tm = "";
    for (auto P : PointsInLabel)
        tm = tm + P.getAsEpsOnPoint();
    
    return tm;
}

// int main(){

//     return 0;
// }


