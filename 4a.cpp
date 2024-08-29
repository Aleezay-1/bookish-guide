/*Create a function that takes an array of integers and its size and reverses the array
in place.*/

#include <iostream>
using namespace std;

int revArr(int n, int arr[])
{
    int start;
    for (int i = 0; i < n; i++)
    {
        start = arr[i] - 1;
    }

    return start;
}

int main()
{
    int arr[2] = {12, 6};

    int rev = revArr(2, arr);

    cout << " average is :" << rev << endl;

    return 0;
}