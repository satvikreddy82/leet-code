class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int out=0,div=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                nums[i]/=10;
                div++;
            }
            if(div%2==0) {
                out++;
            }
            div=0;
        }
        return out;
    }
};