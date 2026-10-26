class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> map;
        int n = nums.size();
        for (int i=0;i<n;i++){
            map[nums[i]]++;
        }
        vector<int> ans;
        while(k--){
            int max = 0;
            int num=-1;
            for (auto it= map.begin();it != map.end();it++){
                if (it->second > max){
                    max = it->second;
                    num = it->first;
                }
            }
            map.erase(num);
            ans.push_back(num);
        }
        return ans;
    }
};
