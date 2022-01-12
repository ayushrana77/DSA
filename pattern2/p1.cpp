#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i<=(n/2)+1)
        {
            for(int j=1;j<=n;j++)
            {
                if(j >i && j< n-i+1)
                {
                    cout<<" ";
                }else{
                    cout<<j;
                }
            }
        }else{
            int ct = n-i+1;
            for(int j=1;j<=n;j++)
            {
                if(j >ct && j< n-ct+1)
                {
                    cout<<" ";
                }else{
                    cout<<j;
                }
            }
        }
        cout<<endl;
    }
}