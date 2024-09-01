class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> v;
        
        int n = nums.size();
        int k = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && (nums[i]+nums[j] == target)){
                    v.push_back(i);
                    v.push_back(j);
                    k = 1;
                    break;
                }
            }
            
            if(k) break;
        }
        
        return v;
        
    }
};