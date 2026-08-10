class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>a;
        int complement;
        for (int i=0;i<nums.size();i++){
            complement=target-nums[i];
            if (a.find(complement)!=a.end()){
                return {a[complement],i};
            }
            
                a[nums[i]]=i;
        
        }
        return {};
    }
};