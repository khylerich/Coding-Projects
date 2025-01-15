#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    const int max = 100;
    int limit[max], even; // setting the size of the limit 
    srand(time(0));
    for(int i = 0;i < 50; ++i)
    {
        limit[i] = rand() % 101 +100;/*the size of the array is not bieng change
                                      instead i is being used to access and fill spots within the limit*/
        cout << limit[i] << endl;

    }
    // use a for loop making the condition form i = 50; i <100. then add random numbers again.
    cout << " Next sequence is 50 - 99";
    for(int i = 50; i < 100; i++)
    {
        limit[i] = rand()% 101 + 100;
        cout << limit[i] << endl;
    }
    cout << "Next sequence is even numbers";
    for(int i = 0; i < 100; i++)   
        if( limit[i] % 2 == 0)
        {
            
            cout << i << "\t" << limit[i] << endl; // unitentially printd the even sequence using i, thats cool.
            even++;

        }
        cout <<"Number of even int are " << even << endl;

       

        return 0;
}