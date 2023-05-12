#pragma once
#include <string>
using namespace std;

namespace ariel {

class Point {
public:
    Point();
    Point(double xar, double yar);
    double distance(Point p);
    void print();
    Point moveTowards(Point source, Point destination, double distance);

private:
    double x_;
    double y_;
};
}