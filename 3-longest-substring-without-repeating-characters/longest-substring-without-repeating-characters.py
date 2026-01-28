class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        h = {}
        seen = set()


        best = 0

        l = 0

        for r, ch in enumerate(s):
            while ch in seen:
                seen.remove(s[l])
                l += 1

            seen.add(ch)

            # update best to be max
            #length j - l + 1
            best = max(best, r - l + 1)


        return best





        