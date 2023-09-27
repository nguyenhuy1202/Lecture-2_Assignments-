#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::string operation;
        std::cin >> operation;

        if (operation == "push") {
            int x;
            std::cin >> x;
            s.push(x);
        } else if (operation == "pop") {
            if (!s.empty()) {
                s.pop();
            }
        }
    }

   
    std::stack<int> temp;
    while (!s.empty()) {
        temp.push(s.top());
        s.pop();
    }

    while (!temp.empty()) {
        std::cout << temp.top() << ' ';
        temp.pop();
    }

    return 0;
}