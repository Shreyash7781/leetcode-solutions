# 647. Palindromic Substrings

### Difficulty: Medium

## Description
Given a string s, return the number of palindromic substrings in it.

A string is a palindrome when it reads the same backward as forward.

A substring is a contiguous sequence of characters within the string.

 
Example 1:


Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".


Example 2:


Input: s = "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".


 
Constraints:


	1 <= s.length <= 1000
	s consists of lowercase English letters.

## Submission Details
- **Status**: Accepted
- **Runtime**: 1
- **Memory**: 8436000
- **Language**: cpp

## Code
```cpp
class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int count = 0;
        for (int i = 0; i < 2*n - 1; i++) {
            int left = i/ 2;
            int right = left + i% 2;
            while (left >= 0 && right < n && s[left] == s[right]) {
                count++;
                left--;
                right++;
            }
        }
        return count;
    }
};

```
