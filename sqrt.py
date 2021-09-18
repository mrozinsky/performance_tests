# author: mrozinsky (Michal Jakub Mrozinski)
# 18.09.2021 

# Results:
# Duron 750Mhz - 24.5478720665 seconds 

import time
import math

start = time.time()
for i in range(1, 10000001):
	tmp = math.sqrt(i)

end = time.time()

print("******************");
print("SQRT - Python Version");
print("Program that calculates square roots of numbers from 1 to 10000000 (10 millions)");
print("Execution time: \n" + str(end - start)) 
print("******************");
