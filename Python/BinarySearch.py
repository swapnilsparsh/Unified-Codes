pos = 1

def search(list,n):

    l = 0
    u = len(list) - 1

    while l <= u:
        mid = l + u // 2

        if list[mid] == n:
            globals()['pos'] = mid 
            return True

        else:
            if list[mid]<n:
                l = mid + 1
            else:
                u = mid - 1

    return False


list = [1,3,5,7,9,11,13,15,17,19]
n = 10

if search(list,n):
    print("Found at index: ", pos + 1)
else:
    print("Not found")