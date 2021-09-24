# author: mrozinsky (Michal Jakub Mrozinski)
# 18.09.2021 

# Results:
# Duron 750Mhz - 11.7300488949 seconds
# Intel® Core™ i7-3770 3.40 GHz (using only one thread)- 0.9770002365112305 seconds
# Intel Core 2 Duo E4500 2.20 GHz (using only one thread) - 1.8750531673431396 seconds
# Intel(R) Core(TM) Duo T2400 1.83GHz (using only one thread) - 2.963125467300415 seconds 

import time
import math

start = time.time()
tmp = 0 
for i in range(1, 10000001):
	tmp = tmp + 1

end = time.time()

print("******************");
print("INC - Python Version");
print("Program that increment one variable 10000000 times (10 millions)\n");
print("Execution time: \n" + str(end - start)) 
print("******************");

