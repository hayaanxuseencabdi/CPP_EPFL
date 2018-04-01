#include <bits/stdc++.h>

class Node {
public:
    Node *next;
    int value;
    Node(int value) {
        this->value = value;
        this->next = nullptr;
    }

};

class LinkedList {
public:
    void add(int value);
    void print_list();
private:
    Node *head = nullptr;
};

void LinkedList::add(int value) {
    if (this->head == nullptr) { head = new Node(value); } 
    else { 
        Node *currentNode = head;
        while (currentNode->next != nullptr) {
            currentNode = currentNode->next;
        }
        currentNode->next = new Node(value);
     }
}

void LinkedList::print_list() {
    Node *currentNode = this->head;
    while (currentNode != nullptr) {
        std::cout << currentNode->value << " ";
        currentNode = currentNode->next;
    }
    std::cout << std::endl;
}


int main(int argc, char *argv[]) {
    LinkedList list = LinkedList();
    // std::srand(std::time(nullptr));
    for (int i = 0; i < 10; i++) {
        int random_num = std::rand() % 11;
        std::cout << random_num << std::endl;
        list.add(random_num);
    }
    std::cout << "List values:\n";
    list.print_list();
    return 0;
}