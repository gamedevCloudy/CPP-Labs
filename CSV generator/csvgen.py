import random as r

f = open("../Labs/Fundamental DS/Case/NewList.csv", "a")
for i in range(100):
    f.write(str(str(r.randint(1,1000)) + ","))
f.close()


