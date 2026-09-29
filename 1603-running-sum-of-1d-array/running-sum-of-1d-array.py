class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        size = len(nums)

        for i in range(0,size):
            if(i == 0):
                nums[i] = nums[i]
            else:
                nums[i] = nums[i] + nums[i-1]
    
        return nums

        
        