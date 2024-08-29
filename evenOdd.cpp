/*Write a function that takes an integer array and its size and finds the sum of all even
elements and all odd elements separately*/
#include <iostream>
using namespace std;

int sumEven(int n, int arr[])
{
    int sumeven = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sumeven += arr[i];
        }
    }
    return sumeven;
}

int sumOdd(int n, int arr[])
{
    int sumodd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            sumodd += arr[i];
        }
    }
    return sumodd;
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
    cout << "sum of odd numbers: " << sumOdd(n, arr) << endl;
    cout << "sum of even numbers: " << sumEven(n, arr) << endl;

    return 0;
}