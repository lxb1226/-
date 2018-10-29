# 算法1.3
# 汉诺塔


def Hanoi(A, C, n):
    if n == 1:
        move(A, C)
    else:
        Hanoi(A, "B", n-1)
        move(A, C)
        Hanoi("B", C, n-1)


def move(A, C):
    print("move"+A+"-->"+C)


if __name__ == '__main__':
    Hanoi("A", "C", 3)
