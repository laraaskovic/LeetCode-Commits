class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l = 0
        r = len(nums) - 1

        while l <= r:
            half = l + (r - l) // 2

            if (nums[half] == target):
                return half
            elif (nums[l] == target):
                return l
            elif (nums[r] == target):
                return r
            elif (nums[half] > target):
                r = half - 1
            else:
                l = half + 1
        return -1