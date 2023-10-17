class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        count = 0
        return [count := count + nums[i] for i in range(len(nums))] #List Comprehension
