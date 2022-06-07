* [Python](#python)
* [JAVA](#java)

## Python

```python

def reverseWord(s):
    #your code here
    
    if len(s) < 2:
        return s
    s=[i for i in s]
    s.reverse()
    a=''.join(s)
    return a
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    while(t>0):
        s = input()
        print(reverseWord(s))
        t = t-1

# } Driver Code Ends
```

## JAVA

```java
//Initial Template for Java

import java.util.*;
import java.io.*;
import java.lang.*;

class Driver
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        
        while(t-- >0)
        {
            String str = read.readLine();
            System.out.println(new Reverse().reverseWord(str));
        }
    }
}// } Driver Code Ends


//User function Template for Java


class Reverse
{
    // Complete the function
    // str: input string
    public static String reverseWord(String str)
    {
        // Reverse the string str
        if (str.length() < 2) {
            return str;
        }
        String z="";
        for (int i = str.length(); i > 0; i--) {
        // 	System.out.println(str.charAt(i-1));
            z = z + str.charAt(i-1);
        }
        // System.out.println(z);
        return z;
    }
}
```
