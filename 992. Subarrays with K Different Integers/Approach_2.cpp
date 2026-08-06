class Solution {
public:
    int atmost(vector<int>& nums, int k) {
        int r=0;
        int l=0;
        int ans=0;
        int n=nums.size();
        unordered_map<int,int>mp;
        while(r<n){
            mp[nums[r]]++;
            while(mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0)
                mp.erase(nums[l]);
                l++;
            }
            ans+=r-l+1;
            r++;

        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k){
        return atmost(nums, k) - atmost(nums, k - 1);
    }
};