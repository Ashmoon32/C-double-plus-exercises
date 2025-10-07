#include<iostream>
using namespace std;
class Time{
    private:
    int hours;
    int minutes;
    int seconds;

    public: 
    Time() : hours(0), minutes(0), seconds(0) {}

    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    void display() const {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    void add(const Time& t1, const Time& t2);
};

void Time::add(const Time& t1, const Time& t2) {
    seconds = t1.seconds + t2.seconds;
    if(seconds>60){
        seconds-=60;
        minutes++;
    }
    minutes += t1.minutes + t2.minutes;
    if (minutes > 60){
        minutes -= 60;
        hours++;
    }
    hours += t1.hours + t2.hours;
}

int main() 
{
    Time t1(2,40,50);
    Time t2(4,30,40);
    Time t3;

    t3.add(t1,t2);
    cout<<"Result of Time Addition:";
    t3.display();
    return 0;
}

