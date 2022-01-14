// •	1 - x2/2! + x4/4! – x6/6! + ….........
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int si = 1;
    double res = 1;
    long long fa = 1;
    fa = fa*2;
    for(int i=2;i<=n;i = i+2)
    {
        res += ((si)*(pow(n,i))/fa);
        fa *= i+1;
        fa *= i+2;
    }
    cout<<res<<" ";
}