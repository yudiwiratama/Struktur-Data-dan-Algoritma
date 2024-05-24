#include <iostream>
#include <stack>
using namespace std;

// Fungsi untuk membandingkan dua stack
bool compareStacks(stack<int> s1, stack<int> s2) {
    // Looping sampai salah satu stack kosong
    while (!s1.empty() && !s2.empty()) {
        // Jika elemen teratas dari kedua stack tidak sama, maka return false
        if (s1.top() != s2.top()) {
            return false;
        }
        // Hapus elemen teratas dari kedua stack
        s1.pop();
        s2.pop();
    }
    // Jika kedua stack kosong, maka return true, jika tidak maka return false
    return s1.empty() && s2.empty();
}

int main() {
    stack<int> stack1, stack2;
    
    // mengisi stack1
    stack1.push(1);
    stack1.push(2);    
    stack1.push(3);
    
    // mengisi stack2
    stack2.push(1);
    stack2.push(2);
    stack2.push(3);

    // Membandingkan stack1 dan stack2
    if (compareStacks(stack1, stack2)) {
        cout << "Stack sama" << endl;
    } else {
        cout << "Stack tidak sama" << endl;
    }
    
    return 0;
}
