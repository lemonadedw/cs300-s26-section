#include <stdlib.h>

typedef struct ListNode {
  struct ListNode* next;
  int value;
} ListNode;

ListNode* createHead(int value) {
  ListNode node;
  node.value = value;
  node.next = NULL;
  return &node;
}

int main() {
  // Part a
  int x = 10;
  int* y = &x;

  // Part b
  ListNode* a = malloc(sizeof(ListNode));
  (*a).value = 20;
  (*a).next = NULL;

  // Part c
  ListNode* b = malloc(sizeof(ListNode));
  (*b).value = 30;
  (*b).next = NULL;
  (*a).next = b;

  // Bonus: what's the bug?
  ListNode* head = createHead(40);
  (*head).next = a;

  // Cleanup
  free(head);
  free(a);
  free(b);

  return 0;
}
