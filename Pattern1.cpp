#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number Rows="<<endl;
    cin >> rows;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << i+1;
        }
        cout<<endl;
    }
    return 0;


}