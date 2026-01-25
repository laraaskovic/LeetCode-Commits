class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        
        piles.sort()

        max = piles[-1]
        min = 1


        while (max >= min):
            half = (max + min) // 2

            t = h
            for p in piles:
                t -= ceil(p / half)

            if t >= 0:
                max = half - 1
            else:
                min = half + 1

                
        return min

