def list_sum(list):
    if not list:
        return 0
    return list.pop() + list_sum(list)
    

a = [4, 10, 1, 2, 3]
print(list_sum(a))

