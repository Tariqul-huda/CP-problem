from datetime import datetime,date,time

def add_months(date,months=0):
    new_month = (date.month-1+months)%12+1
    new_year = date.year+(date.month-1+months)//12
    new_day = min(date.day, [31, 29 if new_year % 4 == 0 and (new_year % 100 != 0 or new_year % 400 == 0) else 28, 
                             31, 30, 31, 30, 31, 31, 30, 31, 30, 31][new_month - 1])
    return datetime(new_year, new_month, new_day)

date_time = datetime(2018,4,1)
n = int(input())
hel = [date_time]
found = False
for x in range(1,3684):
    hel.append(add_months(date_time,26*x))
for x in range(0,len(hel)):
    if(n==hel[x].year):
        print("yes")
        found = True
        break
if(not found):
    print("no")



