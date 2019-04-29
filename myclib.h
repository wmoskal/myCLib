#ifndef MYCLIB_H
#define MYCLIB_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct intNode
{
  int key;
  struct intNode *left;
  struct intNode *right;
}intNode;

typedef struct floatNode
{
  float key;
  struct floatNode *left;
  struct floatNode *right;
}floatNode;

typedef struct stringNode
{
  char *key;
  struct stringNode *left;
  struct stringNode *right;
}stringNode;

void heapSortInt(int arr[], int size);
void minIntHeapConstruct(int arr[], int size, int root);
void maxIntHeapConstruct(int arr[], int size, int root);
void heapSortFloat(float *arr);
void minFloatHeapConstruct(float *arr);
void maxFloatHeapConstruct(float *arr);
void heapSortString(char **arr);
void minStringHeapConstruct(char **arr);
void maxStringHeapConstruct(char **arr);
void swap(int *one, int *two);


int intBinarySearch(int *arrSorted);
float floatBinarySearch(float *arrSorted);
char *stringBinarySearch(char **arrSorted);

intNode *binaryIntSearchTreeConstruct(int *arr);
floatNode *binaryFloatSearchTreeConstruct(float *arr);
stringNode *binaryStringSearchTreeConstruct(char **arr);

void insertIntIntoBST(intNode *root, int toInsert);
int deleteIntFromBST(intNode *root, int toDelete);
void printIntBST(intNode *root);

void insertFloatIntoBST(floatNode *root, float toInsert);
float deleteFloatFromBST(floatNode *root, float toDelete);
void printFloatBST(floatNode *root);

void insertStringIntoBST(stringNode *root, char *toInsert);
float deleteStringFromBST(stringNode *root, char *toDelete);
void printStringBST(stringNode *root);

#endif
