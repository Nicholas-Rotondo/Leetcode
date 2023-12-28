class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        sum = 0
        res = []
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                sum = nums[i] + nums[j]
                if sum == target:
                    res.append(i)
                    res.append(j)
                    return res
        return res
