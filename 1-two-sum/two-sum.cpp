class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); i++) {
            int c = target - nums[i];

            if (seen.count(c)) {
                return {seen[c], i};
            }

            seen[nums[i]] = i;

        }

        return {};


        
    }
};