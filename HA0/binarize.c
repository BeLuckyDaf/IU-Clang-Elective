#include "binarize.h"

void binarize_u(unsigned long x){
    char r[36];
    r[35] = '\0';
    for (int i = 34; i >= 0; i--) {
      if (i != 0 && (i == 8 || i == 17 || i == 26)) {
        r[i] = ' ';
        continue;
      }

      if (x == 0) r[i] = '0';
      else r[i] = x % 2 + '0';
      x = x >> 1;
    }
    printf("%s\n", r);
}

void binarize_s(signed long y){
    if (y < 0) {
      y = -y - 1;
      char r[36];
      r[35] = '\0';
      for (int i = 34; i >= 0; i--) {
        if (i != 0 && (i == 8 || i == 17 || i == 26)) {
          r[i] = ' ';
          continue;
        }

        if (y == 0) r[i] = '0';
        else r[i] = (y + 1) % 2 + '0';
        y = y >> 1;
      }
      r[0] = '1';
      printf("%s\n", r);
    }
    else binarize_u(y);
}