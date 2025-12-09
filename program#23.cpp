#include <iostream>
#include <iomanip>
#define PI 3.14159
using namespace std;

int main() {
    float radius, area, circumference;
    
    cout << "Enter radius of circle: ";
    cin >> radius;
    
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    
    cout << fixed << setprecision(2);
    cout << "Radius: " << radius << endl;
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;
    
    return 0;
}
