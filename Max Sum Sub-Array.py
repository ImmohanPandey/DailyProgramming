#Write a C++ program to find the maximum sum of a subarray in a given integer array. You are given an array of integers, and your task is to find the contiguous subarray (i.e., a subarray without skipping elements) with the largest sum.

n=int(input("Enter the size of array : "))
arr=[]
for i in range(n):
    arr.append(int(input("Enter the elements of array : ")))
for i in range(n):
    k=i
    j=i+1
    for j in range(n):
        b=arr[i]+arr[j]
        if(b<arr[j]):
            b=[]
            break
        else:
            b=arr[i]+arr[j]
        k+=2
    print(b)
    





#if(max(arr)>sum(arr)):
  #  print(max(arr))
#else:
   # print(sum(arr))


            