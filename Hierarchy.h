#ifndef Hierarchy_h
#define Hierarchy_h

#include <iostream>
#include <vector>
#include "Label.h"

class Hierarchy{

    public:

        Hierarchy();
        void pushPoint(const Point2D &point,int index);
        void showLabelPoint(const int index) const;
        std::string getAsEpsOnHierarchy(const int index)const;

    private:
        std::vector<Label> myLabel;
};

#endif 