class NumArray:
    def __init__(self, nums: List[int]):
        self.preNums = nums
        for i in range(len(nums)-1):
            self.preNums[i+1] += self.preNums[i]

    def sumRange(self, left: int, right: int) -> int:
        if left == 0: 
            return self.preNums[right]
        return self.preNums[right] - self.preNums[left-1]

# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(left,right)