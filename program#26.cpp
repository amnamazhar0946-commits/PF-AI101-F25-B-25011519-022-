#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float rupees = 12000;
    float dollars;
    const float EXCHANGE_RATE = 60.0;
    
    dollars = rupees / EXCHANGE_RATE;
    
    cout << fixed << setprecision(2);
    cout << "Rupees: " << rupees << endl;
    cout << "Dollars: $" << dollars << endl;
    return 0;
}
