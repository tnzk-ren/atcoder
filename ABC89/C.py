N = int(input())

marchNum = {'M':0, 'A':0, 'R':0, 'C':0, 'H':0}
march = ['M', 'A', 'R', 'C', 'H']
for i in range(N):
    str = input()
    if str[0] in march:
        marchNum[str[0]] += 1

comNum = 0
for i in range(0,5):
    for j in range(i+1,5):
        for k in range(j+1, 5):
            comNum += marchNum[march[i]] * marchNum[march[j]] * marchNum[march[k]]

print(comNum)
