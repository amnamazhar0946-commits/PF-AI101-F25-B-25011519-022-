#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float v, t, a, s;
    
    cout << "Enter initial velocity (v): ";
    cin >> v;
    cout << "Enter time (t): ";
    cin >> t;
    cout << "Enter acceleration (a): ";
    cin >> a;
    
    s = v * t + (1.0/2.0) * a * t * t;
    
    cout << fixed << setprecision(2);
    cout << "Displacement (s) = " << s << endl;
    return 0;
}
