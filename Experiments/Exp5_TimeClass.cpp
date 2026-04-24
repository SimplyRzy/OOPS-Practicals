#include <iostream.h>
#include <conio.h>

class TIME
{
public:
    int hours, minutes, seconds;

    void getTime()
    {
        cout << "Enter hours minutes and seconds: ";
        cin >> hours >> minutes >> seconds;
    }

    void showTime()
    {
        cout << hours << " : " << minutes << " : " << seconds << endl;
    }

    TIME addTime(TIME t1, TIME t2)
    {
        TIME t3;

        t3.seconds = t1.seconds + t2.seconds;
        t3.minutes = t1.minutes + t2.minutes;
        t3.hours = t1.hours + t2.hours;

        if (t3.seconds >= 60)
        {
            t3.seconds -= 60;
            t3.minutes++;
        }

        if (t3.minutes >= 60)
        {
            t3.minutes -= 60;
            t3.hours++;
        }

        return t3;
    }
};

int main()
{
    clrscr();
    TIME t1, t2, t3, t;

    cout << "Enter first time\n";
    t1.getTime();

    cout << "Enter second time\n";
    t2.getTime();

    t3 = t.addTime(t1, t2);

    cout << "Sum of time is: ";
    t3.showTime();

    getch();
    return 0;
}






