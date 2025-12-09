#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float fahrenheit, celsius;
    
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    
    celsius = (5.0 / 9.0) * (fahrenheit - 32);
    
    cout << fixed << setprecision(2);
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    cout << "Temperature in Celsius: " << celsius << endl;
    
    return 0;
}
