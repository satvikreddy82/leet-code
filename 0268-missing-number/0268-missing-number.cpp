class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a=0,b=0; int n=nums.size();
         for(int num:nums){ 
            a^=num;
             }
              for(int i=1;i<=n;i++){
                 b^=i;
                  }
                  
                return a^b;
    }
};