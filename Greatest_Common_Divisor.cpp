#include <iostream>
using namespace std;

int GCD(int n,int m)
{
    if(m==0)
    {
        return n;

    }
    else
        (n,m%n);
}


int main()
{
    int n,m;
    cout<<"Enter Numbers To Find Their GCD"<<endl;

    cin>>n>>m;
    cout<<"GCD Of "<< n<<" and " << m <<" is:"<< GCD(n,m);
}

