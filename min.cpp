/*Write a function that takes an integer array and its size, and returns the smallest
element in the array.*/
#include <iostream>
using namespace std;
int minArr(int n, int arr[])
{
    int min;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
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
    

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Min value is " << minArr(n, arr) << endl;
    return 0;
}