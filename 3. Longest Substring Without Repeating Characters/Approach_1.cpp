class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int n=s.length();
        int maxlen=0;
        unordered_set<char> seen;
        for (int r=0;r<n;r++){
           while(seen.count(s[r]) ){
            seen.erase(s[l]);
            l++;
           }
           seen.insert(s[r]);
           maxlen=max(maxlen,r-l+1);

            }
        
    
    return maxlen;
}
};