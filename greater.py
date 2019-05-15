a=str(input())
b=a.split()
if(int(b[0])>int(b[1]) and int(b[0])>int(b[2])):
    print(int(b[0]))
elif(int(b[1])>int(b[2])):
    print(int(b[1]))
else:
    print(int(b[2]))
