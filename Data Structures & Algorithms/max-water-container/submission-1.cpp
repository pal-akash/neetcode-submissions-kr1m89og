class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0, mult;
        for(int i=0; i<heights.size()-1; i++){
            for(int j=i+1; j<heights.size(); j++){
                if(heights[i] > heights[j]){
                    mult = heights[j] * (j-i);
                }else{
                    mult = heights[i] * (j-i);
                }
                if(ans < mult){
                    ans = mult;
                }
            }
        }
        return ans;
    }
};
