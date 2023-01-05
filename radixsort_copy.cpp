#include <iostream>
using namespace std;
void countsort(int arr[], int size)
{
    int k = arr[0];
    for (int i = 0; i < size; i++)
    {
        k = max(k, arr[i]);
    }
    int count[10] = {0};
    for (int j = 0; j < size; j++)
    {
        count[arr[j]]++;
    }
    for (int i = 1; i <= k; i++)
    {
        count[i] += count[i - 1];
    }
    int output[size];
    for (int i = size - 1; i >= 0; i--)
    {
        output[--count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = output[i];
    }
}
int main()
{
    int size;
    cout << "Enter the size of the array " << endl;
    cin >> size;
    cout << "Enter the array elements " << endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The sorted array is " << endl;
    countsort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    return 0;
    // new comment that i have added ... to see if it gets updated on git or not
}