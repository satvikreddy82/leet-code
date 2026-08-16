class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero=0,n=nums.size(),index=0;
        for(int num:nums){
            if(num==0) {
                zero++;
            }
            else{
                nums[index]=num;
                index++;
            }
        }
        while(index<n){
            nums[index]=0;
            index++;
        }
    }
};