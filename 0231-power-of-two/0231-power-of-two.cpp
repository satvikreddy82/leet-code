class Solution {
public:
    bool isPowerOfTwo(int n) {
        while(n>1){
            if(n%2==0) n/=2;
            else return false;
        }
        if(n==1) return true;
        return false;
    }
};