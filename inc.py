# author: mrozinsky (Michal Jakub Mrozinski)
# 18.09.2021 

import time
import math

start = time.time()
tmp = 0 
for i in range(1, 10000001):
	tmp = tmp + 1

end = time.time()

print("******************");
print("INC - Python Version");
print("Program that increment one variable 10000000 times (10 millions)");
print("Execution time: \n" + str(end - start)) 
print("******************");

