#include <iostream>

long long fibonacci_fast (int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1){
    return 1;
  }

  long long fibs[n] {0};
  fibs[0] = 0;
  fibs[1] = 1;

  long long curr = 0;
  long long prev = 1;
  for (int i = 2; i <= n; i++) {
    fibs[i] = fibs[i - 1] + fibs[i - 2];
  }
  
  for (int i = 2; i <= n; i++) {
    curr = prev + curr;
  }

  return fibs[n];
};

int main() {
  std::cout << "Enter a number: " << std::endl;
  int n {0};
  std::cin >> n;
  std::cout << fibonacci_fast(n) << std::endl;

  return 0;
}
