#!/bin/python3

marks = []

def addMarks(mr):

    x = input("\nClass Strength: ")
    print("\n\nEnter -1 for absent students...")

    for i in range(1,n):
        print("Marks of student: ", str(i+1), ": ")
        temp = (input())
        mr.append(temp)
    print("\nDone")

def findAvg():
    pass

def highLo():
    pass

def absCount():
    pass

def freq(): 
    pass



def main():
    ch = "R"
    while(ch !="E" or ch !="0"):
        print("""Choose an option: \n 1. Add marks \n 2. Find avg. \n 3. High Lo \n 4. Absent count \n 5. Freq \n 0.Exit""")
        x = input("Your choice: ")
        if x==1: 
            addMarks(marks)
        elif x==2:
            findAvg()
        elif x==3: 
            highLo()
        elif x==4:
            absCount()
        elif x==5:
            freq()
        elif x==0:
            ch="0"
            exit(0)

main()
