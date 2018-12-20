//
//  main.cpp
//  Point Distance (Struct)
//
//  Created by Caitlin Sigler on 11/17/16.
//  Copyright © 2016 Caitlin Sigler. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

struct Point2D {
    double x;
    double y;
};

void printPoint(Point2D p){
    cout<< "("<<p.x<<","<< p.y<< ")\n";
}

Point2D getPoint(int x, int y) {
    Point2D point;
    point.x = x;
    point.y = y;
    return point;
}
double distance(Point2D p, Point2D q){
    return sqrt(pow(p.x-q.x,2)+pow(p.y-q.y, 2));
}

int main() {
    
    int x= 1;
    int y= 2;
    int x1= 3;
    int y1= 4;
    Point2D p= getPoint(x,y);
    Point2D q= getPoint(x1,y1);
    
    cout<< distance(p, q)<<endl;
    printPoint(p);
    
    return 0;
}
