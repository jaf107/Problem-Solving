nums = [1, 4, 5, 4]
for i, val in enumerate(nums):
    if i == 0:
        continue

    nums[i] = nums[i] + nums[i-1]
    # print(i, " -> ", val)


# print("Separate")
# nums = [1, 4, 3, 4]
for i in range(len(nums)):
    print(nums[i])
    # print(e)

    # print(e)

# def runningSum(self, nums: List[int]) -> List[int]:
#     for i, e in nums:
#         print(i, e)
