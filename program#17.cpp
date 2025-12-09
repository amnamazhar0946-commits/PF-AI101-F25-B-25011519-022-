#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float number = 15.58971;
    int integral_part;
    float fractional_part;
    
    integral_part = static_cast<int>(number);
    fractional_part = number - integral_part;
    
    cout << fixed << setprecision(5);
    cout << "Original number: " << number << endl;
    cout << "Integral part: " << integral_part << endl;
    cout << "Fractional part: " << fractional_part << endl;
    
    return 0;
}
