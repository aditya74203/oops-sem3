#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;

public:
    void getTime()
    {
        cout << "Enter hours: ";
        cin >> hours;

        cout << "Enter minutes: ";
        cin >> minutes;
    }

    void display()
    {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }

    friend Time add(Time t1, Time t2);
};

Time add(Time t1, Time t2)
{
    Time t3;

    t3.minutes = t1.minutes + t2.minutes;
    t3.hours = t1.hours + t2.hours;

    if (t3.minutes >= 60)
    {
        t3.hours = t3.hours + t3.minutes / 60;
        t3.minutes = t3.minutes % 60;
    }

    return t3;
}

int main()
{
    Time t1, t2, t3;

    cout << "Enter first time:" << endl;
    t1.getTime();

    cout << "\nEnter second time:" << endl;
    t2.getTime();

    t3 = add(t1, t2);

    cout << "\nTotal time: ";
    t3.display();

    return 0;
}