class Solution {
public:
    bool checkValidString(string s) {
        int low=0;
        int high=0;
        for(char c:s){
            if(c=='('){
                low++;
                high++;
            }
            else if(c==')'){
                low--;
                high--;
            }
            else{
                low--;
                high++;
            }
              low=max(0,low);
        if(high<0) return false;
        }
        return low==0;
       
    }
};