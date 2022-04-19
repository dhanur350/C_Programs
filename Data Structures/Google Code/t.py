t = int(input())
l = []
while(t > 0):
    # n = input().split()
    n1, n2 = int(input().split())

    if n1 ^ n2 != 0:
        l.append("NO")
        t -= 1

    elif n1 ^ n2 == 0:
        l.append("YES")
        t -= 1
for i in l:
    print(i)
    # if flag == 0:
    #     print("NO")
    # else:
    #     print("YES")
