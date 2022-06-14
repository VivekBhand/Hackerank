## Python

```python

class Solution:
    def sort012(self,arr,n):
        # code here
        start =0
        end = n -1
        i=0
        while i <= end:
            if arr[i]==0:
                temp =  arr[start]
                arr[start]=arr[i]
                arr[i] = temp
                # swap(arr[start],arr[i])
                # arr[start],arr[i]=arr[i],arr[start]
                start+=1
                i+=1
            elif arr[i]==2:
                temp =  arr[end]
                arr[end]=arr[i]
                arr[i] = temp
                # swap(arr[end],arr[i])
                # arr[end],arr[i]=arr[i],arr[end]
                end-=1
            else:
                i+=1
            
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

# } Driver Code Ends

```

## JAVA
```java
//Initial template for Java

import java.io.*;
import java.util.*;


 // } Driver Code Ends
//User function template for Java

class Solution
{
    public static void sort012(int A[], int n)
    {
        int low = 0;
        int mid = 0;
        int high = n-1;
        while(mid <= high) {
            if(A[mid] == 0) {
                int temp = A[low];
                A[low] = A[mid];
                A[mid] = temp;
                low++;
                mid++;
            }
            else if(A[mid] == 1) {
                mid++;
            }
            else if(A[mid] == 2) {
                 int temp = A [ mid ] ;  
                A [ mid ] = A [ high ] ;  
                A [ high ] = temp ;  
                high--;  
            }
        }
    }
}

// { Driver Code Starts.

class GFG {
    
    public static void main (String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim()); //Inputting the testcases
        while(t-->0){
            int n = Integer.parseInt(br.readLine().trim());
            int arr[] = new int[n];
            String inputLine[] = br.readLine().trim().split(" ");
            for(int i=0; i<n; i++){
                arr[i] = Integer.parseInt(inputLine[i]);
            }
            Solution ob=new Solution();
            ob.sort012(arr, n);
            StringBuffer str = new StringBuffer();
            for(int i=0; i<n; i++){
                str.append(arr[i]+" ");
            }
            System.out.println(str);
        }
    }
}

  // } Driver Code Ends
```
