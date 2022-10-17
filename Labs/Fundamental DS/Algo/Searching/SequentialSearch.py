def SeqSearch(arr, toSearch): 
    for i in range(len(arr)): 
        if arr[i] == toSearch: 
            return "found at index: ", i
    return "not found", -1

a = [2,3,243,4,43,3,3,232]

print(SeqSearch(a, 4))

