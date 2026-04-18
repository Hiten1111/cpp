#include<iostream>
#include<list>
#include<algorithm>


using namespace std;


int main() {
    list<int> lst;

    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);

    cout << "List elements: ";
    for (int i : lst) {
        cout << i << " ";
    }

    lst.pop_back();
    cout << "\nList elements after pop_back: ";

    // after sorting

    sort(lst.begin(), lst.end());
    for (int i : lst) {
        cout << i << " ";
    }

}