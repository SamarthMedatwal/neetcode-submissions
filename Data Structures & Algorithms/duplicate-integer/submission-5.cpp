class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int>res;

        for(int i=0; i<nums.size(); i++){
            if(res[nums[i]] == 1){
                return true;
            }
            else{
                res[nums[i]]++;
            }
        }
        return false;
    }
};