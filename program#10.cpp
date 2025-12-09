#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float miles = 2.5;
    float kilometers;
    
    kilometers = miles * 1.609;
    
    cout << fixed << setprecision(2);
    cout << miles << " miles = " << kilometers << " kilometers" << endl;
    return 0;
}
