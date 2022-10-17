def BinNums(arr, numToFind):
    m = int(((len(arr)-1)-0)/2)
    if(numToFind == arr[m]): return m 
    elif (numToFind > arr[m]): BinNums(arr[m:(len(arr)-1)], numToFind)
    elif (numToFind < arr[m]): BinNums(arr[0:m], numToFind)

a = [2,3,243,4,43,3,3,232]

print("Found at index: ", BinNums(a, 4))
