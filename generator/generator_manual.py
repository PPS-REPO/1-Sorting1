import sys

t = int(sys.argv[1])

if t == 1:
    print('3\n3\n1\n2')
elif t == 2:
    print('4\n-1\n-2\n-1\n1')
elif t == 3:
    print('8\n8\n7\n6\n5\n1\n2\n3\n4')
elif t == 4:
    print(1)
    print(-1000000)
elif t == 5:
    n = 200000
    print(n)
    for i in range(n):
        print((i - 100000) * 10)
elif t == 6:
    n = 199999
    print(n)
    for i in range(n):
        print((i - 99998) * 10)
elif t == 7:
    n = 200000
    print(n)
    for i in range(n - 1, -1, -1):
        print((i - 100000) * 10)
elif t == 8:
    n = 199999
    print(n)
    for i in range(n - 1, -1, -1):
        print((i - 99998) * 10)