class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>ans;
        for(int i=0;ans.size()<arr.size();i++){
            if(arr[i]!=0) ans.push_back(arr[i]);
            else{
                ans.push_back(0);
                if (ans.size() < arr.size()) {
                    ans.push_back(0);
                }
            }
        }
     arr=ans;
    }
};