n=int(input("Enter size of array : "))
arr=[]
for i in range(n-1):
    arr.append(int(input()))

for i in range (n):
    if(arr[i]!=i+1):
        print("The missing no. is ", i+1)