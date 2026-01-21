class Solution:
    def maxArea(self, height: List[int]) -> int:
        
        #area is (p2-p1)*(min(p1,p2))

        maxi = 0

        l = 0
        r = len(height) - 1 

        while l < r:
            tryMax = 0
            if height[l] < height[r]:
                tryMax = (r-l)*height[l]
                l += 1
            else:
                tryMax = (r-l)*height[r]
                r -= 1
            
            maxi = max(tryMax, maxi)

        return maxi
            
