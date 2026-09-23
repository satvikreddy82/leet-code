class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1=rec1[0];
        int y1=rec1[1];
        int x2=rec1[2];
        int y2=rec1[3];
        int x3=rec2[0];
        int y3=rec2[1];
        int x4=rec2[2];
        int y4=rec2[3];
        int x5=max(x1,x3);
        int y5=max(y1,y3);
        int x6=min(x2,x4);
        int y6=min(y2,y4);
        if(x5>=x6 ||y5>=y6) return false;
        return true;
    }
};