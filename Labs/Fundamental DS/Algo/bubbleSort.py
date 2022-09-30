arr = [5,4,3,7,65,4,3,54]

def H(): print("hello")
def BubbleSort(int arr):
    for i in range(0, len(arr)):
        for j in range(i,len(arr)):
            if arr[i]>=arr[j]: 
                arr[i],arr[j] = arr[j],arr[i]
        print(arr)
    return arr

print(BubbleSort(arr))



    
