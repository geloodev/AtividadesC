#include <stdio.h>
#include <stdlib.h>

int main() {

  int x = 5, array[x];
  float average = 0.0;

  for (int i = 0; i < x; i++) {

    printf("> Number %d: ", i + 1);
    scanf("%d", &array[i]);
    average += array[i];
  }
  printf("\n");

  average = average / 5.0;

  for (int i = 0; i < x; i++) {
    printf("Number %d: %d\n", i + 1, array[i]);
  }
  printf("Average: %.2f\n", average);
}
