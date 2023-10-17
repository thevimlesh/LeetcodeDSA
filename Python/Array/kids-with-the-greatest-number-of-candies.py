class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        maxi = max(candies)
        candies = [True if candy+extraCandies >= maxi else False for candy in candies]
        return candies 
        