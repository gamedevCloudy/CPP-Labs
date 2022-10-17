#/usr/bin/python3

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

arre = [5,4,2,7,3]

print(BubbleSort(arre))



    
