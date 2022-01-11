#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i<=n/2)
        {
            for(int j=0;j<i;j++)
            {
                cout<<" ";
            }
            int cu = (n/2)-i;
            for(int j=0;j<cu*2+1;j++)
            {
                if(j == 0)
                {
                    cout<<i+1;
                }else if(j == cu*2){
                    cout<<i+1;
                }else{
                    cout<<" ";
                }
            }
        }
        else{
            
            for(int j=0;j<n-i-1;j++)
            {
                cout<<" ";
            }
            int cu = i-n/2;
            for(int j=0;j<2*cu+1;j++)
            {
                if(j == 0)
                {
                    cout<<i+1;
                }else if(j == cu*2){
                    cout<<i+1;
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}