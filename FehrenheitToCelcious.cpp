#include <iostream>

using namespace std;

int main(){
    double fahrenheit, celsius;
    cout << "Please enter the value in Fahrenheit : ";
    cin >> fahrenheit;
    celsius = ((fahrenheit - 32) * 5)/9;
    cout << "The value in Celsius is : " << celsius;
    return 0;
}
