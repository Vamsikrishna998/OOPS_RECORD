#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Function to input time
    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    // Function to display time
    void display() {
        cout << hours << " hrs " << minutes << " min " << seconds << " sec";
    }

    // Function to add two time objects and store result in current object
    void add(Time t1, Time t2) {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes + (seconds / 60);
        hours = t1.hours + t2.hours + (minutes / 60);

        seconds = seconds % 60;
        minutes = minutes % 60;
    }
};

int main() {
    Time t1, t2, t3;

    cout << "Enter first time:\n";
    t1.input();

    cout << "\nEnter second time:\n";
    t2.input();

    // Add two times
    t3.add(t1, t2);

    cout << "\nSum of times: ";
    t3.display();

    cout << endl;
    return 0;
}
