#ifndef LINKED_LIST_TOOLS_H
#define LINKED_LIST_TOOLS_H

#include "node.h"

int cyclic_list_size(link x);

link reverse(link x);

void print_list(link x);

link create_list(int N);

link create_random_list_with_head(int N);

void max_to_end(link x);


void reverse_test();

void max_to_end_test();

#endif
