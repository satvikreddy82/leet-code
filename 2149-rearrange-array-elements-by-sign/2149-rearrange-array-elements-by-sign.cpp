class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int pos=0;
        int neg=1;
        for(int num:nums){
            if(num>0) {
                ans[pos]=num;
                pos+=2;
            }
            else if(num<0){
                ans[neg]=num;
                neg+=2;
            } 
        }
        return ans;
    }
};