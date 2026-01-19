class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        
        hash = {}

        for num in nums:
            if num not in hash:
                hash[num] = 1
            else:
                hash[num] += 1
        
        hash = dict(sorted(hash.items(), key=lambda x: x[1], reverse=True))

        return list(hash.keys())[:k]

         