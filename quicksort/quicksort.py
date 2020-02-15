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

array = [1, 6, 3, 8, 33, 1, 4, 2, 854, 3, 4, 44]
print(quicksort(array))
