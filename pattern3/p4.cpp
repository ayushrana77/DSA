// •	0, 1, 1, 2, 3, 5, 8, 13, 21 ………… n (Fibonacci series)

#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a =0,b=1;
    int i =2;
    cout<<0<<" "<<1<<" ";
    while(i<=n)
    {
        int c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;
        i++;
    }
}