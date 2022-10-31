#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007
#define N 600
int trap(vector<int> &height)
{
    int ans = 0, current = 0;
    stack<int> st;
    while (current < height.size())
    {
        while (!st.empty() && height[current] > height[st.top()])
        {
            int top = st.top();
            st.pop();
            if (st.empty())
                break;
            int distance = current - st.top() - 1;
            int bounded_height = min(height[current], height[st.top()]) - height[top];
            ans += distance * bounded_height;
        }
        st.push(current++);
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
    {
        cin>>height[i];
    }

    cout << trap(height);
    return 0;
}
