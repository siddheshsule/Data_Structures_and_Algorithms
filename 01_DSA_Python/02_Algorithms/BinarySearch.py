# Binary Search Algorithm

def binary_search(myList,target):
    low = 0
    high = len(myList) - 1
    
    while(low <= high):
        mid = int((low + high) / 2)
        if (myList[mid] == target):
            return mid
        elif myList[mid] > target:
            high = mid - 1
        else:
            low = mid + 1
    return None

# Testing the Algorithm
lst1 = [4,5,6,7,8,9,10,11,12,13]
guess = 15



print(binary_search(lst1, guess))           
print(binary_search())            

    