# the Selection Sort Algorithm

def findSmallest(arr):
    smallest = arr[0]
    smallest_indx = 0    
    for i in range(1, len(arr)):
        if arr[i] < smallest:
            smallest = arr[i]
            smallest_indx = i
    return smallest_indx
    

def selectionSort(arr):
    newArr = []
    for i in range(len(arr)):
        smallest = findSmallest(arr)
        newArr.append(arr.pop(smallest))
    return newArr

print(selectionSort([5,3,9,7,4,2,12]))
        