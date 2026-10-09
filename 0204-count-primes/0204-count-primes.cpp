class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        //marks all numbers as prime
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;
        //mark 0 and 1 as non prime
        for (int i = 2; i * i < n; i++) {
            //takes only primes 2,3,5,7,.....
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    //marks multiples of primes as non-primes 
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;//counts number of primes
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) count++;
        }

        return count;
    }
};