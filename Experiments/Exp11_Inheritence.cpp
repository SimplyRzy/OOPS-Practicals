#include <iostream.h>
#include <conio.h>

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }

    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    clrscr();
    Shape* shapePtr;

    Circle c;
    Rectangle r;

    shapePtr = &c;
    shapePtr->draw();

    shapePtr = &r;
    shapePtr->draw();

    shapePtr = new Circle();
    shapePtr->draw();
    delete shapePtr;

    getch();
    return 0;
}
