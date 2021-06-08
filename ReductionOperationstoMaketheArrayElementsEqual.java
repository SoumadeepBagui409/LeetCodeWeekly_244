Reduction Operations to Make the Array Elements Equal

class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]==nums[nums.size()-1])
            return 0;
        vector<int> ans ;
        map<int,int> val;
        for(auto x:nums)
            val[x]++;
        for(auto x:val){
            ans.push_back(x.first);
        }
        int result = 0;
        for(int i =ans.size()-2;i>=0;i--){
            result += val[ans[i+1]]; 
            val[ans[i]]+=val[ans[i+1]];
            val[ans[i+1]]=0;
        }
        return result;
    }
};
