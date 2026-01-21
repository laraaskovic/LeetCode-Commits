class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        long = 0

        num = set(nums) #convert to a set?

        for n in num:
            if (n-1) not in num:
                #this means we are at the start
                count = 0

                while (n + count) in num:
                    count += 1
                
                long = max(count, long)

        return long

        


        