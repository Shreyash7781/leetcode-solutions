class Solution {
public:
bool ispossible(vector<int>& piles,int mid, int h){
    long long total_hr=0;
    for(int i=0;i<piles.size();i++){
        total_hr+= ceil(piles[i]*1.0/mid*1.0);
                    }
        return total_hr<=h;
        }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(), piles.end());
        int ans= INT_MAX;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(ispossible(piles,mid,h)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};