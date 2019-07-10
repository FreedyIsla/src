size=int(input())
k=int(input())
array=list()
sum=0
for i in range(0,size):
    get=int(input())
    array.append(get)
for i in range(0,k):
    sum=sum+array[i]
print(sum)
