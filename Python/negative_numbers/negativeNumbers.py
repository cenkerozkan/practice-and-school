# Problem:

    # Write an algorithm and draw a flowchart that will input 100 numbers
    # and will find the number of positive numbers.


import numpy as np
def function():

    # To generate 100 random numbers
    array = (list(np.random.randint(-100,100,100)))
    swapArray = [] # To hold each negative number found.
    iCounter = 0
    iNegativeCounter = 0

    while iCounter != 100:
        if array[iCounter] < 0:
            iNegativeCounter = iNegativeCounter + 1
            swapArray.append(array[iCounter])
            iCounter = iCounter + 1

        else:
            iCounter = iCounter + 1

    print(array)
    print("\n")
    print(swapArray)
    print("\n")
    print(iCounter)


if (__name__ == '__main__'):
    function()
