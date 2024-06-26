class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int i = 0, j = n-1;
        
        while(i<j){
            int x = min(height[i] , height[j]) * (j-i);
            ans = max(ans , x);
            
            if(height[i] < height[j]) i++;
            else j--;
        }
        
        return ans;
        
    }
};