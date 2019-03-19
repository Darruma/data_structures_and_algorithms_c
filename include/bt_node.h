
#ifndef _bt_node_h
#define _bt_node_h

typedef struct bt_node {
    void *data;
    struct bt_node* left;
    struct bt_node* right;
} bt_node;

bt_node* make_bt_node(void *);
#endif
