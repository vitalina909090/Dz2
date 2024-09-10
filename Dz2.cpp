#include <iostream>
#include <Windows.h>
#include "Point.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Point point;
    point.input();
    point.output();

    point.save("point.txt");
    Point newPoint;
    newPoint.load("point.txt");

    newPoint.output();

    return 0;
}