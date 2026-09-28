class Solution {
public:
    int maxDepth(string s) {
        int depth=0;
        int count=0;
        for(char c:s){
            if(c=='(') {
                count++;
                depth=max(depth,count);
            }
            else if(c==')') count--;
        }
        return depth;
        
    }
};