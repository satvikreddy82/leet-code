class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();

        vector<int> count(n + 1, 0);
        vector<int> ans;

        for(int x : nums) {
            count[x]++;
        }

        for(int i = 1; i <= n; i++) {
            if(count[i] == 2) {
                ans.push_back(i);
                break;
            }
        }
        for(int i = 1; i <= n; i++) {
            if(count[i] == 0) {
                ans.push_back(i);
                break;
            }
        }

        return ans;
    }
};