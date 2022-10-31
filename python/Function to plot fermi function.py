#function to plot fermi function
import matplotlib.pyplot as plt
import numpy as np
from math import exp
import numpy as np
#from scipy.constants import k
from scipy.constants import physical_constants
def fermifunc(E,T):
    Ef = 0.5
    ev = physical_constants['electron volt'][0]
    k = physical_constants['Boltzmann constant'][0]
    ferm = 1/(1+exp((E-Ef)*ev/(k*T)))
    return ferm
    
x = np.linspace(0, 1.2, 500)
temps = list(range(0,401,100))

for i in range(4): 
    y = [fermifunc(j, temps[i]) for j in x] 
    plt.plot(x, y, label = "Temp = {}".format(temps[i]))
    #plt.ylim(0, 0.5) 
plt.legend()
plt.ylabel("f(E)")
plt.xlabel("E[ev]")
plt.xticks(list(np.arange(0,1.21,0.25)))
plt.grid() 
plt.show()
#plt.savefig("fermi.jpg",dpi=1000)