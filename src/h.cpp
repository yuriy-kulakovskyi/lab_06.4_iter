#include "../include/main.h"
#include <cmath>
#include <iostream>

int FindTheLargest(int* a, int n) {
  int max;

  for (int i = 0; i < n; i++) {
    if (a[i + 1]) {
      if (abs(a[i]) < abs(a[i + 1])) {
        max = a[i + 1];
      } else {
        max = a[i];
      }
    }
  }

  return max;
}

int Sum(int* a, int n) {
  int sum = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
      for (int j = i + 1; j < n; j++) {
        if (a[j] > 0) {
          for (int k = i + 1; k < j; k++) {
            sum += a[k];
          }
          break;
        }
      }
    }
  }

  return sum;
}

void Sort(int* a, int n) {
  int* modified = new int[n];
  int nonZeroIndex = 0;

  for (int i = 0; i < n; ++i) {
    if (a[i] != 0) {
      modified[nonZeroIndex++] = a[i];
    }
  }

  while (nonZeroIndex < n) {
    modified[nonZeroIndex++] = 0;
  }

  for (int i = 0; i < n; ++i) {
    a[i] = modified[i];
  }

  delete[] modified;
}