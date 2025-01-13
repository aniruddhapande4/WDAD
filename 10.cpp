#include<bits/stdc++.h>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle." << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a triangle." << endl;
    }
};

int main() {
    Shape* shapePtr;

    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    shapePtr = &circle;
    shapePtr->draw();  // Calls Circle's draw()

    shapePtr = &rectangle;
    shapePtr->draw();  // Calls Rectangle's draw()

    shapePtr = &triangle;
    shapePtr->draw();  // Calls Triangle's draw()

    return 0;
}
