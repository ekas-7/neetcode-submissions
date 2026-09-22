class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> seen;
        for(auto it:nums){
            if(seen.find(it)!=seen.end()){
                return true;
            }
            seen.insert(it);
        }

        return false;
    }
};