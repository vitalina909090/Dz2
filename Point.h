#pragma once
#include <string>
using namespace std;

class Point {
private:
    double x, y, z;

public:
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    double getX();
    double getY();
    double getZ();

    void input();
    void output() const;

    void save(string filename);
    void load(string filename);
};
