class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        int i;
        for(int i=0;i<strs.size();i++){
        string temp=strs[i];
        string org=temp;
        sort(temp.begin(),temp.end());
        
        mp[temp].push_back(org);}
        vector<vector<string>>ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
}};