
import random as r
from re import X;
arre =[]

def GenArrays():
    for i in range(100):
        x = [0,0,0]
        x[0] = r.randint(0,1)
        if(x[0]==1): 
            x[1] = 0
            x[2] = 0
        else: 
            x[1] = r.randint(0,1)
            if x[1]==1:
                x[2] = 0
            else: 
                x[2] = 1
        arre.append(x)

sarr = []

def GetSample(): 
    for i in arre:
        if(i[2]==0): 
            # print("hello", i)
            sarr.append(i)

def ChooseDoor():
    x,y =0,0
    for i in sarr:
        if i[0]==1: x+=1
        if i[1]==1: y+=1
    return x,y

def ChangeOpinion():
    counter= 0
    for i in sarr: 
        if(i[0]==0): 
            counter+=1

    probwin = 1 - (counter/len(sarr))
    return (probwin)


won = []
sampleCount = 0
couldWinIfDintChange = 0
couldWinIfDidChange = 0
for i in range(100): 
    GenArrays()
    GetSample()
    sampleCount += (len(sarr))
    couldWinIfDintChange,couldWinIfDidChange =   ChooseDoor()
    won.append(ChangeOpinion())

ct = 0
for i in won: 
    ct+=i
averangeChanceofWin = ct/len(won)
percentageChange = round(averangeChanceofWin,5)*100

print("Samples:", sampleCount, "\t Door1: ", couldWinIfDintChange, "\t Door2: ", couldWinIfDidChange, "\n Average percentage chance of winning if door was changed: ", percentageChange)
            
            