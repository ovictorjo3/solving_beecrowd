a = int(input())
out = []

for i in range(a):
    n,m = input().split(' ')
    n = int(n)
    m = int(m)

    out.append(str(pow(n,m)))

for j in range(len(out)):
    print(len(out[j]))