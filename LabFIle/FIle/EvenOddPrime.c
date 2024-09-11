#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isEven(int n) {
  return n % 2 == 0;
}
int isOdd(int n) {
  return n % 2 != 0;
}
int isPrime(int n) {
  if (n <= 1) {
    return 0;
  }
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}
void inputAndWriteNumbers() {
  FILE *input, *even, *odd, *prime;
  int num;
  input = fopen("input.txt", "r");
  if (input == NULL) {
    printf("Cannot open input file.\n");
    exit(1);
  }
  even = fopen("even.txt", "w");
  odd = fopen("odd.txt", "w");
  prime = fopen("prime.txt", "w");
  if (even == NULL || odd == NULL || prime == NULL) {
    printf("Cannot open output files.\n");
    exit(1);
  }
  while (fscanf(input, "%d", &num) == 1) {
    if (isEven(num)) {
      fprintf(even, "%d\n", num);
    }
    if (isOdd(num)) {
      fprintf(odd, "%d\n", num);
    }
    if (isPrime(num)) {
      fprintf(prime, "%d\n", num);
    }
  }
  fclose(input);
  fclose(even);
  fclose(odd);
  fclose(prime);
}
int main() {
  inputAndWriteNumbers();
  return 0;
}