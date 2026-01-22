class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        check = []
        
        if len(s1) > len(s2):
            return False

        sub  = sorted(s1)

        l = 0
        r = l + len(s1)


        for r in range(len(s2)-len(s1)+1):
            r = l + len(s1)
            ss = sorted(s2[l:r])

            if (ss == sub):
                return True
            else:
                l += 1
                r += 1

        return False


