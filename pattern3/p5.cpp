// •	1 2 3 6 9 18 27 54........

#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a = 1;
    long long b = 1;
    for(int i=0;i<n;i++)
    {
        cout<<b<<" ";
        if(i%2 == 0)
        {
            b = a*2;
        }
        else{
            b = b+a;
            a = b;
        }
    }
}