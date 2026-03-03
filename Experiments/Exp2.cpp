#include <iostream.h>
#include <conio.h>
#include <string.h>

class Employee
{
private:
    char name[100];
    char address[200];
    int age;
    float salary;

public:
    // Function to set values
    void setValues(char empName[], char empAddress[], int empAge, float empSalary)
    {
        strcpy(name, empName);
        strcpy(address, empAddress);
        age = empAge;
        salary = empSalary;
    }

    // Function to display values
    void displayValues()
    {
        cout << "\n--- Employee Details ---\n";
        cout << "Name : " << name << endl;
        cout << "Address : " << address << endl;
        cout << "Age : " << age << endl;
        cout << "Salary : " << salary << endl;
    }
};

void main()
{
    clrscr();

    Employee emp;
    char name[100], address[200];
    int age;
    float salary;

    cout << "Enter Name: ";
    cin.getline(name, 100);

    cout << "Enter Address: ";
    cin.getline(address, 200);

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Salary: ";
    cin >> salary;

    emp.setValues(name, address, age, salary);
    emp.displayValues();

    getch();
}