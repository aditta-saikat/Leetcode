class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int k = nums.size()/3;
        map<int , int> mp;
        
        for(auto x: nums){
            mp[x]++;
        }
        
        vector<int> v;
        
        for(auto x: mp){
            if(x.second > k){
                v.push_back(x.first);
            }
        }
        
        return v;
        
    }
};