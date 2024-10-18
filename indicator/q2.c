//cube of string using function
#include <stdio.h>
void Cubes(int *arr, int rows, int cols)
{
	int i;
  for ( i = 0; i < rows * cols; i++)
  {
    *(arr + i) = *(arr + i)**(arr + i)**(arr + i);
  }
}

int main()
{
  int i,j,size;
  printf("Enter array's size: ");
  scanf("%d", &size);

  int arr[size][size];

  printf("Enter array elements:\n");
  for ( i = 0; i < size; i++)
  {
    for ( j = 0; j < size; j++)
    {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
  Cubes(&arr[0][0], size, size);
  printf("Cubes of all elements:\n");
  for (i = 0; i < size; i++)
  {
    for ( j = 0; j < size; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}
