H = int(input())
M = int(input())
S = int(input())
T = int(input())

# Horário inicial em segundos
total = H * 3600 + M * 60 + S

# Soma o atraso e ajusta para um dia de 24 horas
total = (total + T) % 86400

# Converte de volta para horas, minutos e segundos
H = total // 3600
total %= 3600

M = total // 60
S = total % 60

print(H)
print(M)
print(S)