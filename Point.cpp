#include "Point.h"
#include <iostream>
#include <fstream>

using namespace std;

void Point::setX(double newX) {
    if (newX >= -100 && newX <= 100) {
        x = newX;
    }
    else {
        cout << "�������: �������� x �������� �� ��� (-100, 100)\n";
        x = 0;
    }
}

void Point::setY(double newY) {
    if (newY >= -100 && newY <= 100) {
        y = newY;
    }
    else {
        cout << "�������: �������� y �������� �� ��� (-100, 100)\n";
        y = 0;
    }
}

void Point::setZ(double newZ) {
    if (newZ >= -100 && newZ <= 100) {
        z = newZ;
    }
    else {
        cout << "�������: �������� z �������� �� ��� (-100, 100)\n";
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
    cout << "������� ���������� � ����� �� -100 �� 100\n";
    cout << "������ ���������� x: ";
    cin >> newX;
    setX(newX);
    cout << "������ ���������� y: ";
    cin >> newY;
    setY(newY);
    cout << "������ ���������� z: ";
    cin >> newZ;
    setZ(newZ);
}

void Point::output() const {
    cout << "�����: (" << x << " " << y << " " << z << ")\n";
}

void Point::save(string filename) {
    ofstream file(filename);
    if (file.is_open()) {
        file << x << " " << y << " " << z << "\n";
        file.close();
        cout << "��� ��������� � ���� " << filename << "\n";
    }
    else {
        cerr << "�� ������� ������� ���� ��� ������\n";
    }
}

void Point::load(string filename) {
    ifstream file(filename);
    if (file.is_open()) {
        file >> x >> y >> z;
        file.close();
        cout << "��� ����������� � ����� " << filename << "\n";
    }
    else {
        cerr << "�� ������� ������� ���� ��� �������\n";
    }
}