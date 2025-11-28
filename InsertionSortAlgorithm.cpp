#include <iostream>

using namespace std;


void Insertion_Sort(int arr[], int n )
{
    for(int i=1; i<n; i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }


}

int main()
{
    int arr[]= {22,24,26,29,30,31,20,40};
    int length=sizeof (arr)/sizeof (arr[0]);
    Insertion_Sort(arr,length);


    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<" ";
    }



}

