#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::string operation;
        std::cin >> operation;

        if (operation == "enqueue") {
            int x;
            std::cin >> x;
            q.push(x);
        } else if (operation == "dequeue") {
            if (!q.empty()) {
                q.pop();
            }
        }
    }

    while (!q.empty()) {
        std::cout << q.front() << ' ';
        q.pop();
    }

    return 0;
}