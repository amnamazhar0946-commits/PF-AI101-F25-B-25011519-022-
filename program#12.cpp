#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const float PI = 3.14159;
    float radius, height, volume;
    
    cout << "Enter radius of cylinder: ";
    cin >> radius;
    cout << "Enter height of cylinder: ";
    cin >> height;
    
    volume = PI * radius * radius * height;
    
    cout << fixed << setprecision(2);
    cout << "Volume of cylinder: " << volume << endl;
    return 0;
}
