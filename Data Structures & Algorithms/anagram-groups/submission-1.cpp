class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        
        for (string s : strs){
            vector<int> freq(26,0);
            int n= s.size();
            for (int i=0;i<n;i++){
                freq[s[i]- 'a']++;
            }
            string key ;
            for(int i =0;i<26;i++){
                key += '#';
                key += to_string(freq[i]);
            }
            map[key].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto p:map){
            ans.push_back(p.second);
        }
        return ans;
    }
};
