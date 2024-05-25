class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int , int> mp;
        vector<int> ans;

        for(auto x:nums){
            mp[x]++;
        }

        vector<pair<int , int>> v;
        for(auto x:mp){
            v.push_back(make_pair(x.second , x.first));
        }
         sort(v.rbegin() , v.rend());

        for(int i=0;i<v.size() && k>0;i++){
            ans.push_back(v[i].second);
            k--;
        }

        return ans;
    }
};