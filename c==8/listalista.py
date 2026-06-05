matriz = []
tam = 5
for i in range(tam):
    linha=[]
    for j in range(tam):
        linha.append(j)
    matriz.append(linha)
for i in range(tam):
    for j in range(tam):
        print(matriz[i][j], end = " ")
        print("")