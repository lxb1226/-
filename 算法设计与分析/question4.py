# 算法1.4  插入排序

# 插入排序的思路是：
# 假设前j-1个数已经排好，考虑第j个数插入的位置.从第j-1个数开始，
# 从后向前，顺序将第j个数与已经排好的数进行比较，直到找到第j个数应该放置的位置，然后插入第j个数


L = [1, 0, 8, 7, 4, 2, 6, 5, 9, 3]

length = len(L)
for j in range(1, length):
    x = L[j]
    i = j-1
    while i >= 0 and x < L[i]:
        L[i+1] = L[i]
        i -= 1
    L[i+1] = x
print(L)
