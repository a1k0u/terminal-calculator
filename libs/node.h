#ifndef TERMINAL_CALCULATOR_NODE_H
#define TERMINAL_CALCULATOR_NODE_H

#include "str.h"
#include <complex.h>

typedef struct Node {
    int sign;
    STR* value;
    long double complex number;
} NODE;

typedef struct Nodes {
    NODE* array;
    int length, capacity;
} NODES_ARRAY;

NODE* create_node(STR* var, int sign);
void add_node_array(NODES_ARRAY* nodes_arr, NODE* node);
NODES_ARRAY* insert_node_array(NODES_ARRAY* nodes_arr, NODE* node, int border, int k);
NODES_ARRAY* delete_nodes_array(NODES_ARRAY* nodes_arr);
NODE* get_last_node(NODES_ARRAY* nodes_arr);
NODES_ARRAY* init_nodes_array();
NODE* delete_node(NODE* node);
STR* take_el(NODES_ARRAY* nodes_array, int i);

#endif //TERMINAL_CALCULATOR_NODE_H
