#include <iostream>

int main(void)
{
  int angka[] = {0, 0, 1};

  for (size_t i = 0; i < std::size(angka); i++)
  {
    printf("%d", angka[i]);
  }

  std::cout << sizeof(int);
  return 0;
}