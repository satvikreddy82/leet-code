class Solution {
public:
    int smallestNumber(int n, int t) {
        int temp1=n,temp2=temp1;
        int rem=0,pro=1;
        while(temp2>0){
            rem=temp2%10;
            pro*=rem;
            temp2/=10;
        }
        if(pro%t==0) return temp1;
        else return smallestNumber(temp1+1,t);
    }
};