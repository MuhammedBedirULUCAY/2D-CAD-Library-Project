#include "CAD2D.h"

CAD2D::CAD2D()
{                               }

CAD2D::CAD2D(double weight, double length)
{   setSize(weight, length);    }

CAD2D::CAD2D(double weight, double length,Hierarchy &a) 
:   myHierarchy(a)
{   setSize(weight, length);    }

void CAD2D::setSize(double &width,double &length){
    this->size.upRightX = length / 2;
    this->size.upRightY = width / 2;
    this->size.lowLeftX = -length / 2;
    this->size.lowLeftY = -width / 2;
}

void CAD2D::pushPoint(const Point2D &point,int index){
    myHierarchy.pushPoint(point,index);
}

void  CAD2D::showHierarchyPoint(int index){
    myHierarchy.showLabelPoint(index);
}

void CAD2D::addPolyline(Polyline &polyline, int index){
    for(int i=0; i<polyline.getSize(); ++i)
        myHierarchy.pushPoint(polyline.getPoint(i), index);
}

void CAD2D::addPolygon(Polygon &polygon, int index){
    for(int i=0; i<polygon.getSize(); ++i)
        myHierarchy.pushPoint(polygon.getPoint(i), index);
}

void CAD2D::CadExport(const std::string fileName,const std::string format,const int index)const{
    if(format == "eps")
        epsExport(fileName,index);
    else
        otherExport(fileName, format);
}

void CAD2D::epsExport(const std::string &fileName,const int index) const{

    std::ofstream file(fileName);
    file << "%!PS-Adobe-3.0 EPSF-3.0\n";
    file << "%%BoundingBox: " << size.box();
    file << 0 << " setlinewidth\n";
    file << 0 << " " << 0 << " " << 0 << " setrgbcolor\n";
    file << myHierarchy.getAsEpsOnHierarchy(index);
    file << "stroke";
    file.close();
}

void CAD2D::otherExport(const std::string &fileName, const std::string &format) const{




}
