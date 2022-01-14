// •	1 + 1/(2*2) + 1/(3*3) + 1/(4*4) + ……. + 1/(n*n)
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    double res = 0;
    for(int i=1;i<=n;i++)
    {
        res += ((double)i/(double)(i*i));
    }
    cout<<res<<" ";
}