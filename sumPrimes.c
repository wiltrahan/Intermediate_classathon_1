#include <cs50.h>
#include <stdio.h>


int sumPrimes(int num);
int getPrimes(int max);


int main(void) {
    printf("%i\n", sumPrimes(10));
}

int sumPrimes(int num) {
    int res = 0;

    // Add the primes
  int primes[10];
  getPrimes(num);
  for (int i = 0; i < sizeof(primes); i++) {
    res += primes[i];
  }
  return res;
}

int getPrimes(int max) {
    int sieve[10];
    int primes[10];
    for(int i = 2; i <= max; i++) {
        if(!sieve[i]) {
            primes[i] = i;
            for (int j = i << 1; j <= max; j += i) {
                sieve[j] = true;
            }
        }

        return primes[i];
    }

    return 0;
}













// function sumPrimes(num) {
//   var res = 0;

//   // Function to get the primes up to max in an array
//   function getPrimes(max) {
//     var sieve = [];
//     var i;
//     var j;
//     var primes = [];
//     for (i = 2; i <= max; ++i) {
//       if (!sieve[i]) {
//         // i has not been marked -- it is prime
//         primes.push(i);
//         for (j = i << 1; j <= max; j += i) {
//           sieve[j] = true;
//         }
//       }
//     }

//     return primes;
//   }

//   // Add the primes
//   var primes = getPrimes(num);
//   for (var p = 0; p < primes.length; p++) {
//     res += primes[p];
//   }

//   return res;
// }