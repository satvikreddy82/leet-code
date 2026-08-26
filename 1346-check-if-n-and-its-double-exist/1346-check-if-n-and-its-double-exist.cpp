class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int i=0,j=i+1;
      for(int i=0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]==2*arr[j] || arr[j]==2*arr[i]) return true;
        }
      }
      return false;
    }
};