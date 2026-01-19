class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        # nested for loop n^2
        # sort and increase k

        hash = {} #val:index

        for i, n in enumerate(nums):
            t = target - n
            if t in hash:
                return [hash[t], i]
            hash[n] = i
        return