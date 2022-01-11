#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        int cu = n-i;
        for(int j=0;j<cu*2-1;j++)
        {
            if(j == 0)
            {
                cout<<(char)('A'+cu-1);
            }else if(j == cu*2-2){
                cout<<(char)('A'+cu-1);
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}