# nums = [-2, 1,-3,4,-1,2,1,-5,4 ]
nums = [1]
print(type(nums))
# def maxSubArray(self, nums: List[int]) -> int:
sum,t = 0, 0
for i, num in enumerate(nums):
    t = max(t + num, 0)
    sum = max(t,sum)
    
print(sum)
#     return sum
    

# print(maxSubArray(nums))
