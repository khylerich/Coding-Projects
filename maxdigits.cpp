#include<iostream>
using namespace std;

int main()
{
    double number;
    cout << " Number amount - ";
    cin >> number;

    
    if(number >= 1000)
    {
        cout << "four diggit";
    }
    else if(number >=100)
    {
        cout << "three digits";
    }
    else if (number >= 10)
    {
        cout << "2 diggit ";
    }
    else if (number <= 10)
    {
        cout << " one digit";
    }
    // your learned that else if doesnt save, the previos condition. think of it as a range,
    // most important the comuputer execute the fro first to last. so if you put <=1000, it will execute tht becasue it is true
    return 0;

}