#include<bits/stdc++.h>
using namespace std;

int findNthEvenNum(int n)
{
    int ans=0;

    for(int i=0;i<n;++i)
    ans=ans+2;

    return ans;
}

int main()
{

    int N;

    cin>>N;

    cout<<findNthEvenNum(N)<<endl;
}
