#include <iostream>
using namespace std;
struct node
{
  int data;
  node *next;
};
node *createLinkedList(int n) {
    if (n <= 0) {
        return nullptr;
    }
    node *head = nullptr;
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        node *newNode = new node{value, head};
        head = newNode;
    }
    return head;
}
void print(node *head)
{
  while (head != nullptr)
  {
    cout << head->data << endl;
    head = head->next;
  }
}
int main()
{
  int n = 0;
  cin >> n;
  if (n > 0)
  {
    node *head = createLinkedList(n);
    print(head);
  }
  else
  {
    cout << "Invalid n" << endl;
  }
  return 0;
}