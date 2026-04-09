#include <iostream.h>
#include <conio.h>

class alpha {
public:
    alpha() {
        cout << "Constructor of class alpha is called" << endl;
    }
};

class beta {
public:
    beta() {
        cout << "Constructor of class beta is called" << endl;
    }
};

class gamma : public alpha, public beta {
public:
    gamma() {
        cout << "Constructor of class gamma is called" << endl;
    }
};

int main() {
    clrscr();
    gamma g;

    getch();
    return 0;
}
