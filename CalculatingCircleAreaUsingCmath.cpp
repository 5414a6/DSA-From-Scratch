#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double area, radius;
    const double pi = 3.1416;
    cout << "Please provide the radius : ";
    cin >> radius;

    cout << pi * pow(radius, 2);
    return 0;
}
