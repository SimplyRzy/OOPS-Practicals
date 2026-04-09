#include <iostream.h>
#include <conio.h>

class Base {
public:
    virtual void show() {
        cout << "This is Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "This is Derived class show function" << endl;
    }
};

int main() {
    clrscr();
    Base* bptr;
    Derived d;

    bptr = &d;

    bptr->show();

    getch();
    return 0;
}
