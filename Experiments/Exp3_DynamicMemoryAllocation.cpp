#include <iostream.h>
#include <conio.h>

class Student
{
    char *name;
    int *age;

public:
    // Constructor: dynamic memory allocation
    Student()
    {
        name = new char[50];
        age = new int;
    }

    // Function to take student details
    void getData()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> *age;
    }

    // Function to display student details
    void displayData()
    {
        cout << "\nStudent Details\n";
        cout << "Name : " << name << endl;
        cout << "Age : " << *age << endl;
    }

    // Destructor: dynamic memory deallocation
    ~Student()
    {
        delete[] name;
        delete age;
    }
};

void main()
{
    clrscr();

    Student s;
    s.getData();
    s.displayData();

    getch();
}
