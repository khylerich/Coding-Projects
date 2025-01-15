#include<iostream>
#include<math.h>

using namespace std;
/*
    Khyle Richards
    CSCI1010. 001
    Calculator
    Making a calculator
*/
int main()
{
    char letter;
    double value1, value2, add, sub, mul, div;
    cout << "          Welcome" << endl;
    cout << "Please select from the menu" << endl;
    cout << "A. Addition\n"
            "S. Subtraction\n"
            "M. Multiplication\n"
            "D. Division" << endl;
    cin >> letter;
    
    cout << " Enter 2 values - ";
    cin >> value1 >> value2;
// if your dont end the line; you can ake a subsection within cout with mutiple lines
   
    if(letter == 'A' || letter == 'a')
    {
        add = (value1 + value2);
        cout << add;
    }
    else if(letter == 'B' || letter == 'b')
    {
        sub = (value1 - value2);
        cout << sub;
    }
    else if(letter == 'M' || letter == 'm')
    {
        mul = (value1 * value2);
        cout << mul;
    }
    else if(letter == 'D' || letter == 'd')
    {
        div = (value1 / value2);
        cout << div;
    }



return 0;
    
    
}