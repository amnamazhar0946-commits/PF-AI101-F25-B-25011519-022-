#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int roll_no, pf, itc, cg, total;
    float average;
    
    cout << "Enter Roll No: ";
    cin >> roll_no;
    
    cout << "Enter marks for Programming Fundamentals: ";
    cin >> pf;
    cout << "Enter marks for Introduction to Computing: ";
    cin >> itc;
    cout << "Enter marks for Computer Graphics: ";
    cin >> cg;
    
    total = pf + itc + cg;
    average = total / 3.0;
    
    cout << "\nRoll No: " << roll_no << endl;
    cout << "Programming Fundamentals: " << pf << endl;
    cout << "Introduction to Computing: " << itc << endl;
    cout << "Computer Graphics: " << cg << endl;
    cout << "Total Marks: " << total << endl;
    cout << fixed << setprecision(2);
    cout << "Average Marks: " << average << endl;
    
    return 0;
}
