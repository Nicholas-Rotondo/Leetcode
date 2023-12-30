class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        kFreq = {}
        numsLen = len(nums)
        count = 0
        res = []
        if(numsLen == 0):
            return 0
        if(numsLen == 1):
            return [nums[0]]
        for i in nums:
            if i in kFreq:
                kFreq[i]+=1
            else:
                kFreq[i] = 1

        for i in range(k):
            max_k = 0
            max_k_elem = 0
            for key,value in kFreq.items():
                if(value > max_k):
                    max_k = value
                    max_k_elem = key
            res.append(max_k_elem)
            kFreq.pop(max_k_elem)
            
        return res

        
