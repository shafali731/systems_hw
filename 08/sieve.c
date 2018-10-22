#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "sieve.h"

int sieve(int targetPrime) {
  int length  = targetPrime * (int)log((double)targetPrime) * 1.5;
  char * arr = (char *) malloc(length);

for (int current = 2; current < length; current++) {
    for (int a = current *2; a < length; a ++){
      if (a%current==0)
        arr[a] = 'C';
    }
  }

  int ctr = 0;
  int curr = 2;
  int result;

  while(ctr != targetPrime){
    if (arr[curr] != 'C'){
      ctr += 1;
      result = curr;
    }
    curr++;
  }
  return result;
}


// int main() {
//    // printf("prime n = %d: %d\n", 200, sieve(200));
//    // printf("prime n = %d: %d\n", 1000, sieve(1000));
//    // printf("prime n = %d: %d\n", 1000000, sieve(1000000));
//   //printf("10th prime (should be 29): %d\n",sieve(10));
//   //printf("25th prime (should be 97): %d\n",sieve(25));
//   //printf("1000th prime (should be 7919): %d\n",sieve(1000));
//   printf("10000th prime (should be 104729): %d\n",sieve(100000));
//   return 0;
// }
