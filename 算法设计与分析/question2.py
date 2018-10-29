# 算法1.2

L = list(range(0, 10))

x = 5
j = 0
while j < len(L) and x > L[j]:
    j += 1
if x < L[j] or j > len(L):
    j = 0
print(j)
