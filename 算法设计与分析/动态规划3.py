
# def MaxSubSum(A,left,right):
#     if left==right:
#         return 0 if A[left]<0 else A[left]
#     center=(left+right)//2
#     leftSum=MaxSubSum(A,left,center)
#     rightSum=MaxSubSum(A,center+1,right)
#     leftMax=Sum(A,left,center)
#     rightMax=Sum(A,center+1,right)
#     sum=leftMax+rightMax
#     if leftSum>sum:
#         sum=leftSum
#     if rightSum>sum:
#         sum=rightSum
#     return sum


# def Sum(A,left,right):
#     s1=t=0
#     s1=A[left]
#     for i in range(left,right):
#         t+=A[i]
#         if t>s1:
#             s1=t
#     return s1

class Solution(object):
    def maxSubArray(self, nums):
        left = 0
        right = len(nums)-1
        maxSum = self.divide(nums, left, right)
        return maxSum

    def divide(self, nums, left, right):
        if left == right:
            return nums[left]
        center = (left+right)/2
        leftMaxSum = self.divide(nums, left, center)
        rightMaxSum = self.divide(nums, center+1, right)
        leftBorderSum = nums[center]
        leftSum = nums[center]
        for i in range(center-1, left-1, -1):
            leftSum += nums[i]
            if leftSum > leftBorderSum:
                leftBorderSum = leftSum
        rightBorderSum = nums[center+1]
        rightSum = nums[center+1]
        for i in range(center+2, right+1):
            rightSum += nums[i]
            if rightSum > rightBorderSum:
                rightBorderSum = rightSum
        BorderSum = leftBorderSum + rightBorderSum
        return max(leftMaxSum, rightMaxSum, BorderSum)


L = [2, -5, 8, 11, -3, 4, 6]
solution = Solution()
sum = solution.maxSubArray(L)
print(sum)
