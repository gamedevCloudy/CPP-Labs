arey = [5,3,23,34,4]
def SelectionSort(arr): 
   for i in range(len(arr)-1): 
    for j in range(i, len(arr)): 
        print(arr[i], "", arr[j])
        if(arr[i]>arr[j]):
            arr[j],arr[i]=arr[i],arr[j]
    print(arey)
                
print(arey)
SelectionSort(arey)
# print(arey)

