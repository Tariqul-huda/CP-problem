from datetime import time,timedelta
import sys

for line in sys.stdin:
    line = line.strip()
    y = 0
    cc =0
    for x in range(len(line)-1,-1,-1):
        if(line[x].isspace()):
            cc = cc+1
            if(cc==2):
                y = x
                break
    
    stime1 = [line[y+1:].split()]
    stime2 = [stime1.split(':')]
    print(stime2)
        
    