class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=INT_MIN;
        int n=accounts.size(),m=accounts[0].size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++){
                sum+=accounts[i][j];
            }
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};