import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt("datos.dat")

plt.figure()
plt.imshow(data)
plt.xlabel("Temperatura")
plt.ylabel("tiempo")
plt.colorbar(label="temperatura")
plt.savefig("AlexanderSierra_Ej28.png")
