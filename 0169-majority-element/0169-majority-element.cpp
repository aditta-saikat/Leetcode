class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int, int> mp;
        
        for(auto x: nums){
            mp[x]++;
        }
        
        
        int ans = 0, k;
        
        for(auto x: mp){
            
            if(x.second > ans){
                ans = x.second;
                k = x.first;
            }
        }
        
        return k;
    }
};