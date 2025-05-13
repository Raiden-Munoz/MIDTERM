#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {
    int x, sum = 0;
    node* n = new node();
    node* t = n;
    node* h = n;

    // Input and node creation
    for (x = 1; x <= 5; x++) {
        cout << "Enter data: ";
        cin >> n->data;
        sum += n->data;

        if (x < 5) { // Only create new node if more inputs expected
            n->next = new node();
            n = n->next;
            t = n;
        } else {
            n->next = nullptr; // last node's next should be null
        }
    }

    // Output the list
    for (x = 1; x <= 5; x++) {
        cout << h->data << endl;
        h = h->next;
    }

    cout << "\nSum = " << sum << endl;

    return 0;
}
