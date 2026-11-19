// create a class time with hours and minutes overload the subtraction opertor to subtract two time objects and display the result in hours and minutes.
#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}

    Time operator-(const Time& t) {
        int totalMinutes1 = hours * 60 + minutes;
        int totalMinutes2 = t.hours * 60 + t.minutes;
        int diffMinutes = totalMinutes1 - totalMinutes2;

        int resultHours = diffMinutes / 60;
        int resultMinutes = diffMinutes % 60;

        return Time(resultHours, resultMinutes);
    }

    void display() {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }
};  