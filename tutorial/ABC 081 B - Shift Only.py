# --- cofing: utf-8 ---

n = int(input())

a = list(map(int, input().split()))

def mod2(a, cnt):
    if sum([i % 2 for i in a]) == 0:
        a = [i / 2 for i in a]
        cnt += 1
        return mod2(a, cnt)
    else:
        return cnt

mod2(a, 0)