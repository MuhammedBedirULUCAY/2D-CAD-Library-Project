#include "Polyline.h"
#include <cmath>
Polyline::Polyline()
{                   }

Polyline::Polyline(const Polyline &polyline){
    connetPolyline(polyline);
}
int Polyline::getSize()const{
    return myPolyline.size();
}

const Point2D& Polyline::getPoint(int index){
    return myPolyline.at(index);
}

void Polyline::connetPolyline(const Polyline &polyline){
    for(auto &p : polyline.myPolyline)
        addPoint(p);
}

void Polyline::addPoint(const double x, const double y){
    Point2D point(x, y);
    addPoint(point);
}

void Polyline::addPoint(const Point2D &point){
    myPolyline.push_back(point);
}

void Polyline::showPoints() const{
    for (auto &p : myPolyline){
        p.showPoint();
        std::cout << " -- ";
    }
}

// int main(){
//     Polyline p;
//     for(double i=0; i<100;++i){
//         Point2D a(i,std::sin(i));
//         p.addPoint(a);
//     }
//     p.showPoints();    
//     return 0;
// }