#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int rev = 0;
    while(n>0)
    {
        int lastnumber = n%10;
        rev = rev *10 + lastnumber;
        n=n/10;
    }
    cout<<rev;

    return 0;
}