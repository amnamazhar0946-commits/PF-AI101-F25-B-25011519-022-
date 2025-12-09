#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, s, area;
    
    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;
    
    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    cout << fixed << setprecision(2);
    cout << "Side a: " << a << endl;
    cout << "Side b: " << b << endl;
    cout << "Side c: " << c << endl;
    cout << "Semi-perimeter (s): " << s << endl;
    cout << "Area of triangle: " << area << endl;
    
    return 0;
}
