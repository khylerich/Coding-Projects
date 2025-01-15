#include <iostream>
using namespace std;

void greeting(int hour) 
{
    if (hour >= 0 && hour < 12) {
        cout << "Good morning" << endl;
    } else if (hour >= 12 && hour < 18) {
        cout << "Good afternoon" << endl;
    } else if (hour >= 18 && hour <= 23) {
        cout << "Good evening" << endl;
    } else {
        cout << "Invalid hour value" << endl;
    }
}

int main() 
{
    int hour;
    cout << "Enter an hour value (0-23): ";
    cin >> hour;
    greeting(hour);
    return 0;
}
