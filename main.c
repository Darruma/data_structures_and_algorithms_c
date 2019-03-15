#include "include/chained_hash_table.h"
#include "include/linked_list.h"
#include "include/queue.h"
#include "include/bs_tree.h"
#include "include/vector.h"

int main() {
  bs_tree *b = make_bs_tree(4);
  printf("%d \n",b->head->data);
  add_node_bst(b, 5);
  add_node_bst(b, 3);
  add_node_bst(b, 2);
  dfs(b);
  return 0;
}