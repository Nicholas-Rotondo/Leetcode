class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        start = 0
        end = len(numbers)-1
        while start < end:
            if(numbers[end] + numbers[start] == target):
                return [start+1,end+1]
            if(numbers[end] + numbers[start] < target):
                start += 1
            if(numbers[end] + numbers[start] > target):
                end -= 1
        return
