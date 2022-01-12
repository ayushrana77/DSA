#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int pv,re=1;
    vector<int>dp(n+1,1);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i>2 && j>1 && j<i)
                {
                    pv = dp[j];
                    dp[j] = dp[j] + re;
                    re = pv;
                } 
            cout<<dp[j]<<" ";
        }
        cout<<endl;
    }
}
    
