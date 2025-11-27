#include <iostream>

using namespace std;


void SelectionSort(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        int min_value=i;
        for (int j=i+1; j<n; j++)
        {
            if( arr[min_value]>arr[j] )
            {
                min_value=j;
            }
        }
        if(min_value!=i)
        {
            int temp=arr[i];
            arr[i]=arr[min_value];
            arr[min_value]=temp;
        }
    }
}

    int main()
    {
        int arr[]= {22,24,26,29,30,31,20,40};
        int length=sizeof (arr)/sizeof (arr[0]);
        SelectionSort(arr,length);


        for(int i=0;i<length;i++)
        {
            cout<<arr[i]<<" ";
        }



    }




