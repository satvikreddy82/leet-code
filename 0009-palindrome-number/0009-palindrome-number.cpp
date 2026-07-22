class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int real=x;
        if(real<0) return false;
        else{
            while(real>0){
                int rem=real%10;
                real=real/10;
                rev=rev*10+rem;
            }
        }
        if(rev==x) return true;
        return false;
    }
};