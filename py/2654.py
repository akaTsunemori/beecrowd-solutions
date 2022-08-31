from sys import stdin, stdout

candidates = []
count = 0
T = int(stdin.readline())
for line in stdin:
    candidates.append(line)
    count += 1
    if count == T: break

godofor = candidates[0].split()
for candidate in candidates:
    candidate = candidate.split()

    if int(candidate[-3]) > int(godofor[-3]):
        godofor = candidate
    elif int(candidate[-2]) > int(godofor[-2]) and candidate[-3] == godofor[-3]:
        godofor = candidate
    elif int(candidate[-1]) < int(godofor[-1]) and candidate[-3] == godofor[-3] and candidate[-2] == godofor[-2]:
        godofor = candidate
    elif candidate[0] == min(godofor[0], candidate[0]) and candidate[-3] == godofor[-3] and candidate[-2] == godofor[-2] and candidate[-1] == godofor[-1]:
        godofor = candidate
    
print(godofor[0])