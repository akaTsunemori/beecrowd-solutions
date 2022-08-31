s = int(input())
h, m = 0, 0

if s >= 3600:
    h = s // 3600
    s -= h * 3600
    
if s >= 60:
    m = s // 60
    s -= m * 60
    
print(f'{h}:{m}:{s}')