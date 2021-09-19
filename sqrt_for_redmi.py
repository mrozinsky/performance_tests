# author: mrozinsky (Michal Jakub Mrozinski)
# 18.09.2021 

# Results:
# Duron 750Mhz - 24.5478720665 seconds 
# Intel Core i7-3770 3.40 GHz (using only one thread)- 1.920609712600708 seconds

import time
import math

start = time.time()
for j in range (1, 11):
	for i in range(1, 100000001):
		tmp = math.sqrt(i)

end = time.time()

print("******************");
print("SQRT - Python Version");
print("Program that calculates square roots of numbers from 1 to 1000000000 (1000 millions)");
print("Execution time: \n" + str(end - start)) 
print("******************");
