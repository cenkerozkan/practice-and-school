# Problem:

    # Write an algorithm and draw a flowchart to input N and N numbers. Suppose that the
    # numbers are in the range -5000 <= x <= 5000. This algorithm/flowchart should find and
    # output the largest of N numbers.


import numpy as np


def function():

    array = (list(np.random.randint(-5000, 5000, 10000)))
    iMax = array[0]
    iCounter = 1

    while iCounter != len(array):
        if array[iCounter] > iMax:
            iMax = array[iCounter]
            iCounter = iCounter + 1

        else:
            iCounter = iCounter + 1

    print(array)
    print(iMax)



if(__name__ == '__main__'):
    function()