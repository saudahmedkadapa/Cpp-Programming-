#include<iostream>
using namespace std;

bool prime(int n)
{
    if(n==0 || n==1)
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
           
        }
        return true;
    }

}

int main()
{
    int n;
    cout<<"Enter the number till prime number want="<<endl;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(prime(i))
        {
            cout<<i<<" ";
        }
    }

}