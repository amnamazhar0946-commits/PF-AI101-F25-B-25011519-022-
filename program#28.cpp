#include <iostream>
using namespace std;

int main() {
    float a, b, c, disc;
    
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;
    
    disc = b * b - 4 * a * c;
    
    cout << "Discriminant (b² - 4ac) = " << disc << endl;
    return 0;
}
