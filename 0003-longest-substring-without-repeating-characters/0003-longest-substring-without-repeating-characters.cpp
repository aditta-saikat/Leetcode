class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int n = s.size();
        int  l=0;
        map<char , int> mp;
        
        for(int r=0;r<n;r++){
            if(mp.count(s[r])==0 || mp[s[r]]<l){
                mp[s[r]] = r;
                ans = max(ans , r-l+1);
            }
            else{
                l = mp[s[r]]+1;
                mp[s[r]] = r;
                
            }
        }
        
        return ans;
        
    }
};