class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxi=nums[0];
        int n=nums.size();
        int current=1;
        int maxi_index=0;
        while(current<n){
            if(maxi<nums[current]){
                 maxi_index=current;
                 maxi=nums[current];
        }
        current++;
        }
        return maxi_index;
    }
};