class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size() ;
        vector<int> ans;
        unordered_map <int,int> map ;
        for(int i=0 ;i<n;i++){
            map[nums[i]] = i;
        }
        for (int i=0;i<n;i++){
            int diff = target - nums[i] ;
            auto it = map.find(diff);
            if (it != map.end() && (it->second != i) ){
                ans.push_back(i);
                ans.push_back(it->second);
                break;
            }
        }
        return ans;
    }
};
