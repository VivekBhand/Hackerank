#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'checkMagazine' function below.
#
# The function accepts following parameters:
#  1. STRING_ARRAY magazine
#  2. STRING_ARRAY note
#

def checkMagazine(magazine, note):
    magDict = {}
    noteDict={}
    for i in magazine:
        if i in magDict:
            magDict[i]+=1
        else:
            magDict[i]=1
    for i in note:
        if i in noteDict:
            noteDict[i]+=1
        else:
            noteDict[i]=1
    for i in noteDict:
        if i in magDict:
            if noteDict[i]>magDict[i]:
                print('No')
                return 0
            else:
                flag = 1
        else:
            print('No')
            return 0
    print('Yes')
            
                
    # Write your code here

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    m = int(first_multiple_input[0])

    n = int(first_multiple_input[1])

    magazine = input().rstrip().split()

    note = input().rstrip().split()

    checkMagazine(magazine, note)
