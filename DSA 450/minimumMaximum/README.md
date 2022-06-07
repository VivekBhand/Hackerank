## java 


```java
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;

class pair  
{  
    long first, second;  
    public pair(long first, long second)  
    {  
        this.first = first;  
        this.second = second;  
    }  
}

class GFG {
	public static void main(String[] args) throws IOException
	{
	        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int t =
            Integer.parseInt(br.readLine().trim()); // Inputting the testcases
        while(t-->0)
        {
            long n = Long.parseLong(br.readLine().trim());
            long a[] = new long[(int)(n)];
            // long getAnswer[] = new long[(int)(n)];
            String inputLine[] = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                a[i] = Long.parseLong(inputLine[i]);
            }
            
            Compute obj = new Compute();
            pair product = obj.getMinMax(a, n); 
            System.out.println(product.first+" "+product.second);
            
        }
	}
}

// } Driver Code Ends


//User function Template for Java

/*
 class pair  
{  
    long first, second;  
    public pair(long first, long second)  
    {  
        this.first = first;  
        this.second = second;  
    }  
} */

class Compute 
{
    static pair getMinMax(long a[], long n)  
    {
        int n1 = (int)n;
        long temp;
        for (int i =0; i < n1-1; i++ ) {
            if (a[i] > a[i+1]) {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        
        for (int i = n1-1; i > 0; i-- ) {
            if (a[i] < a[i-1]) {
                temp = a[i];
                a[i] = a[i-1];
                a[i-1] = temp;
            }
        }
        pair myObj = new pair(a[0],a[n1-1]);
        return myObj;
    }
}

       
 ```
 
 ## Python

```python
def getMinMax( a, n):
    if n < 2:
        return a[0],a[0]
    for i in range(n-1):
        if a[i]>a[i+1]:
            temp=a[i]
            a[i]=a[i+1]
            a[i+1]=temp
    max = a[n-1]
    for i in range(n-1,0,-1):
        if a[i]<a[i-1]:
            temp=a[i]
            a[i]=a[i-1]
            a[i-1]=temp
    min = a[0]
    return min,max

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        
        product = getMinMax(a, n)
        print(product[0], end=" ")
        print(product[1])

        T -= 1
if __name__ == "__main__":
    main()
    
 ```
 
