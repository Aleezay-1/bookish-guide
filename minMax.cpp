/*Write a function that takes an integer array and its size and finds the difference
between the maximum and minimum elements in the array*/
#include <iostream>
using namespace std;

int maxArr(int n, int arr[])
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int minArr(int n, int arr[])
{
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < maxArr(n, arr))
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{

    int n;
    cin >> n;
    int *arr = new int[n];
    // int arr [n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Max value is " << maxArr(n, arr) << endl;
    cout << "Min value is " << minArr(n, arr) << endl;
    return 0;
}