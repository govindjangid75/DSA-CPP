

#include <stack>
#include <string>
#include <vector>


class Solution
{
public:
    int calPoints(std::vector<std::string> &operations)
    {
        std::stack<int> st;
        for (const std::string &op : operations)
        {
            if (op == "C")
                st.pop();
            else if (op == "D")
                st.push(2 * (st.top()));
            else if (op == "+")
            {
                int top = st.top();
                st.pop();
                int sum = top + st.top();
                st.push(top);
                st.push(sum);
            }
            else
                st.push(std::stoi(op));
        }
        int score = 0;
        while (st.size() > 0)
        {
            score += st.top();
            st.pop();
        }
        return score;
    }
};