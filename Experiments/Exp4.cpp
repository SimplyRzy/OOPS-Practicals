#include <iostream.h>
#include <conio.h>

class Power
{
public:
    // Function with default argument
    double power(double m, int n = 2)
    {
        double result = 1;

        for(int i = 1; i <= n; i++)
        {
            result = result * m;
        }
        return result;
    }
};

void main()
{
    clrscr();

    Power p;
    double m;
    int n;

    cout << "Enter value of m: ";
    cin >> m;

    cout << "Enter value of n: ";
    cin >> n;

    // Call with both arguments
    cout << "m raised to power n = " << p.power(m, n) << endl;

    // Call with default argument (square)
    cout << "Square of m = " << p.power(m) << endl;

    getch();
}