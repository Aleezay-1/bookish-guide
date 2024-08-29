/*Write a function that takes an array of integers and its size and returns the product
of all elements in the array.*/
#include <iostream>
using namespace std;
int proArr(int n, int arr[])
{
    int pro = 1;
    for (int i = 0; i < n; i++)
    {
        pro *= arr[i];
    }
    return pro;
}
int main()
{
    /*int arr[2] = {3, 6};

   int proTotal = proArr(2, arr);*/

    int n;
    cin >> n;
    int *arr = new int[n];
    // int arr [n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << " product is :" << proArr(n, arr) << endl;

    return 0;
}