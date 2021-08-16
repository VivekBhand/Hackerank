#code
def cost(amt):
    n=0
    if (amt>1):
        n+=amt//10
        amt = amt%10
    
        n+=amt//5
        amt = amt%5
    
        n+=amt//2
        amt = amt%2
    elif (amt == 0):
        return 0
    else:
        n+=1
        return 1
    return cost(amt)+n
    
test = int(input())
amt=[]
for i in range(test):
    amt.append(int(input()))

for i in range(test):
    
    #pen=cost(amt[i])
    pen = cost(amt[i])
#     if (d%10 == 0):
#         pen = d//10
#     elif(d%5 == 0):
#         pen = d//10 + (d-d//10)//5
#     elif(d%2 == 0):
#         pen = d//10 + (d-d//10)//5 + (d - d//10-d//5)//2
#     else:
#         pen = d//10 + (d -d//10)//5 + (d - d//10-d//5)//2+1
    print(pen)


    
    
