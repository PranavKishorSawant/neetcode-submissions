class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n  = s.size();
        int l=0;
        int maxlen =0;
        unordered_set<char> myset;
        for(int r=0;r<n;r++){
            while(myset.count(s[r])){
                myset.erase(s[l]);
                
                l++;
                
            }
            maxlen = max(maxlen,r-l+1);
            myset.insert(s[r]);

        }
        return maxlen;
    }
};
