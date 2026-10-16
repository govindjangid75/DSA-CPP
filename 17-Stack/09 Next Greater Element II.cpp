
class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> ans(n, -1);
        stack<int> st;

        for (int i = 2 * n - 1; i >= 0; i--)
        {
            int idx = i % n;

            while (!st.empty() && st.top() <= arr[idx])
                st.pop();

            if (i < n)
                ans[idx] = st.empty() ? -1 : st.top();

            st.push(arr[idx]);
        }

        return ans;
    }
};
