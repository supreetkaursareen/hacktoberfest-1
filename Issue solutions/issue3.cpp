#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    for (long long int i = 0 ; i < n ; i++) {
        for(long long int j = 0 ; j <= i ; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}