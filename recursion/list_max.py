def list_max(list):
    if len(list) == 1:
        return list[0]
    else:
        m = list_max(list[1:])
        return m if m > list[0] else list[0]

a = [1, 4, 2, 3, 6, 1, 4, 3, 8, 3]
print(list_max(a))
