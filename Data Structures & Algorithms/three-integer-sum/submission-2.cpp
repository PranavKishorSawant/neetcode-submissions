class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i] == nums[i-1])continue;
            int diff= 0-nums[i];
            int j=i+1;
            int k=n-1;
            while(j<k && k>=0 && j<=n-1){
                if(nums[j] + nums[k] > diff)k--;
                else if (nums[j] + nums[k] < diff)j++;
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<n && nums[j]==nums[j-1])j++;
                    while(k>=0 && nums[k]==nums[k+1])k--;
                }   
            }
        }
        return ans;
    }

};
