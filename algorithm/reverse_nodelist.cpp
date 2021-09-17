#include <iostream>
#include <sstream>

struct Node {
    Node* next;
    int val;
};

void ShowNodeList(Node* head) {
    Node* cur = head;
    std::ostringstream os;
    while(cur) {
        os << cur->val << " ";
        cur = cur->next;
    }

    std::cout << os.str() << std::endl;
}

Node* Reverse(Node* head) {
    Node* cur = head;
    Node* pre = NULL;

    while(cur) {
        Node* tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }
    return pre;
}

int main(int argc, char** argv) {
    Node* head = NULL;
    Node node1, node2, node3, node4, node5, node6;
    node1.next = &node2;
    node1.val = 1;
    node2.next = &node3;
    node2.val = 2;
    node3.next = &node4;
    node3.val = 3;
    node4.next = &node5;
    node4.val = 4;
    node5.next = &node6;
    node5.val = 5;
    node6.next = NULL;
    node6.val = 6;

    head = &node1;

    // show
    // before reverse
    std::cout << "the node list before reverse:" << std::endl;
    ShowNodeList(head);

    Node* new_head = Reverse(head);

    std::cout << "the node list after reverse:" << std::endl;
    ShowNodeList(new_head);
    std::cout << "done" << std::endl;
    return 0;
}
