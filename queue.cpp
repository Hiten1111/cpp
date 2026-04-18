#include<iostream>
#include<queue>


using namespace std;


int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Front element after pop: " << q.front() << endl;


    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
    cout << "Front element: " << q.front() << endl;

    
    cout << "Front element after pop: " << q.front() << endl;

    cout << "Size of queue: " << q.size() << endl;

    cout << "Is queue empty: " << q.empty() << endl;
}