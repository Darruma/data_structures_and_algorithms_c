#ifndef _t_node_h
#define _t_node_h

typedef struct t_node {
    void *data;
    struct t_node *children;
    int child_amount;
    int max_child_amount;
} t_node;

t_node* make_t_node(void*);
t_node* make_bs_node(void*);

void add_child(t_node*,void*);
void set_child(t_node*,int,void*);

t_node* get_left_node(t_node *);
t_node* get_right_node(t_node*);

void set_left_node(t_node *,t_node *);
void set_right_node(t_node *,t_node *);
#endif
