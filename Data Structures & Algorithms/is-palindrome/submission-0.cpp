class Solution {
public:
    bool isPalindrome(string s) {
        
        vector<char> v;
        int n = s.size();
        while(n--){
            if(isalnum(s[n])){
                
                v.push_back((tolower(s[n])));
                //cout<<tolower(s[n]);
            }
        }
        n = v.size() ;
        for(int i=0;i<n;i++){
            if (v[i] != v[n-i-1]){
                return false;
            }
        }
        return true;
    }
};
