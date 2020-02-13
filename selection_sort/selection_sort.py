#!/usr/bin/python
import random

def selection_sort_ascending(list):
    for i in range(0, len(list)):
        min_idx = i
        for a in range(i, len(list)):
            if (list[a] < list[min_idx]):
                min_idx = a
        tmp = list[i]
        list[i] = list[min_idx]
        list[min_idx] = tmp
    return list

def selection_sort_descending(list):
    for i in range(0, len(list)):
        max_idx = i
        for a in range(i, len(list)):
            if (list[a] > list[max_idx]):
                max_idx = a
        tmp = list[i]
        list[i] = list[max_idx]
        list[max_idx] = tmp
    return list

list = []
length = int(input("Input length of array "))
order = raw_input("Input order ascending or discending ")
for counter in range(0, length):
    list.append(random.randint(0, 10000))
print("Input array " + str(list))

if order == "ascending":
    print("Sorted array " + str(selection_sort_ascending(list)))
elif order == "descending":
    print("Sorted array " + str(selection_sort_descending(list)))
else:
    print("Wrong order")
    
