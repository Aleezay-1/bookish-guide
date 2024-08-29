/*Write a function that takes an integer array and its size, and returns the smallest
element in the array.*/
#include <iostream>
using namespace std;
int smallArr(int n, int arr[])
{
    int small;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    return small;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "smallest value is " << smallArr(n, arr) << endl;
    return 0;
}