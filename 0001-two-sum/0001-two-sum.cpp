class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int p = 0, q = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    p = i;
                    q = j;
                }
                else{
                    continue;
                }
            }
        }
        return {p, q};
    }
};