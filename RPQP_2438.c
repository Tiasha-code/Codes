class Solution {
    int mod = 1_000_000_007;

    public int[] productQueries(int n, int[][] queries) {
        int m = Integer.bitCount(n), k = queries.length;
        long[] arr = new long[m + 1], inv = new long[m + 1];
        arr[0] = 1;
        inv[0] = fpow(1, mod - 2);
        for (int i = 0, j = 0; i < m; i++, j++) {
            while ((n >> j & 1) == 0) j++;
            arr[i + 1] = (1 << j) * arr[i] % mod;
            inv[i + 1] = fpow(arr[i + 1], mod - 2);
        }
        int[] ans = new int[k];
        for (int i = 0; i < k; i++) {
            ans[i] = (int) (arr[queries[i][1] + 1] * inv[queries[i][0]] % mod);
        }
        return ans;
    }

    private long fpow(long x, int p) {
        long ans = 1;
        for (; 0 < p; p >>= 1) {
            if (p % 2 == 1) ans = ans * x % mod;
            x = x * x % mod;
        }
        return ans;
    }
}