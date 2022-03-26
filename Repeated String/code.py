#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'repeatedString' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts following parameters:
#  1. STRING s
#  2. LONG_INTEGER n
#

def repeatedString(s, n):
    # Write your code here
    x = s.count('a')
    number_of_string = n//len(s)
    count = x * number_of_string
    x = s[:n%len(s)]
    x = x.count('a')
    return count + x
    # count = 0
    # currCount = 0
    # while True:
    #     if currCount >= n:
    #         x = s[currCount-n-1:]
    #         print(x)
    #         x = x.count('a')
    #         print(x)
    #         count -=x
    #         return (count)
    #     else:
    #         currCount += len(s)
    #         count += x

    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    n = int(input().strip())

    result = repeatedString(s, n)

    fptr.write(str(result) + '\n')

    fptr.close()
