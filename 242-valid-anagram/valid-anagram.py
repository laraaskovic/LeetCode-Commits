class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        #solution 1 is sort both and check equal

        if len(s) != len(t):
            return False

        return sorted(s) == sorted(t)
        



        