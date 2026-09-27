class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int index = n - 1;
        int i = nums[index];

    
        while (index > 0 && nums[index - 1] == i) {
            index--;
        }


        if (index == 0) {
            return i;
        }

    
        int ii = nums[index - 1];
        index--;


        while (index > 0 && nums[index - 1] == ii) {
            index--;
        }

    
        if (index == 0) {
            return i;
        }


        int iii = nums[index - 1];

        return iii;
    }
};