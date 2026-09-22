class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int> valueToIndex ;
        vector<int>ans(2,-1);
        for(int i =0;i<n;i++){
            int valueNeeded = target - nums[i];
            if(valueToIndex.find(valueNeeded)!=valueToIndex.end()){
                ans[0] = valueToIndex[valueNeeded];
                ans[1] = i;
                return ans;
            }
            valueToIndex[nums[i]] = i;
        }
        return ans;
    }
};
