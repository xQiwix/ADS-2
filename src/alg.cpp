// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double value1 = value;
  for (uint16_t i = 2; i <= n; ++i) {
    value *= value1;
  }
  return value;
}

uint64_t fact(uint16_t n) {
    if (n == 1) {
    return 1;
  } else {
    return fact(n-1) * n;
  }
}

double calcItem(double x, uint16_t n) {
   return (pown(x, n)) / fact(n);
}

double expn(double x, uint16_t count) {
    double sum = 1;
    for (uint64_t i = 1; i <= count; i++) {
        summ += pown(x, i) / fact(i);
    }
    return summ;

}

double sinn(double x, uint16_t count) {
    double res = 0;
    for (uint16_t i = 0; i < count; i++) {
        res += pown(x, 2 * i + 1) * (pown(-1, i) / fact(2 * i + 1));
    }
    return res;
}

double cosn(double x, uint16_t count) {
  double result = 0;
  int m = 1;
  for (uint16_t i = 0; i < count * 2; i += 2) {
    result += m * calcItem(x, i);
    m *= -1;
  }
  return res;
}
