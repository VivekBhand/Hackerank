* [Python](#python)
* [JAVA](#java)

## Python

```python

def rotate( arr, n):
    a = arr.pop(-1)
    arr.insert(0,a)
    


#{ 
#  Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        rotate(a, n)
        print(*a)

        T -= 1


if __name__ == "__main__":
    main()





    
# } Driver Code Ends
```
## JAVA

```java
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main(String[] args) throws IOException
	{
	        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int t =
            Integer.parseInt(br.readLine().trim()); // Inputting the testcases
        while(t-->0)
        {
            int n = Integer.parseInt(br.readLine().trim());
            int a[] = new int[n];
            // long getAnswer[] = new long[(int)(n)];
            String inputLine[] = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                a[i] = Integer.parseInt(inputLine[i]);
            }
            
            Compute obj = new Compute();
            obj.rotate(a, n);
            
            StringBuilder output = new StringBuilder();
            for(int i=0;i<n;i++)
                output.append(a[i]+" ");
            System.out.println(output);
            
        }
	}
}

// } Driver Code Ends

//User function Template for Java
class Compute {
    
    public void rotate(int arr[], int n)
    {
        // for (int i = 0; i < n; i++) {
        //     System.out.println(arr[i]);
        // }
        // int a = 0;
        // int a = arr.remove(n-1);
        // arr.add(0, a);
        int x = arr[arr.length-1], i;
       for (i = arr.length-1; i > 0; i--)
          arr[i] = arr[i-1];
       arr[0] = x;
        
    }
}

```
