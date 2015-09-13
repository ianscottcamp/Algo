
int InsertionSort(int array[],int n)
{
int i,j,temp;

  for (i = 1 ; i <= n - 1; i++) {
    j = i;
 
    while ( j > 0 && array[j] < array[j-1]) {
      temp          = array[j];
      array[j]   = array[j-1];
      array[j-1] = temp;
 
      j--;
    }
  }

 
  return 0;
}
