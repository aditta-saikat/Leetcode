class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        set<vector<int>> s;
        
        sort(nums.begin() , nums.end());
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            
            
            int j = i+1;
            int k = n-1;
            
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k] ;
                if(sum == 0)
                {
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[k]);
                    
                    s.insert(v);
                    j++;
                    k--;
                }
                
                else if(sum < 0) j++;
                else k--;
            }
            
            

        }
        for(auto x:s){
            ans.push_back(x);
                
        }
                                                 return ans;
        
    }
                                                 
};