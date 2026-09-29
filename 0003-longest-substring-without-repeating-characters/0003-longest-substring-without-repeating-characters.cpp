class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> ans;
        int maxi=0;
        int left=0;
        for(int right=0;right<s.length();right++){
            while(ans.find(s[right])!=NULL){
                ans.erase(s[left]);
                left++;
            }
            ans.insert(s[right]);
            maxi=max(maxi,right-left+1);
        }
        return maxi;
    }
};