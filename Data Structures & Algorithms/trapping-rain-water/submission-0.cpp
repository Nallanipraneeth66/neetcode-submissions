class Solution {
public:
    int trap(vector<int>& height) {
        int i=0, j=height.size()-1;
        int w=0;
         int l=0, r=0;
        while(i<j){
           if(height[i]<height[j]){
            l=max(l, height[i]);
            w+=l-height[i];
            i++;
           }else{
            r=max(r, height[j]);
            w+=r-height[j];
            j--;
           }
        }   
        return w;
    }
};
