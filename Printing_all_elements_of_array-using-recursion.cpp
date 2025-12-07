
#include <iostream>
using namespace std;

void ArrayPrint(int arr[],int n,int index)
{
    if(n==index)
    {
        return;
    }
    else
        cout<<arr[index]<<" ";
    ArrayPrint(arr,n,index+1);

}


int main()
{
    int arr[]={5,6,9,11,2,3,5,44,55,3,39,32,53};
    int n=sizeof (arr)/sizeof (arr[0]);
    cout<<"Array:";
    ArrayPrint(arr,n,0);
}
