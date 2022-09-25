#include <iostream>
using namespace std;

bool isPerfect(int n) {
    int sum = 0;
    // Returns true if n is perfect, false otherwise.
    for (int i = 1; i < n; i++) {
        if ((n % i) == 0) {
            sum += i;
        }
    } 
    if (sum != n) {
      return false;
    }
    
    return true;
}

int main() {
  for (int i = 1; i < 10000; i++) {
    if (isPerfect(i)) {
      cout << i << " is perfect! \n";
    }
  }
}