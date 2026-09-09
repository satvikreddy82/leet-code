class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> pos;
        vector<int> neg;
         vector<int> ans;
         for(int num:nums){
            if(num>0) pos.push_back(num);
            else if(num<0) neg.push_back(num);
         }
         for(int i=0;i<n/2;i++){
             ans.push_back(neg.back());
            neg.pop_back();
            ans.push_back(pos.back());
            pos.pop_back();
         }
         reverse(ans.begin(),ans.end());
         return ans;
    }
};