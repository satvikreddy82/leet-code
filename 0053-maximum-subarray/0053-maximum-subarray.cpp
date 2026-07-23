class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int start=0;
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[start];
            maxi=max(maxi,sum);
            if(sum<0){
                start=i+1;
                sum=0;
            }
            else start=i+1;
        }return maxi;
    }
};