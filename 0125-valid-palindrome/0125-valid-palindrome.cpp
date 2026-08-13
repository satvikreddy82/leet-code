class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(char c:s){
            if(isalnum(c)) temp+=tolower(c);
        } 
        string reve=temp;
        reverse(reve.begin(),reve.end());
        if(reve==temp) return true;
        return false;   
    }
};