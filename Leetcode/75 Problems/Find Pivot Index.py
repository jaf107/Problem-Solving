# nums = [1, 7, 3, 6, 5, 6]

nums = [2, -1, 1]
nums.insert(0, 0)
for i, val in enumerate(nums):
    if i == 0:
        continue
    nums[i] = nums[i] + nums[i-1]
lastIndex = len(nums)
lastElem = nums[lastIndex-1]
for i, v in enumerate(nums):
    if i == 0:
        continue
    left = nums[i-1]
    right = lastElem - nums[i]
    if right == left:
        print(left, " ", right)
        print(i-1)
# return -1
print("No idea")

# def pivotIndex(self, nums: List[int]) -> int:
#     for i, val in enumerate(nums):
#         if i == 0:
#             continue
#         nums[i] = nums[i] + nums[i-1]
#     lastIndex = len(nums)
#     lastElem = nums[lastIndex-1]
#     for i, v in enumerate(nums):
#         if i == 0:
#             continue
#         left = nums[i]
#         right = lastElem - nums[i]
#         if right == left:
#             return i
#     return -1


# print(pivotIndex(nums))
