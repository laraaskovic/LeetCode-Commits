class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        stack = []
        answer = [0] * len(temperatures)

        for i in range(len(temperatures)):
            while stack and temperatures[i] > stack[-1][0]:
                arr = stack.pop()
                ind = i - arr[1]
                answer[arr[1]] = ind

            stack.append([temperatures[i], i])

        return answer
                
                