#include <iostream.h>
#include <conio.h>

class SimpleInterest
{
private:
    float principal, rate, time;

public:
    void inputValues()
    {
        cout << "Enter Principal: ";
        cin >> principal;

        cout << "Enter Rate of Interest: ";
        cin >> rate;

        cout << "Enter Time (in years): ";
        cin >> time;
    }

    void calculateInterest()
    {
        float interest = (principal * rate * time) / 100;
        float totalAmount = principal + interest;

        cout << "Simple Interest: " << interest << endl;
        cout << "Total Amount: " << totalAmount << endl;
    }
};

void main()
{
    clrscr();   

    SimpleInterest si;
    si.inputValues();
    si.calculateInterest();

    getch();    
}