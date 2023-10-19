class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_indices = {}  # A dictionary to store the indices of numbers
        for i, num in enumerate(nums):
            diff = target - num
            if diff in num_indices:
                print(num_indices)
                return [num_indices[diff], i]
            num_indices[num] = i
