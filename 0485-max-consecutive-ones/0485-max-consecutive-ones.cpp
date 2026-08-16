class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int freq=0;
        int maxi=INT_MIN;
        for(int num:nums){
            if(num==1){
                freq++;
                maxi=max(maxi,freq);
            }
            if(num==0) {
            freq=0;
            }
            maxi=max(maxi,freq);
        }
        return maxi;
    }
    
};