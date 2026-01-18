class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:

        # nums is a list of type int and returns bool

        #do a nested for loop is O(n^2)

        #sort then do one pass to see if same
        # would be O(n)

        nums.sort()

        for i in range(len(nums) - 1):
            if nums[i] == nums[i+1]:
                return True
                        
        return False
        