import numpy as np
import matplotlib.pyplot as plt

data=np.genfromtxt("tray.dat")

plt.figure()
plt.plot(data[:,2],data[:,0])
plt.xlabel("t")
plt.ylabel("x")
plt.savefig("pos.png")
plt.clf()


plt.plot(data[:,2],data[:,1])
plt.xlabel("t")
plt.ylabel("v")
plt.savefig("vel.png")
plt.clf()

plt.plot(data[:,0],data[:,1])
plt.xlabel("t")
plt.ylabel("v")
plt.savefig("phase.png")
plt.clf()
