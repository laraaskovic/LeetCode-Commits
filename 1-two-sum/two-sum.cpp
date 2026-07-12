class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // stores the num value : index
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            // store the numerical value
            int t = target - nums[i];

            // found
            if (map.find(t) != map.end()) {
                return vector<int>{i, map[t]};
            }

            map[nums[i]] = i;
        }

        return {0, 0};
        
    }
};