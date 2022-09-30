import random as r

f = open("NewList.csv", "r+")
for i in range(100):
    f.write(str(str(r.randint(1,101)) + ","))
f.close()


