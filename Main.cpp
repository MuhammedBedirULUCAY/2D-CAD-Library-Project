#include <iostream>
#include "CAD2D.h"
#include <cmath>

// cad2d > hierarchy > Label > Point2D

int main(){

    CAD2D line(200,200);

    Point2D a(100,100),b(100,0);

    Polygon tm(6,30);

    Polygon tm2(3, 30,tm.getXofEdges(1), tm.getYofEdges(1));

    line.addPolygon(tm,0);
    line.addPolygon(tm2,0);

    line.showHierarchyPoint(0);

    line.epsExport("ilk.eps",0);
    
    return 0;
}