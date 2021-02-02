#ifndef CAD2D_H
#define CAD2D_H

#include <iostream>
#include <fstream>
#include "Hierarchy.h"
#include "Label.h"
#include "Shapes/Polyline.h"
#include "Shapes/Polygon.h"

class Size{
    public:
    int upRightX, upRightY,
        lowLeftX, lowLeftY;
    std::string box()const {
        return std::to_string(lowLeftX) + " " + std::to_string(lowLeftX) + " " +
               std::to_string(upRightX) + " " + std::to_string(upRightY) + "\n";
    }
};

//When you want to create a eps file you need size of sheet
//And Label can make to do these (increase and decrease)

class CAD2D{

    public:

        CAD2D();
        CAD2D(double width, double height);
        CAD2D(double width, double height, Hierarchy &a);

        void setSize(double &width, double &length);

        void CadExport(const std::string fileName, const std::string format,const int index) const;
        void epsExport(const std::string &fileName,const int index)const;
        void otherExport(const std::string &fileName, const std::string &format) const;
        
        void pushPoint(const Point2D &point,int index);
        void addPolyline(Polyline& polyline,int index);
        void addPolygon(Polygon& polygon,int index);
        
        void showHierarchyPoint(int index); //Indexe gore hierarchy icindeki labeli secip noktalri aliyor

    private : 
        Size size;
        Hierarchy myHierarchy;
        // std::vector<Label> LabelsInCAD2D;
};

#endif