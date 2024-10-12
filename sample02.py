arr = input().split()
q_arr = []

for i in arr:
    q_arr.append(int(i))


for i in q_arr:
    if (i%3==0) and (i%5==0):
        print("ThreeFive")
    elif (i%3==0):
        print("Three")
    elif(i%5==0):
        print("Five")
    else:
        print(i)

