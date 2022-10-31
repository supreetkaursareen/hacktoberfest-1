#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    long long int odd = -1;
    for(int i = 0 ; i < n ; i++) {
        odd = odd + 2;
        cout<<odd<<endl;
    }
}