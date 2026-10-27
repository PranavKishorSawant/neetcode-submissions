class Solution {
public:

    string encode(vector<string>& strs) {
        int n=strs.size();
        string encoded;
        for(int i=0;i<n;i++){
            int len = strs[i].size();
            encoded+= to_string(len);
            encoded+='#';
            encoded+=strs[i];
        }
        return encoded;
    }

    vector<string> decode(string s) {
        int n=s.size();
        vector<string> ans;
        int i=0;
        while(i<n){
            int j=i;
            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            string word = s.substr(j+1,len);
            ans.push_back(word);
            i = j+len+1;
        }
        return ans;
    }
};
