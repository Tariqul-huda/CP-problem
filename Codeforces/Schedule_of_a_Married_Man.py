from datetime import datetime,time
t = int(input())
c =     1
while t:
    temp = input()
    office_s_h,office_s_m,office_e_h,office_e_m = int(temp[:2]),int(temp[3:5]),int(temp[len(temp)-5:len(temp)-3]),int(temp[len(temp)-2:])
    temp = input()
    biye_s_h,biye_s_m,biye_e_h,biye_e_m = int(temp[:2]),int(temp[3:5]),int(temp[len(temp)-5:len(temp)-3]),int(temp[len(temp)-2:])

    office_time_start = time(office_s_h,office_s_m)
    office_time_end = time(office_e_h,office_e_m)
    biye_time_start = time(biye_s_h,biye_s_m)
    biye_time_end = time(biye_e_h,biye_e_m)
    office_time_start,biye_time_start = biye_time_start,office_time_start
    office_time_end,biye_time_end = biye_time_end,office_time_end

    if((office_time_start>=biye_time_start and office_time_start<=biye_time_end) or (office_time_end>=biye_time_start and office_time_end<=biye_time_end) or (biye_time_start<=office_time_start and biye_time_end>=office_time_start and office_time_end>=biye_time_end)):
        print("Case {0}: Mrs Meeting".format(c))
    else:
        print("Case {0}: Hits Meeting".format(c))
    t = t-1
    c = c+1


