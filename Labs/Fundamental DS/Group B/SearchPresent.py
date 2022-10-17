import random as r

attendance = []
classStrength = 50

def GenAttendance(cStr):
    prob = [1,1,1,0,0] #25 percent of strength was absent. 
    for i in range(1,cStr):
        x = r.randint(0,4)
        if prob[x] == 1: attendance.append(i)

def SeqSearch(arr, toSearch): 
    for i in range(len(arr)): 
        if arr[i] == toSearch: 
            return toSearch, "Was Present"
    return "absent"

def BinarySearch(arr, numToFind):
   
    m = int((len(arr)-1)/2) 
    if len(arr) != 0: 
        if(numToFind == arr[m]): return arr[m]
        elif (numToFind > arr[m]): BinarySearch(arr[m:(len(arr)-1)], numToFind)
        elif(numToFind < arr[m]): BinarySearch(arr[0:m], numToFind)
    else: return "Absent"

def Start():
    print("Hello, attendance register: ")
    print("1. Test Attendance 2. Enter Manually")
    x = int(input("Your Choice: "))
    GetAttendacne(x)

def Search():
    print("Search Using: ")
    x = int(input("1. Binary Serach  2. Sequential/Linear Serach: "))
    print("Your choice: ", x)
    y = int(input("Enter Roll No. To Search: "))

    if x == 1: print(BinarySearch(attendance,y))
    if x == 2: print(SeqSearch(attendance,y))
 
def GetAttendacne(choice):
    if(choice == 2):
        x = int(input("Enter Total Present: "))
        for i in range(0,x):
            attendance.append(int(input("Roll no: ")))
        Search()
    if choice == 1: 
        GenAttendance(classStrength)
        Search()
Start()







