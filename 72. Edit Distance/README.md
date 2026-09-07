# 72. Edit Distance

### Difficulty: Medium

## Description
Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2.

You have the following three operations permitted on a word:


	Insert a character
	Delete a character
	Replace a character


 
Example 1:


Input: word1 = "horse", word2 = "ros"
Output: 3
Explanation: 
horse -> rorse (replace 'h' with 'r')
rorse -> rose (remove 'r')
rose -> ros (remove 'e')


Example 2:


Input: word1 = "intention", word2 = "execution"
Output: 5
Explanation: 
intention -> inention (remove 't')
inention -> enention (replace 'i' with 'e')
enention -> exention (replace 'n' with 'x')
exention -> exection (replace 'n' with 'c')
exection -> execution (insert 'u')


 
Constraints:


	0 <= word1.length, word2.length <= 500
	word1 and word2 consist of lowercase English letters.

## Submission Details
- **Status**: Accepted
- **Runtime**: 7
- **Memory**: 14180000
- **Language**: cpp

## Code
```cpp
class Solution {
public:
    int solve(string &str1, string &str2, int i, int j, vector<vector<int>> &dp) {
        if (i >= str1.size()) return str2.size() - j;  
        if (j >= str2.size()) return str1.size() - i;
        if (dp[i][j] != -1) return dp[i][j];
        if (str1[i] == str2[j]) {
            return dp[i][j] = solve(str1, str2, i+1, j+1, dp);
        } else {
            int insertOp  = 1 + solve(str1, str2, i, j+1, dp);
            int deleteOp  = 1 + solve(str1, str2, i+1, j, dp);
            int replaceOp = 1 + solve(str1, str2, i+1, j+1, dp);
            return dp[i][j] = min({insertOp, deleteOp, replaceOp});
        }
    }
    int minDistance(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(word1, word2, 0, 0, dp);
    }
};

```
