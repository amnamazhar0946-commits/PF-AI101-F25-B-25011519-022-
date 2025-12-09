#include <iostream>
using namespace std;

int main() {
    int hours, minutes, seconds, total_seconds;
    
    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter minutes: ";
    cin >> minutes;
    cout << "Enter seconds: ";
    cin >> seconds;
    
    total_seconds = hours * 3600 + minutes * 60 + seconds;
    
    cout << "Time: " << hours << "h " << minutes << "m " << seconds << "s" << endl;
    cout << "Total seconds: " << total_seconds << endl;
    return 0;
}
