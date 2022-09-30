marks = []
def ReadMarks():
    x = int(input("Enter no. of studnents: "))
    print("Enter marks of class: ")
    for i in range(0,x): 
            xu = str(input("marks': "))
            if(x!= "AB"): 
                marks.append(int(xu))
            else:
                marks.append((-1))

#/usr/bin/python3
def ReadFile():
    f = open("NewList.csv", "r")
    x = f.readlines()
    print("\n", x)
    y = x[0].split()
    print(y)
    return [0,0]
    # x = x.split(",")
    # return x


def BubbleSort(arr):
    swapped = False
    for i in range(0, len(arr)-1):
        passes = 0
        for j in range(len(arr)-1):
            
            if arr[j]>arr[j+1]: 
                swapped = True
                arr[j],arr[j+1] = arr[j+1],arr[j]
        passes +=1
        print(arr, passes,"Swap done")      
        if not swapped: 
            return
    # return arr

# ReadMarks()
# print(BubbleSort(marks))

print(BubbleSort(ReadFile()))



    
