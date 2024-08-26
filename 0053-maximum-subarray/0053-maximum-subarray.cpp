class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int ans  = INT_MIN;
        
        int total = 0;
        for(auto x: nums){
            
            total += x;
            if(total < x){
                total  = x;
            }
            
            if(total > ans) ans = total;
        }
        
        return ans;
        
    }
};