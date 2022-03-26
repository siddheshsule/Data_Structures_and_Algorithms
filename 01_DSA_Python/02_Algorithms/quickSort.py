# The QuickSort Algorithm 

def quickSort(arr):
    if len(arr) < 2:
        return arr
    else:
        pivot = arr[0]
        less = [i for i in arr[1:] if i <= pivot]
        greater = [i for i in arr[1:] if i > pivot]
        return quickSort(less) + [pivot] + quickSort(greater)


print(quickSort([4,78,32,9,53,12,45,963,657,444,12544,789,2,1,0,3,68,98,100]))    
