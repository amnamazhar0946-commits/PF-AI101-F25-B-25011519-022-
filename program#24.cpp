#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float subject1, subject2, subject3, subject4, subject5;
    float total, average;
    
    cout << "Enter marks for 5 subjects (each out of 100):" << endl;
    
    cout << "Subject 1: ";
    cin >> subject1;
    cout << "Subject 2: ";
    cin >> subject2;
    cout << "Subject 3: ";
    cin >> subject3;
    cout << "Subject 4: ";
    cin >> subject4;
    cout << "Subject 5: ";
    cin >> subject5;
    
    total = subject1 + subject2 + subject3 + subject4 + subject5;
    average = total / 5.0;
    
    cout << fixed << setprecision(2);
    cout << "\nTotal Marks: " << total << "/500" << endl;
    cout << "Average Marks: " << average << endl;
    
    return 0;
}
