class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        r = len(matrix[0]) - 1
        l = 0

        t = 0
        b = len(matrix) - 1

        while t <= b:
            midR = (t + b) // 2

            if (matrix[midR][0] > target):
                #then we know its in a previous row
                b = midR - 1
            elif (matrix[midR][len(matrix[0])-1] < target):
                t = midR + 1
            else:
                while l <= r:

                    half = l + (r - l) // 2

                    if (matrix[midR][half] == target):
                        return True
                    elif (matrix[midR][l] == target):
                        return True
                    elif (matrix[midR][r] == target):
                        return True
                    elif (matrix[midR][half] > target):
                        r = half - 1
                    else:
                        l = half + 1
                return False         
        return False         