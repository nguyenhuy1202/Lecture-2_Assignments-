#include <iostream>
#include <vector>
#include <map>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> A(n);
    for(int i = 0; i < n; i++) {
        std::cin >> A[i];
    }

    std::map<int, int> count;
    for(int i = 0; i < n; i++) {
        count[A[i]]++;
    }

    int pairs = 0;
    for(auto it : count) {
        pairs += it.second * (it.second - 1) / 2;
    }

    std::cout << pairs << std::endl;

    return 0;
}