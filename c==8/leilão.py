lances = int(input())
nomes = []
valores = []
vildo = 0
maior = "andrei"
for i in range(lances):
    
    nome = input()
    valor = int(input())

    nomes.append(nome)
    valores.append(valor)

    if valor > vildo:
        maior = nomes
        vildo = valor

maiorv = max(valores)
qc = valores.index(maiorv)

print(nomes[qc])
print(valores[qc])