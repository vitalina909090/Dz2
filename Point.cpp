#include "Point.h"
#include <iostream>
#include <fstream>

using namespace std;

void Point::setX(double newX) {
    if (newX >= -100 && newX <= 100) {
        x = newX;
    }
    else {
        cout << "Помилка: значення x виходить за межі (-100, 100)\n";
        x = 0;
    }
}

void Point::setY(double newY) {
    if (newY >= -100 && newY <= 100) {
        y = newY;
    }
    else {
        cout << "Помилка: значення y виходить за межі (-100, 100)\n";
        y = 0;
    }
}

void Point::setZ(double newZ) {
    if (newZ >= -100 && newZ <= 100) {
        z = newZ;
    }
    else {
        cout << "Помилка: значення z виходить за межі (-100, 100)\n";
        z = 0;
    }
}

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}

double Point::getZ() {
    return z;
}

void Point::input() {
    double newX, newY, newZ;
    cout << "Вводьте координати у межах від -100 до 100\n";
    cout << "Введіть координату x: ";
    cin >> newX;
    setX(newX);
    cout << "Введіть координату y: ";
    cin >> newY;
    setY(newY);
    cout << "Введіть координату z: ";
    cin >> newZ;
    setZ(newZ);
}

void Point::output() const {
    cout << "Точка: (" << x << " " << y << " " << z << ")\n";
}

void Point::save(string filename) {
    ofstream file(filename);
    if (file.is_open()) {
        file << x << " " << y << " " << z << "\n";
        file.close();
        cout << "Дані збережено у файл " << filename << "\n";
    }
    else {
        cerr << "Не вдалося відкрити файл для запису\n";
    }
}

void Point::load(string filename) {
    ifstream file(filename);
    if (file.is_open()) {
        file >> x >> y >> z;
        file.close();
        cout << "Дані завантажено з файлу " << filename << "\n";
    }
    else {
        cerr << "Не вдалося відкрити файл для читання\n";
    }
}