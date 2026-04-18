#include<iostream>


using namespace std;

int main() {
    priority_queue<int> pq;

    pq.push(1);
    pq.push(2);
    pq.push(3);

    cout << "Priority queue elements: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}