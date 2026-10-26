class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int n= s.size();
        int maxlen=0;
        unordered_set <char> seen;
        for(int r=0;r<n;r++){ 
            //if the new element at the rth position is present in the set then shif the left boundary to the right and rm that term form the set.
            while(seen.count(s[r])){
                seen.erase(s[l]);
                l++;
            }
            //add the new element so that if the while is false also we have it in the set
            seen.insert(s[r]);

            //update the maxlen
            maxlen = max(maxlen,r-l+1);
        }
        return maxlen;
    }
};
