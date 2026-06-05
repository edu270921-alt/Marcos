n = int(input())

if n == 0:
    exit()

nomes = []
valores = []

for _ in range(n):
    nomes.append(input())
    valores.append(int(input()))

maior = max(valores)
indice = valores.index(maior)

print(nomes[indice])
print(maior)