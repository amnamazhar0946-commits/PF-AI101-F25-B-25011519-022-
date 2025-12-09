#include <iostream>
using namespace std;

int main() {
    int age_years, age_months;
    
    cout << "Enter age in years: ";
    cin >> age_years;
    
    age_months = age_years * 12;
    
    cout << "Age in years: " << age_years << endl;
    cout << "Age in months: " << age_months << endl;
    return 0;
}
