#Function to calculate sum of smallest and largest prime in a range of numbers
from sympy import primerange
import numpy as np
def sumPrime(rangeLeft, rangeRight):
    if rangeLeft<0:
        primeList_n = sorted(list(map(lambda x:x * -1,primerange(0,(rangeLeft*-1) + 1))))
        primeList_r = list(primerange(0,rangeRight+1))
        ans = primeList_n[0] + primeList_r[-1]
    else:
        primelist = list(primerange(rangeLeft, rangeRight+1))
        ans = primelist[0] + primelist[-1]
    return ans