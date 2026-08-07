class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int ans=0;
        for(int i:nums){
            st.insert(i);}
            for(int i:st){
        if(st.find(i-1)==st.end()){
            int cnt=0;
            int c=i;
            while(
                
                st.find(c)!=st.end()){
                cnt ++;
                c++;
            }
            ans = max(ans,cnt);
        }}
        return ans;
        
    }
};