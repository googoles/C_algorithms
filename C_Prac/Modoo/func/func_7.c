#include <stdio.h>
int swap(int *a, int *b);  // �� ���� �ٷ� �Լ��� ����
int main() {
  int i, j;
  i = 3;
  j = 5;
  printf("SWAP ���� : i : %d, j : %d \n", i, j);
  swap(&i, &j);
  printf("SWAP ���� : i : %d, j : %d \n", i, j);

  return 0;
}
int swap(int *a, int *b) {
  int temp = *a;

  *a = *b;
  *b = temp;

  return 0;
}