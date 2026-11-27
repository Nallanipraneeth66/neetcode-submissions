class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0, j=heights.size()-1;
        int maxCap=0;
        while(i<j){
                int w=j-i;
               int h=min(heights[i], heights[j]);
                maxCap=max(maxCap, w*h);
            if(heights[i] < heights[j]){
                i++;
            }else {
                j--;
            }
        }
    return maxCap;
    }
};
