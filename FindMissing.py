

n=int(input("Enter size of array : "))
arr=[]
for i in range(n-1):
    arr.append(int(input()))
s=n*(n+1)/2
print(int(s-sum(arr))) 

#1235=11
#12345=15
