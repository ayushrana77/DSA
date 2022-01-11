#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n*2+1;i++)
    {
        if(i<=n)
        {
            for(int j=n;j>=n-i;j--)
            {
                cout<<j;
            }
        }else{
            for(int j=n;j>=i-n;j--)
            {
                cout<<j;
            }
        }
        cout<<endl;
    }
}