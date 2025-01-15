#include<iostream>
using namespace std;

const int MAX = 100;

void menu();
int enterOperator();
void insertNewNum(int arr[], int &count, int maxSize);
int getLargest(int arr[], int count);
int getSmallest(int arr[], int count);

int main()
{
    int data[MAX], count = 0;
    int opt;

    do
    {
        menu();

        opt = enterOperator();

        switch(opt)
        {
            case 1:
                insertNewNum(data, count, MAX);
                break;
            case 2:
                cout << "The largest value is " << getLargest(data, count) << endl;
                break;
            case 3:
                cout << "The smallest value is " << getSmallest(data, count) << endl;
                break;
            case 7:
                cout << "Thanks for using the system\n";
                cout << "See you next time!\n";
                exit(0);
                break;
        }

    } while(opt >= 1 && opt <= 7);
}

void menu()
{
    cout << "Choose from the following operations:\n";
    cout << "1. Enter a number\n";
    cout << "2. Display largest\n";
    cout << "3. Display smallest\n";
    cout << "4. Display the median\n";
    cout << "5. Display the average\n";
    cout << "6. Display all the numbers in ascending order\n";
    cout << "7. Quit\n";
}

int enterOperator()
{
    int opt;
    cin >> opt;

    while(opt > 7 || opt < 1)
    {
        cout << "Invalid option\n";
        cout << "Please enter again: ";
        cin >> opt;
    }
    return opt;
}

void insertNewNum(int arr[], int &count, int maxSize)
{
    if(count >= maxSize)
    {
        cout << "The array is full!\n";
        return;
    }

    int num;
    cout << "Enter a new number: ";
    cin >> num;

    // Find the position to insert the number to maintain ascending order
    int pos = count;
    for(int i = 0; i < count; i++)
    {
        if(arr[i] > num)
        {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for(int i = count; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new number
    arr[pos] = num;
    count++;

    cout << "Number inserted successfully.\n";
}

int getLargest(int arr[], int count)
{
    if(count == 0)
    {
        cout << "Array is empty!\n";
        return -1;
    }

    int largest = arr[0];
    for(int i = 1; i < count; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int getSmallest(int arr[], int count)
{
    if(count == 0)
    {
        cout << "Array is empty!\n";
        return -1;
    }

    int smallest = arr[0];
    for(int i = 1; i < count; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}
