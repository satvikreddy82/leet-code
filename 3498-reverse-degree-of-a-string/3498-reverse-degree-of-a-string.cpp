class Solution {
public:
    int reverseDegree(string s) {
       int n=s.length();
       int ans=0,i=0;
       while(i<n){
       int rev = 'z' - s[i] + 1;
        ans+=(rev*(i+1));
        i++;
       } 
       return ans;
    }
};