#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    
    cout << "Before interchange: a = " << a << ", b = " << b << endl;
    
    temp = a;
    a = b;
    b = temp;
    
    cout << "After interchange: a = " << a << ", b = " << b << endl;
    return 0;
}
