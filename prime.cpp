/*Create a function that takes an integer array and its size and counts the number of
prime numbers in the array.*/
#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int countPrimesArr(int n, int arr[])
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
        {
            cout << "prime numbers in array: " << arr[i] << endl;
            count++;
        }
    }
    return count;
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

    int primeCount = countPrimesArr(n, arr);
    // cout<<"prime numbers in array: ";
    cout << "Number of prime numbers in the array: " << primeCount << endl;

    return 0;
}