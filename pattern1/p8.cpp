#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n*2-1;i++)
    {
        if(i<=n)
        {
            for(int j=0;j<n-i;j++)
            {
                cout<<" ";
            }
            for(int j=1;j<=(i*2)-1;j++)
            {
                if(j == 1)
                {
                    cout<<i;
                }else if(j == (i*2)-1){
                    cout<<i;
                }else{
                    cout<<" ";
                }

            }
        }
        else{
            for(int j=0;j<i-n;j++)
            {
                cout<<" ";
            }
            int cu = (n*2)-i;
            for(int j=1;j<=cu*2-1;j++)
            {
                if(j == 1)
                {
                    cout<<cu;
                }else if(j == (cu*2)-1){
                    cout<<cu;
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}