#include<iostream>
#include<stack>


using namespace std;



int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    
    cout << "Top element: " << s.top() << endl;

    
    cout << "Top element after pop: " << s.top() << endl;

    cout << "Size of stack: " << s.size() << endl;

    cout << "Is stack empty: " << s.empty() << endl;

    

}