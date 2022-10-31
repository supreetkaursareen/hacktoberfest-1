#include<iostream>
using namespace std;
int numberOf1Bits(int n)
{
    int count=0;
    while(n!=0)
    {
        if(n%2==1)//remainder 1 when divided by 2 means the last place of the binary representation has digit 1
            count++;
        n=n>>1;//shifting the bits to right by one place
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<numberOf1Bits(n);
}
