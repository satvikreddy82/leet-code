class Solution {
public:
    int divide(int dividend, int divisor) {
        long long dvd=dividend;
        long long dvs=divisor;
        long long ans=0;
        bool negative=(dvd<0)^(dvs<0);
        dvd=abs(dvd);
        dvs=abs(dvs);

        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        while(dvd>=dvs){
            long long temp=dvs;
            long long multiple=1;
            while(temp+temp<=dvd){
                temp+=temp;
                multiple+=multiple;
            }
            dvd-=temp;
            ans+=multiple;
        }
        if(negative) ans=-ans;
        return ans;
    }
};