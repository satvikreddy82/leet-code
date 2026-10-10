class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        for(char c:s){
            st.push(c);
        }
        int i=0;
        while(!st.empty()){
            s[i]=st.top();
            st.pop();
            i++;
        }
    }
};