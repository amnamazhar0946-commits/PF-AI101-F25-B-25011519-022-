#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, max;
    
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;
    
    max = a;
    
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    
    cout << "Maximum number is: " << max << endl;
    return 0;
}
