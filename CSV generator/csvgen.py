import random as r

# f = open("../Labs/Fundamental DS/Case/NewList.csv", "a")
f = open("NewList.csv", "a")
for i in range(1000):
    f.write(str(str(round(r.uniform(1,1000),2)) + ","))
f.close()


