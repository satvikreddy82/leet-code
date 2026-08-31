class Solution {
public:
    bool isSubsequence(string s, string t) {
        int index=0,i=0;
        while(index<s.size() && i<t.size()){
            if(s[index]==t[i]) {
                index++;
            }
            i++;
        }
        return (index==s.size());
    }
};