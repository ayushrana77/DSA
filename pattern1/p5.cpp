#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<(n*2)-1;i++)
    {
        if( i < n)
        {    for(int j=0;j<n-1-i;j++)
            {
                cout<<" ";
            }
            for(int j=1;j<=(i*2+1);j++)
            {
                if(j%2 != 0)
                    {
                        cout<<"*";
                    }
                else{
                    cout<<" ";
                }
            }
        }else{
             for(int j=0;j<=i-n;j++)
            {
                cout<<" ";
            }
            int cu = (n*2-1)-i;
            for(int j=1;j<=cu*2-1;j++)
            {
                if(j%2 != 0)
                    {
                        cout<<"*";
                    }
                else{
                    cout<<" ";
                }
            }
        }

        cout<<endl;
    }
}