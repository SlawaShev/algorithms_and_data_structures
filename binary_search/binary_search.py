#!/usr/bin/python

def binary_search(input_list, value):
    low = 0
    high = len(input_list) - 1
    
    while low <= high:
        mid = (low + high) / 2
        guess = input_list[int(mid)]
        if guess == value:
            return int(mid)
        elif guess < value:
            low = mid + 1
        else:
            high = mid - 1

    return None

mylist = [1, 2, 5, 6, 8, 10, 123]
num = int(input("Введите число для поиска "))
print(binary_search(mylist, num))
