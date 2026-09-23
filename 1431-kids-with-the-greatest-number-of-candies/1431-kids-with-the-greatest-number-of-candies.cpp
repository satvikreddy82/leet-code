class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool>ans;
        for(int i=0;i<n;i++){
             int maxi=INT_MIN;
            int temp=candies[i]+extraCandies;
            for(int j=0;j<n;j++){
                maxi=max(maxi,candies[j]);
            }
            if(temp>=maxi) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};