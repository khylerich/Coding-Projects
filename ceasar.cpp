#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    int shift;

    // input from user
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the shift value: ";
    cin >> shift;

    
    int i = 0;
    while (text[i] != '\0') 
    {
        char c = text[i];

        // Apply(ASCII range 65-90)
        if (c >= 'A' && c <= 'Z')
        {
            text[i] = char((c - 'A' + shift + 26) % 26 + 'A');
        }
        // Apply (ASCII range 97-122)
        else if (c >= 'a' && c <= 'z') 
        {
            text[i] = char((c - 'a' + shift + 26) % 26 + 'a');
        }
        

        i++; //upgrade ittterations
    }

    
    cout << "Ciphertext: " << text << endl;

    return 0;
}
