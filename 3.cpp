/*Write a function that takes an array of integers and its size and finds the maximum
value in the array.*/

#include <iostream>
using namespace std;
int maxArr(int n, int arr[])
{
    int maxno;
    for (int i = 0; i < n; i++)
    {
        if (maxno < arr[i])
        {
            maxno = arr[i];
        }
        // return max;
    }
    return maxno;
}

int main()
{
    int arr[10] = {12, 3, 6, 44, 33, 2, 7, 5, 2, 6};
    int maxno = maxArr(10, arr);
    cout << "max " << maxno << endl;
}