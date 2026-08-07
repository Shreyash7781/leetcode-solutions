# 49. Group Anagrams

### Difficulty: Medium

## Description
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

 
Example 1:


Input: strs = ["eat","tea","tan","ate","nat","bat"]

Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Explanation:


	There is no string in strs that can be rearranged to form "bat".
	The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
	The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.



Example 2:


Input: strs = [""]

Output: [[""]]


Example 3:


Input: strs = ["a"]

Output: [["a"]]


 
Constraints:


	1 <= strs.length <= 104
	0 <= strs[i].length <= 100
	strs[i] consists of lowercase English letters.

## Submission Details
- **Status**: Accepted
- **Runtime**: 18
- **Memory**: 26064000
- **Language**: cpp

## Code
```cpp
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
```
