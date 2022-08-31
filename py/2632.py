def collisionDetection(cx, cy, radius, rx, ry, w, h):
    closest_X, closest_Y = cx, cy
    
    if cx < rx:
        closest_X = rx
    elif rx + w < cx:
        closest_X = rx + w

    if cy < ry:
        closest_Y = ry
    elif  ry + h < cy:
        closest_Y = ry + h

    distX = cx - closest_X
    distY = cy - closest_Y
    dist = (distX ** 2 + distY ** 2) ** 0.5

    if dist <= radius:
        return True
    else:
        return False


n = int(input())

spells = {
    'fire': (200, 20, 30, 50),
    'water': (300, 10, 25, 40),
    'earth': (400, 25, 55, 70),
    'air': (100, 18, 38, 60)
}

for _ in range(n):
    w, h, x0, y0 = map(int, input().split())
    spell, level, cx, cy = input().split()
    level, cx, cy = int(level), int(cx), int(cy)

    collision = collisionDetection(cx, cy, spells[spell][level], x0, y0, w, h)

    if collision:
        print(spells[spell][0])
    else:
        print(0)