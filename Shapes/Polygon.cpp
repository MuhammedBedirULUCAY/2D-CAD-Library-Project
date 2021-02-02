#include "Polygon.h"

Polygon::Polygon()
{               }

Polygon::Polygon(int edges,int length, double centerX, double centerY){
    setProperties(edges,length,centerX,centerY);
    findAndAddPoints();
}

void Polygon::setProperties(int edges,int length, double centerX, double centerY){
    this->edges = edges;
    this->length = length;
    this->centerX = centerX;
    this->centerY = centerY;
}

int Polygon::getSize(){
    return myPoligon.size();
}

Point2D& Polygon::getPoint(int index){
    return myPoligon.at(index);
}

double Polygon::getXofEdges(int index){
    if(index > myPoligon.size()){
        std::cout << "Ouf of size\n";
        return -1;
    }
    return myPoligon[index].getX();
}

double Polygon::getYofEdges(int index){
    if(index > myPoligon.size()){
        std::cout << "Ouf of size\n";
        return -1;
    }
    return myPoligon[index].getY();
}

void Polygon::addPoints(const Point2D &point){
    myPoligon.push_back(point);
}

void Polygon::showPoints(){
    for(auto p : myPoligon)
        p.showPoint();
}

void Polygon::findAndAddPoints(){
    double x, y;

    x = round(centerX + length * std::cos(0));
    y = round(centerY + length * std::sin(0));
    Point2D tm(x,y, true);
    addPoints(tm);

    for (int i = 1; i < edges; i++){
        x = round(centerX + length * std::cos(2 * PI * i / edges)); 
        y = round(centerY + length * std::sin(2 * PI * i / edges));
        tm = Point2D(x,y);
        addPoints(tm);
    }
    
    x = round(centerX + length * std::cos(0));
    y = round(centerY + length * std::sin(0));
    tm = Point2D(x,y);
    addPoints(tm);
}

void Polygon::rotate(double degree,bool clockWise = true){



}

// int main(){
//     Polygon obj(4,10);
//     obj.showPoints();
// }
