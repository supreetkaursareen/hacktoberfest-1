typedef pair<int,int> pi;
class Solution 
{
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pi,vector<pi>> st;// max heap
        int cnt=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            while(!st.empty() and (st.top().first<nums[i]))
            {
                st.pop();
            }
            while(!st.empty() and i-st.top().second+1>k)
                st.pop();
            st.push({nums[i],i});
            if(i>=k-1)
            {
                if(!st.empty())
                {
                    ans.push_back(st.top().first);
                }
                 if(!st.empty() and st.top().second==i-k)
                 st.pop();
            }
        }
        return ans;
    }
};
