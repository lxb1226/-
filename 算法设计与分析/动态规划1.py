
def MaxSumOnline(L):
    sum = 0
    b = 0
    for i in range(0, len(L)):
        b += L[i]
        if b > 0:
            sum = b
        else:
            b = 0

    print("最长子段和是：", sum)


L = [2, -5, 8, 11, -3, 4, 6]
MaxSumOnline(L)
