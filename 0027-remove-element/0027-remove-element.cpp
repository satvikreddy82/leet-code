class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        int index=0,count=0;
        for(int num:nums){
            if(num!=val){
                ans.push_back(num);
                index++;
            }
            else count++;
        }
        for(int i=index;count!=0;i++){
            ans.push_back(val);
            count--;
        }
        nums=ans;
        return index;
    }
};