#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;


int main() {
    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);

    dq.push_front(3);
    dq.push_front(4);

    cout << "Deque elements: ";
    for (int i : dq) {
        cout << i << " ";
    }


    
}