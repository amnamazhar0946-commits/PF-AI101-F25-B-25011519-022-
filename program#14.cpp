#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float millimeters, inches;
    
    cout << "Enter length in millimeters: ";
    cin >> millimeters;
    
    inches = millimeters / 25.4;
    
    cout << fixed << setprecision(2);
    cout << millimeters << " mm = " << inches << " inches" << endl;
    return 0;
}
