#include <iostream>
#include <iomanip>
#define PI 3.14159
using namespace std;

int main() {
    float radius, area;
    
    cout << "Enter radius of circle: ";
    cin >> radius;
    
    area = PI * radius * radius;
    
    cout << fixed << setprecision(2);
    cout << "Area of circle: " << area << endl;
    return 0;
}
