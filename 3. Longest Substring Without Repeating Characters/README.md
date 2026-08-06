# 3. Longest Substring Without Repeating Characters

### Difficulty: Medium

## Description
Given a string s, find the length of the longest substring without duplicate characters.

 
Example 1:


Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.


Example 2:


Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.


Example 3:


Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.


 
Constraints:


	0 <= s.length <= 105
	s consists of English letters, digits, symbols and spaces.

## Submission Details
- **Status**: Accepted
- **Runtime**: 305
- **Memory**: 81332000
- **Language**: cpp

## Code
```cpp
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
```
