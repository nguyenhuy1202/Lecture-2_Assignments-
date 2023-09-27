#include <iostream>
#include <list>

int main() {
    std::list<int> linkedList;
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::string operation;
        std::cin >> operation;

        if (operation == "insert") {
            int p, x;
            std::cin >> p >> x;

            if (p > linkedList.size()) {
                linkedList.push_back(x);
            } else {
                auto it = linkedList.begin();
                std::advance(it, p);
                linkedList.insert(it, x);
            }
        } else if (operation == "delete") {
            int p;
            std::cin >> p;

            if (p < linkedList.size()) {
                auto it = linkedList.begin();
                std::advance(it, p);
                linkedList.erase(it);
            }
        }
    }

    for (const auto& num : linkedList) {
        std::cout << num << ' ';
    }

    return 0;
}