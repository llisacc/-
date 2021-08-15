#!/usr/bin/python3

str = "人易科技:上 機 測 驗 - 演算法"
half = ":"
full = "："

tran = str.maketrans(half, full)
str = str.translate(tran)
print("1."+str)
str = str[:6:1]+str[7:8:1]+str[9:10:1]+str[11:12:1]+str[12:len(str):1]
print ("2."+str)
str = str[5:10:1]
print ("3."+str)

