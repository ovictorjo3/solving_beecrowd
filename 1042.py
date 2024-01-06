a,b,c = input().split(' ')
a = int(a)
b = int(b)
c = int(c)

aux = []
aux.append(a)
aux.append(b)
aux.append(c)

aux.sort()

for i in range(len(aux)):
    print(aux[i])

print()

print('{}\n{}\n{}'.format(a,b,c))
