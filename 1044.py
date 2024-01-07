a,b = input().split(' ')
a = int(a)
b = int(b)

maior = a
menor = b

if(b>maior): 
    maior = b
    menor = a

print('Sao Multiplos' if maior%menor==0 else 'Nao sao Multiplos')

