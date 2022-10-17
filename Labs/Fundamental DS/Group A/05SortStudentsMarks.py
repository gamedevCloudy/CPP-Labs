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
    f = open("../Fundamental DS/Case/NewList.csv", "r")
    x = f.readline()
    y = x.split(",")
    z = []
    for i in range(len(y)-1): 
        z.append(int(y[i]))

    # y.pop("")
    print(z)
    return z


def BubbleSort(arr):
    swapped = False
    for i in range(0, len(arr)-1):
        passes = 0
        for j in range(len(arr)-1):
            
            if arr[j]>arr[j+1]: 
                swapped = True
                arr[j],arr[j+1] = arr[j+1],arr[j]
        passes +=1
        print(arr, passes,"Swap done\n\n")      
        if not swapped: 
            return
    # return arr
def SelectionSort(arr): 
    for i in range(len(arr)-1):
        for j in range(i, len(arr)): 
            print(arr[i], "", arr[j])
            if(arr[i]>arr[j]):
                arr[j],arr[i]=arr[i],arr[j]
    return arr; 
# ReadMarks()
# print(BubbleSort(marks))

# print(BubbleSort(ReadFile()))
print(SelectionSort(ReadFile()))



    
