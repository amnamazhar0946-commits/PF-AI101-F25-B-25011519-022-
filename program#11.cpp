#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a = 15, b = 25;
    float average;
    
    average = (a + b) / 2.0;
    
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;
    cout << fixed << setprecision(2);
    cout << "Average: " << average << endl;
    
    return 0;
}
