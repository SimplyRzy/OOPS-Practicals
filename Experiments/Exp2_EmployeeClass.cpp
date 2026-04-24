#include <iostream.h>
#include <conio.h>

class Employee
{
    char name[50];
    char address[100];
    int age;
    float salary;

public:
    // Function to set values
    void setData()
    {
        cout << "Enter Name: ";
        cin.getline(name, 50);

        cout << "Enter Address: ";
        cin.getline(address, 100);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Function to display values
    void displayData()
    {
        cout << "\nEmployee Details\n";
        cout << "Name : " << name << endl;
        cout << "Address : " << address << endl;
        cout << "Age : " << age << endl;
        cout << "Salary : " << salary << endl;
    }
};

void main()
{
    clrscr();

    Employee e;

    e.setData();
    e.displayData();

    getch();
}
