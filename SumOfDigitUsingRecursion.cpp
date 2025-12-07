#include <iostream>
using namespace std;

int SumOfDigit(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
        return n%10+SumOfDigit(n/10);
}


int main()
{
    int n;
    cout<<"Enter Number To Find Sum Of its Digit"<<endl;

    cin>>n;
    cout<<"Sum of Digit Of "<< n<<" is:"<< SumOfDigit(n);
}

