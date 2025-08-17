#include<iostream>
using namespace std;
class Distance {
    private:

    int feet;
    float inches;

    public:

    Distance() : feet(0), inches(0) {}

    Distance(int ft, float in) : feet(ft), inches(in) {}

    void getDist() {
        cout << "\nEnter Feets ans Inches:";
        cin >> feet >> inches;
    }

    void showDist() {
        cout << feet << "\'-" << inches << "\"";
    }

    Distance operator - (Distance d2);
};

Distance Distance :: operator - (Distance d2) {
    float f1 = feet + inches/12;
    float f2 = d2.feet + d2.inches/12;
    float f = f1 - f2;
    Distance Temp;
    Temp.feet = int(f);
    Temp.inches = (f - Temp.feet) * 12;

    return Temp;
}

int main()
{
    Distance d1(5, 9.5);
    Distance d2;
    d2.getDist();
    Distance d3;
    d3 = d1 - d2;

    cout << "\ndist1 = ";
    d1.showDist();

    cout << "\ndist2 = ";
    d2.showDist();

    cout << "\n d3 = d1 - d2 = ";
    d3.showDist();

    return 0;
}

