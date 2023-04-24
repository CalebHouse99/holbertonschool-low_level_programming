#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

typedef struct skiplist_s
{
  int n;
  size_t index;
  struct skiplist_s *next;
  struct skiplist_s *express;
} skiplist_t;

skiplist_t *linear_skip(skiplist_t *list, int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int advanced_binary_helper(int *array, int value, int start, int end);
int advanced_binary(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
