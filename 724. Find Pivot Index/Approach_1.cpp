class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ls=0;
        int sum=0;
        int i;
        for( i=0;i<nums.size();i++){
            sum += nums[i];}
            for (i=0;i<nums.size();i++){
            int rs=sum-ls-nums[i];
           
            if(ls==rs)
            return i;

             ls+= nums[i];
            }
            
        
        return -1;
    }
};