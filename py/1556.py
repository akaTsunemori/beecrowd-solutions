from sys import stdin, stdout


ans = set()


def dfs(s: str) -> None:
    if s in ans or len(s) == 0:
        return
    ans.add(s)
    if len(s) == 1:
        return
    for i in range(len(s)):
        dfs(s[:i]+s[1+i:])


def solution() -> None:
    while True:
        s = stdin.readline().strip()
        if s == '':
            break
        dfs(s)
        ans_sorted = sorted(ans)
        stdout.write('\n'.join(ans_sorted))
        stdout.write('\n\n')
        ans.clear()


if __name__ == '__main__':
    solution()
