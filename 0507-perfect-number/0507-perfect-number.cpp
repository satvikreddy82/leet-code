class Solution {
public:
    bool checkPerfectNumber(int num) {
        int ans=0;
        for(int i=1;i<num;i++){
            if(num%i==0) ans+=i;
        }
        return num==ans;
    }
};