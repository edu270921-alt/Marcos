matriz = [[1,2,3],
          [4,5,6],
          [7,8,9]]

matriz2 = [[10,11,12],
           [13,14,15],
           [16,17,18]]

resultado = []

for i in range(len(matriz)):
    linha = []
    for j in range(len(matriz[0])):
        linha.append(matriz[i][j] + matriz [i][j])
    resultado.append(linha)

print("resultado da soma: ")
print(resultado)
