/* A library maintains a sorted list of book ID numbers to organize its shelves. The librarian wants to quickly check whether a particular book ID exists in the list.
Additionally, if the book ID is not found, she wants to know the position where it should be inserted so that the list remains sorted.
Your task is to take the sorted list of book IDs from the user and take a book ID to search for. Use binary search (iterative) to find the ID. If it is found, print its index. If it is not found, print "Not found" and also print the index where it should be inserted to maintain the sorted order.
Input: N = 6
10 20 30 40 60 80
35
Output: Not found
Insert at index 3 */

#include <bits/stdc++.h>

using namespace std;

int binarySearch(int a[], int x, int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] == x)
            return mid;

        if (a[mid] > x)
            return binarySearch(a, x, low, mid - 1);

        if (a[mid] < x)
            return binarySearch(a, x, mid + 1, high);
        else
            return mid;


    }


}

int main()
{
    int n, value;
    cout << "Enter value of n: ";
    cin >> n;

    int a[n];
    cout << "Enter values: ";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter search value: ";
    cin >> value;

    int result = binarySearch(a, value, 0, n-1);
    if (a[result]!=value)
        cout << "Not found"<<endl<<"Insert at index "<<result+1;
    else
        cout << "Item found at " << result;
}
