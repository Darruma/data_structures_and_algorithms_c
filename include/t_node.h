#ifndef _t_node_h
#define _t_node_h

typedef struct t_node {
    void *data;
    struct t_node *children;
    int child_amount;
    int max_child_amount;
} t_node;

t_node* make_t_node(void *);
#endif
