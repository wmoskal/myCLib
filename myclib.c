#include "myclib.h"

//driver code used for testing
int main(int argc, char *argv[])
{
  int arrI[100];
  float arrF[100];
  char *arrS[100];
  int arr[] = {12, 11, 13, 5, 6, 7};


  for(int i = 0; i < 100; i++)
  {
    arrI[i] = rand() % 100;
    arrF[i] = (float)(rand() % 100);
    printf("%d %.2f\n", arrI[i], arrF[i]);
  }
  heapSortInt(arrI, 100);
  for(int i = 0; i < 100; i++)
  {
    printf("Sorted: %d\n", arrI[i]);
  }

  return 0;
}

void maxIntHeapConstruct(int arr[], int size, int root)
{
  int largest = root;
  //children of the root
  int left = (2 * root) + 1;
  int right = (2 * root) + 2;
  //if the left child is larger than the root
  if(left < size && arr[left] > arr[largest])
  {
    largest = left;
  }
  if(right < size && arr[right] > arr[largest])
  {
    largest = right;
  }
  if(largest != root)
  {
    //if the largest element is not the the root, then swap the elements
    swap(&(arr[root]), &(arr[largest]));
    //recursilvely downheap the array
    maxIntHeapConstruct(arr, size, largest);
  }
}

/*void minIntHeapConstruct(int arr[], int size, int root)
{
  int smallest = root;
  //children of the root
  int left = (2 * root) + 1;
  int right = (2 * root) + 2;
  //if the left child is smaller than the root
  if(left > size && arr[left] < arr[smallest])
  {
    smallest = left;
  }
  if(right > size && arr[right] < arr[smallest])
  {
    smallest = right;
  }
  if(smallest != root)
  {
    //if the smallest element is not the the root, then swap the elements
    swap(&(arr[root]), &(arr[smallest]));
    //recursilvely downheap the array
    minIntHeapConstruct(arr, size, smallest);
  }
}*/

void swap(int *one, int *two)
{
  int temp;
  temp = *one;
  *one = *two;
  *two = temp;
}

void heapSortInt(int arr[], int size)
{
  for(int i = (size / 2) - 1; i >= 0; i--)
  {
    //consturct the heap
    maxIntHeapConstruct(arr, size, i);
  }
  for(int i = size - 1; i >= 0; i--)
  {
    //move the largest elemet to the end of the array (sorted Section)
    swap(&(arr[0]), &(arr[i]));

    //reconstruct the heap, to mantain the heap property
    maxIntHeapConstruct(arr, i, 0);
  }
}
