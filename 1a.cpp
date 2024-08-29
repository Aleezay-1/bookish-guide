/*Write a function that takes an integer array and its size as arguments and returns
the sum of all elements in the array.*/
#include <iostream>
using namespace std;

int sumArr(int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{

    int arr[2] = {3, 6};

    int sumTotal = sumArr(2, arr);

    cout << " sum is :" << sumTotal << endl;
    return 0;
}