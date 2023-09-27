#include <iostream>
#include <list>

int count_triplets(std::list<int>& linkedList) {
    int count = 0;
    for (auto it = std::next(linkedList.begin()); it != std::prev(linkedList.end()); ++it) {
        if (*std::prev(it) + *it + *std::next(it) == 0) {
            ++count;
        }
    }
    return count;
}

int main() {
    std::list<int> linkedList;
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        linkedList.push_back(x);
    }

    std::cout << count_triplets(linkedList);

    return 0;
}