def swap(after, i):
    temp = after[i]
    after[i] = after[i+1]
    after[i+1] = temp
 
def recursivebubblesort(after, length):
    for i in range(length - 1):
        if after[i] > after[i + 1]:
            swap(after, i)
    if length > 1:
        recursivebubblesort(after, length-1)

if __name__ == '__main__':
    original = [ 5, 3, 2, 4, 1 ]
    after = [ 5, 3, 2, 4, 1 ]
    length = len(after)
    recursivebubblesort(after, length)
    print ("Original order : ")
    print(original)
    print ("After Recursive Bubble Sort")
    print(after)