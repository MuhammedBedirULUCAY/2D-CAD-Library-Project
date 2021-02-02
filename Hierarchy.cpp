#include "Hierarchy.h"

Hierarchy::Hierarchy()
{                       }

void Hierarchy::pushPoint(const Point2D &point, int index){

    if (myLabel.size() < index)
        myLabel[index].pushPoint(point);
    else if(myLabel.size() == index || index == 0){
        Label tmp;
        myLabel.push_back(tmp);
        myLabel[index].pushPoint(point);
    }    
    else {
        std::cout << "You pass layer more than 1 \n";
    }
}

void Hierarchy::showLabelPoint(const int index) const{

    myLabel[index].showPoints(index);
}

std::string  Hierarchy::getAsEpsOnHierarchy(const int index) const{
    std::string tm = "";
    if(index > myLabel.size())
        std::cout << "Not defined Label Layer\n";
    else
        tm = myLabel[index].getPointsOnLabel();
    return  "0 0 moveto\n" + tm;
}
