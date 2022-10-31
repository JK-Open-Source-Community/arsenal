#unaffected character list

import numpy as np
def unaffectedChar(dataStream):
    strlist = list(map(ord,dataStream))
    strlist_rev = strlist[::-1]
    counts = list(np.subtract(np.array(strlist),np.array(strlist_rev))).count(0)
    return counts