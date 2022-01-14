// •	1 + (1+2) + (1+2+3) + (1+2+3+4) + ......... + (1+2+3+4+...+n)

#include<iostream>

using namespace std;

int main()
{
    long long res = 0;
    long long sum = 0;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum += i;
        res += sum;
    }
    cout<<res<<" ";
}