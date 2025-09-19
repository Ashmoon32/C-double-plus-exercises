#include<iostream>
using namespace std;
int main()
{
    const double gft = 7.481;
    double gallons, cubicFeets;

    cout << "Enter the number of gallons: ";
    cin >> gallons;
    
    cubicFeets = gallons / gft;

    cout << gallons << " gallons is equivalent to " << cubicFeets << " cubic feets." << endl;
    return 0;
}