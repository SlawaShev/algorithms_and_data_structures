import random

def quicksort(list):
    if len(list) < 2:
        return list
    else: 
        pivot = list[0]
        less = []
        greater = []
        for i in list[1:]:
            if i <= pivot:
                less.append(i)
            else:
                greater.append(i)

        return quicksort(less) + [pivot] + quicksort(greater)

list = []
length = int(input("Input length of array "))
for counter in range(0, length):
    list.append(random.randint(0, 100000))
sorted_array = quicksort(list)
#print("Initial array is " + str(list))
#print("Sorted array is " + str(sorted_array))
