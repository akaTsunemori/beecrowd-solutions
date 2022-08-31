int(input())
n = input()
n = n.split()

for i in range(len(n)): n[i] = int(n[i])

r = min(n)

print('Menor valor:', r)
print('Posicao:', n.index(r))