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
