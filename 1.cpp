/* Suppose a teacher wants to review her students' performance quickly. She collects N test marks from the class, but since she is in a hurry, she only wants to organize the first half of the marks. This helps her immediately see which students at the beginning of the list need support. However, she wants the second half of the marks to remain the same.
Your task is to take N as input, then take N test marks. Using insertion sort, sort only the first half of the marks in ascending order. Do not change the second half. After sorting the first half, print the final list of marks.
Input: N = 6
45 20 10 88 75 60
Output: 10 20 45 88 75 60
 */


#include <iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n/2; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{

    int n ;
    cout<<"Input:N=";
    cin>>n;
    cout<<endl;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }

    insertionSort(arr, n);

    cout << "Output: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


