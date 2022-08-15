#include <stdio.h>
#include <stdlib.h>

int main() {

  int array[6];

  for (int i = 0; i < 6; i++) {

    printf("> Number %d: ", i + 1);
    scanf("%d", &array[i]);
  }

  printf("\n");

  for (int i = 6; i > 0; i--) {
    printf("Number %d: %d\n", i, array[i - 1]);
  }
}
