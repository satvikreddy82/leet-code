class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int index=nums.size();
        int i=0,lsum=0,rsum=0;
        while(i<index){
            for(int j=0;j<i;j++){
                lsum+=nums[j];
            }
            for(int k=i+1;k<index;k++){
                rsum+=nums[k];
            }
            if(lsum==rsum) return i;
            lsum=0;
            rsum=0;
            i++;
        }
        return -1;
    }
};