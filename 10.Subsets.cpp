class Solution {
public:
    
    vector<int> findSubset(int x,vector<int>& numbers){
        vector<int> ans;
        int i = 0;
        while(x!=0){
            if(x&1){
                ans.push_back(numbers[i]);
            }
            i++;
            x = x>>1;
        }
        return ans;
    }
    
    vector<vector<int>> subsets(vector<int>& nums){
        vector<vector<int>> result;
        vector<int> ans;
        int n = 1<<nums.size();
        for(int i=0;i<n;i++){
            vector<int> ans = findSubset(i,nums);
            result.push_back(ans);
        }
        return result;
    }
};
