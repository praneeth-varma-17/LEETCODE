class Solution:
    def findNumbers(self, nums: list[int]) -> int:
        
        # 1. Define the helper function inside
        def has_even_digits(num: int) -> bool:
            # Simple helper logic (e.g., counting digits)
            return len(str(num)) % 2 == 0
            
        count = 0
        for n in nums:
            # 2. Call it directly by its name
            if has_even_digits(n):
                count += 1
                
        return count
