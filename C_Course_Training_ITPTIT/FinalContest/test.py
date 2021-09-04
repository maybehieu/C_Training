def evenNum(res):
    for v in res:
        if res(v) % 2 != 0:
            res.remove(v)
    return res
res = []
lengths = int(input())

for i in range(lengths):
    n = int(input())
    res.append(n)
print(evenNum(res))