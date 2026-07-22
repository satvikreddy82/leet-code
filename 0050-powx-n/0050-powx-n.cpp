class Solution {
public:
    double myPow(double x, int n) {
        long long power=n;
        double ans=1;
        if(n<0){
            x=1/x;
            power=-power;
        }
        while(power>0){
            if(power%2==1) ans=ans*x;
                x=x*x;
             power=power/2;
        }return ans;
    }
};