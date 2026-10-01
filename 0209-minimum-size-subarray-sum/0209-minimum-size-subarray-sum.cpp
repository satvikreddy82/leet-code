class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int minLen=INT_MAX;
         int sum=0;
        for(int right=left;right<n;right++){
           sum+=nums[right];
           while(sum>=target){
            minLen=min(right-left+1,minLen);
            sum-=nums[left];
            left++;
           }
        }
            if(minLen==INT_MAX) return 0;
            return minLen;
    }
};