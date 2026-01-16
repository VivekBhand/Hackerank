// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?


class Solution {
    // Space Optimization
    // two variables instead of a whole table
    public int climbStairs(int n) {
        if ( n == 1 || n == 0) {
            return 1;
        }
        int curr, prev;
        curr = prev = 1;
        for (int i = 2; i < n + 1; i++) {
            int ways = curr + prev;
            prev = curr;
            curr = ways;
        }
        return curr;
    }
}

class Solution {

    // Tabulation
    public int climbStairs(int n) {
        if ( n == 0 || n == 1) {
            return 1;
        }
        int[] dp = new int[n+1];
        dp[0] = dp[1] = 1;

        for (int i = 2; i < n+1; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
}


class Solution {
    public int climbStairs(int n) {
       Map<Integer,Integer> map1 = new HashMap<>();
       return climbStairs(n, map1);
    }

    private int climbStairs(int n, Map<Integer, Integer> map) {
        if(n==1 || n == 0) {
            return 1;
        }
        if (!map.containsKey(n)) {
            map.put(n, climbStairs(n-1,map)+climbStairs(n-2,map));

        }
        return map.get(n);
    }
}

class Solution {
    public int climbStairs(int n) {
       if (n == 0 || n == 1) 
        return 1;
        else return climbStairs(n-1) + climbStairs(n-2);
    }
}