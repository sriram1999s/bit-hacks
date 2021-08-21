#include <stdio.h>

/* /a.out  25.93s user 0.03s system 99% cpu 25.965 total */
void swap(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void swap_bit(int *a, int *b)
{
  *a = *a ^ *b;
  *b = *a ^ *b;
  *a = *a ^ *b;
}

void bubble_sort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[i]) {
        swap_bit(&arr[i], &arr[j]);
      }
    }
  }
}

int main()
{
  int n = 100000;
  int arr[n];
  for (int i = 100000; i > 0; i--) {
    arr[n - i] = i;
  }
  bubble_sort(arr, n);
}
