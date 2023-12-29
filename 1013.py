a,b,c = input().split(' ')
a = int(a)
b = int(b)
c = int(c)

maior = 0
aux = 0

if (a>b): aux = a
else: aux = b

maior = (aux+c+abs(aux-c))/2

print('{} eh o maior'.format(int(maior)))

