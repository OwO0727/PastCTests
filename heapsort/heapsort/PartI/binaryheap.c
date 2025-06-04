#include "binaryheap.h"
#include <assert.h>
#include <string.h>



/*allocate memory in the heap for a node_heap type element and returns a pointer to the new node_heap*/

node_heap *allocate_node_heap(void)
{
    struct node_heap_t *new_node = malloc(sizeof(struct node_heap_t));
    assert (new_node != NULL);
    new_node->key = NULL;
    new_node->position = 0;
    return new_node;
}

/*initialise the heap array elements*/

void initial_heap(node_heap **heap,char* sequence)
{
    for (int i = 0; sequence[i] != NULL; i++){
        heap[i + 1]= allocate_node_heap();
        heap[i + 1]-> key = &sequence[i];
        heap[i + 1]-> position = i + 1;
    }
}

/*print every element of the heap array*/
void print_elem_heap(node_heap **heap, int length)
{
    for(int i = 1; i <= length; i++){
        printf("%c ", heap[i]->key);
    }
    printf("\n");
    for(int i = 0; i < length; i++){
        printf("%d ", i);
    }
}

/* returns the index in the heap array where the parent is allocated for the index passed as argument*/

int parent(int index)
{
   //TO DO
    return 0;
}

/* returns the index in the heap array where the left child is allocated for the index passed as argument*/

int left_child(int index)
{
    //TO DO
    return 0;
}

/* returns the index in the heap array where the right child is allocated for the index passed as argument*/

int right_child(int index)
{
    //TO DO
    return 0;
}

/* exchange node_heap node1 to node_heap node2*/ 

void swap(node_heap *node1, node_heap *node2)
{
    //TO DO
}

/*Moves down the value of the heap[current] so the subtree rooted at index "current" satisfies with the max-heap property*/ 

void max_heapify(node_heap **heap, int current, int heap_size)
{
    //TO DO
}

/*it orders the heap so the ordered heap complies the max-heap property*/

void build_max_heap(node_heap **heap, int heap_size)
{
    //TO DO
}

/*starting from a max-heap ordered array, it moves the largest item from the heap and it into the array position left as the heap shrinks*/

void heapsort(node_heap **heap, int length)
{
   //TO DO
    
}

/*free the memory allocated by a node_heap type element in the heap*/

void free_node(node_heap *node)
{
    //TO DO
}

/*free the memory allocated in the heap array*/

void free_heap(node_heap **heap, int length)
{
    //TO DO
}