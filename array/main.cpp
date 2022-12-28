// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int initArray(int arr[], int n, int set)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = set;
    }
    return 0;
}

int inpArray(int arr[], int n)
{
    cout << "[+] Input array elements \n";
    for (int i = 0; i < n; i++)
    {
        cout << "> ";
        cin >> arr[i];
    }
    return 0;
}

int outArray(int arr[], int n)
{
    cout << "[*] Array \n";
    cout << "> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

int reverseArray(int arr[], int n)
{
    // int rev[100000];
    int tmp;
    for (int i = 0; i < n / 2; i++)
    {
        // swap
        tmp = arr[n - 1 - i];
        arr[n - 1 - i] = arr[i];
        arr[i] = tmp;
    }
    return 0;
}

int swapAlternate(int arr[], int n)
{
    int tmp;
    for (int i = 0; i < n; i = i + 2)
    {
        if (i + 1 != n)
        {
            tmp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = tmp;
        }
    }
    return 0;
}

int uniqNumber(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int linearSearch(int arr[], int n, int k)
{
    bool ans = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            ans = true;
        }
    }
    if (ans == true)
    {
        cout << "[*] Element found!\n";
    }
    else
    {
        cout << "[*] Element not found\n";
    }
    return 0;
}

int binarySearch(int arr[], int n, int k)
{
    int s = 0, e = n - 1, m = s + (e - s) / 2;

    while (s >= e)
    {
        if (k == arr[m])
        {
            // cout << "[*] Element found!" << endl;
            return m;
        }
        else if (k < arr[m])
        {
            // s = 0;
            e = m - 1;
            // m = (s + e) / 2;
        }
        else if (k > arr[m])
        {
            s = m + 1;
            // e = n - 1;
        }
        m = s + (e - s) / 2;
    }
    return -1;
}

int smallestNumber(int arr[], int n, int j)
{
    int small = INT_MAX, index;
    for (int i = j; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
            index = i;
        }
    }

    return index;
}

int selectionSort(int arr[], int n)
{
    int index;
    for (int i = 0; i < n; i++)
    {
        // smallest number
        index = smallestNumber(arr, n, i);
        // swap
        swap(arr[i], arr[index]);
    }
    return 0;
}

int bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return 0;
}

int insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
    return 0;
}

int main()
{
    cout << "------------------------------------------------" << endl;
    cout << "💡 Let's learn all about Arrays" << endl;
    cout << "------------------------------------------------" << endl;

    int arr[100000];

    int n;
    cout << "[+] Size of array\n";
    cout << "> ";
    cin >> n;

    // int set;
    // cout << "[+] Set elements to \n";
    // cout << "> ";
    // cin >> set;

    // functions

    // initializing array with a single value
    // initArray(arr, n, set);

    // print array
    // outArray(arr, n);

    // take array input
    inpArray(arr, n);

    // print array
    outArray(arr, n);

    // reverseArray(arr, n);

    // swapAlternate(arr, n);

    // cout << "[+] Unique element: " << uniqNumber(arr, n) << endl;

    // searching algos
    // int k;
    // cout << "[+] Element to be search\n";
    // cout << "> ";
    // cin >> k;
    // linearSearch(arr, n, k);    // O(n)

    // int index = binarySearch(arr, n, k);     // O(logn)
    // cout << "[*] Element " << k << " is found at index: " << index << endl;

    // sorting algos
    // selectionSort(arr, n);      //O(n^2)
    // bubbleSort(arr, n);       // O(n^2)
    // insertionSort(arr, n);       // O(n^2)

    // print array
    outArray(arr, n);

    cout << "------------------------------------------------" << endl;
    cout << "by @eleven" << endl;
    cout << "------------------------------------------------" << endl;

    return 0;
}
