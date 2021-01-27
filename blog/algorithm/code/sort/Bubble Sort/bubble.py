def bubble(material):
    length = len(material)

    for i in range(length-1):
        for j in range(0, length-i-1):
            if material[j] > material[j+1]:
                material[j], material[j+1] = material[j+1], material[j]

    material = [5, 3, 2, 4, 1]
    print ("Original order : ")
    for i in range(len(material)):
        print (" % d" % material[i])

    bubble(material)

    print ("After Bubble Sort")
    for i in range(len(material)):
        print (" % d" % material[i])
        