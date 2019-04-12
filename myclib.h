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

int *heapSortInt(int *arr);
intNode *minIntHeapConstruct(int *arr);
intNode *maxIntHeapConstruct(int *arr);
float *heapSortFloat(float *arr);
floatNode *minFloatHeapConstruct(float *arr);
floatNode *maxFloatHeapConstruct(float *arr);
char **heapSortString(char **);
stringNode *minStringHeapConstruct(char **arr);
stringNode *maxStringHeapConstruct(char **arr);

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
float deleteFloatFromBST(stringNode *root, char *toDelete);
void printFloatBST(stringNode *root);

#endif
