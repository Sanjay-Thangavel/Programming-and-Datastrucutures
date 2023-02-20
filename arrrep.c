#include <stdio.h>
void findDuplicates(int arr[], int n)
{
  // create another array of similar size
  int temp[n];
  int count = 0;

  // traverse original array
  for(int i=0; i<n; i++) {

    int element = arr[i];
    int flag = 0;

    // check current element is already
    // checked or not
    for(int j=0; j<count; j++) {
      if(temp[j] == element) {
        flag = 1;
        break;
      }
    }

    // if already exist then don't check
    if(flag) {
      continue;
    }

    // check occurrence of element
    for(int j=i+1; j<n; j++) {
      if(arr[j] == element) {
        temp[count++] = element;
        // found, therefore break
        break;
      }
    }
  }

  // count repeated elements
  printf("Total Repeated elements = %d\n", count);
  // display repeated elements
  printf("Repeated elements are: ");
  for (int i = 0; i < count; i++) {
    printf("%d ",temp[i]);
  }
}

// main function
int main()
{
  // original array
  int arr[] = {50, 20, 10, 40, 20, 10, 10, 60, 30, 70};

  // find array size
  int size = sizeof(arr)/sizeof(arr[0]);

  // find duplicates
  findDuplicates(arr, size);

  return 0;
}
