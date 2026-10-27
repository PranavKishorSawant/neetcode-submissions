class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        //prefix products hashing 
        vector<int> pre;
        
        int pro=1;
        pre.push_back(pro);
        for(int i =1;i<n;i++){
            pro*=nums[i-1];
            pre.push_back(pro);
        }
        //suffix
        vector<int> post;
        pro=1;
        post.push_back(pro);
        for(int i =n-2;i>=0;i--){
            pro*=nums[i+1];
            post.push_back(pro);
        }
        //ans
        vector<int> ans;
        int i=0;
        int j=n-1;
        while(i<n && j>=0){
            ans.push_back(pre[i] * post[j]);
            i++;
            j--;
        }
        return ans;

    }
};
