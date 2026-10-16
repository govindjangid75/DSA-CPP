#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(5);
    st.push(6);
    for (int i = 0; i < st.size(); i++)
    {
        
        cout<<st[i];
    }
    
    return 0;
}