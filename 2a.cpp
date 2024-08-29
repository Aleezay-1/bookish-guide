/*Create a function that takes an array of integers and its size as arguments and
returns the average of all elements*/
#include <iostream>
using namespace std;

int avrArr(int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum / n;
}

int main()
{
    int arr[2] = {12, 6};

    int avr = avrArr(2, arr);

    cout << " average is :" << avr << endl;

    return 0;
}