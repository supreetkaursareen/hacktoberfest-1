#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    long long int even = 0;
    for(int i = 0 ; i < n ; i++) {
        even = even + 2;
        cout<<even<<endl;
    }
}