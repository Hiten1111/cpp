#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;


int main()
{
   vector<int> v;
   v.push_back(1);
    v.push_back(2);

    for (int i :  v)
    {
        cout << i << " ";
    }

    v.pop_back();

    cout << v.at(0) << endl;

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    cout << "Is empty: " << v.empty() << endl;

    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;


    v.push_back(3);
    v.push_back(2);
    v.push_back(5);

    sort(v.begin(), v.end());

    cout << "Sorted vector: ";
    for (int i : v)    {
        cout << i << " \n";
    }
    

    reverse(v.begin(), v.end());
    cout << "Reversed vector: ";
    for (int i : v)    {
        cout << i << " \n";
    }

    return 0;
}