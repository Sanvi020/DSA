class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int d1 = max(x1,min(xCenter,x2));
        int d2 = max(y1,min(yCenter,y2));

        int d3 = xCenter-d1;
        int d4 = yCenter-d2;

        if(d3*d3+d4*d4<=radius*radius){
            return true;
        }
        return false;
    }
};