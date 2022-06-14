* [Python](#python)
* [JAVA](#java)

##### or we can use quick sort here also
```python
#code
class Solution:
    def sort012(self,arr,n):
        # code here
        i = 0
        start = 0
        end = n-1
        while i <= end:
            if arr[i] < 0:
                arr[i], arr[start] = arr[start], arr[i]
                i +=1 
                start+=1
            elif arr[i] > 0:
                arr[i], arr[end] = arr[end], arr[i]
                end-=1
            else:
                i +=1
            
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        n=int(input())
        arr=[int(x) for x in input().strip().split()]
        ob=Solution()
        ob.sort012(arr,n)
        for i in arr:
            print(i, end=' ')
        print()
```
