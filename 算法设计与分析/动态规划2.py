
def MaxSum(A):
    sum = 0
    b = 0
    for i in range(len(A)):
        if b > 0:
            b += L[i]
        else:
            b = A[i]
        if b > sum:
            sum = b
            right = i
    t = 0
    for i in range(right, -1, -1):
        t += A[i]
        if t == sum:
            left = i
            break

    print("最长字段和是：{0},左边界是：{1},右边界是：{2}".format(sum, left, right))


L = [2, -5, 8, 11, -3, 4, 6]
MaxSum(L)
