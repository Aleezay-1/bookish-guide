#include <iostream>
using namespace std;

int countVowels(char arr[], int length)
{
    int vowelCount = 0;
    for (int i = 0; i < length; i++)
    {
        char currentChar = tolower(arr[i]); // Convert character to lowercase for easier comparison
        if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u')
        {
            vowelCount++;
        }
    }
    return vowelCount;
}

int main()
{
    int length;
    cin >> length;
    char *arr = new char[length];

    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    cout << "Vowels " << countVowels(arr, length) << endl;
    return 0;
}
