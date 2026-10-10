class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        for(char c:s){
            st.push(c);
        }
        vector<char> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        s=ans;
    }
};