// METHOD 1 
// TODO:
// TC=O(N2)
class Solution
{
public:
    vector<int> nextLargerElement(vector<int> &arr)
    {
        vector<int> ans(arr.size(), -1);

        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[j] > arr[i])
                {
                    ans[i] = arr[j];
                    break;
                }
            }
        }

        return ans;
    }
};


// METHOD 2 
// TODO: 
// TC: O(N)
// SC: O(N)
class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        stack<int> st;
        vector<int> ans(arr.size(), -1);

        for (int i = arr.size() - 1; i >= 0; i--) {

            while (!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }

            if (!st.empty()) {
                ans[i] = st.top();
            }

            st.push(arr[i]);
        }

        return ans;
    }
};
