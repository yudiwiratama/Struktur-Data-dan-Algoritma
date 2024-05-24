#include <iostream>
#include <queue>
using namespace std;

int main() {
    
    
    queue <int> q;
    q.push(3); // enqueue(3)
    q.push(7); // enqueue(7)
    q.pop();   // dequeue()
    q.push(2); // enqueue(2)
    q.push(4); // enqueue(4)
    q.push(1); // enqueue(1)
    q.pop();   // dequeue()
    q.push(6); // enqueue(6)
    q.pop();   // dequeue()
    q.push(5); // enqueue(5)

    cout << "Queue setelah semua operasi: ";
    while (!q.empty()) {
          cout << q.front() << " ";
        q.pop();
    }
      cout << std::endl;

    return 0;
}
