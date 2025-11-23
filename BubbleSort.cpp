#include <iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }


    }
}

int main()
{
    int arr[]= {5,6,8,9,10,2,4,50,6,69};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" " ;

    }
}






