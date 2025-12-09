#include <iostream>
using namespace std;

int main() {
    int age_years, age_months, age_days;
    
    cout << "Enter your age in years: ";
    cin >> age_years;
    
    age_months = age_years * 12;
    age_days = age_years * 365;
    
    cout << "Age in years: " << age_years << endl;
    cout << "Age in months: " << age_months << endl;
    cout << "Age in days: " << age_days << endl;
    
    return 0;
}
