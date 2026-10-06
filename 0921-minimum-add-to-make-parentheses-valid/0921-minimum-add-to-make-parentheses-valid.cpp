class Solution {
public:
    int minAddToMakeValid(string s) {
        int open=0;//number of open paren present currently
        int req=0;//added when closed paren are occured before open paren
        for(char c:s){
            if(c=='(') open++;
            else{
                if(open>0) open--;//if open paren matches with closed paren 
                else req++;//closed paren doesn't have open paren before 
            }
        }
        return req+open;
    }
};