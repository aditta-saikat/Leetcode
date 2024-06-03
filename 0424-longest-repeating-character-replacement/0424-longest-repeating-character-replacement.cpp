class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int ans = 0 ,i=0, j=0,curr = 0, n=s.size();
        map<char , int> mp;
        
        while(j<n){
            mp[s[j]]++;
            
            curr = max(curr, mp[s[j]]);
            
            while(j-i+1-curr > k){
                mp[s[i]]--;
                
                if(mp[s[i]]==0)
                    mp.erase(s[i]);
                i++;
                
            }
            ans = max(ans , j-i+1);
            j++;
            
        }
        
        
        return ans;
        
        
    }
};