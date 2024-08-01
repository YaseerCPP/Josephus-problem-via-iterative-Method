#include <iostream>

int josephus(int n, int k) {
    int result = 0; // Initial position when there is only one person (0-indexed)
    for (int i = 1; i <= n; ++i) {
        result = (result + k) % i;
    }
    return result + 1; // Converting to 1-indexed position
}

int main() {
    int n, k;
    std::cout << "Enter the number of people (n): ";
    std::cin >> n;
    std::cout << "Enter the step count (k): ";
    std::cin >> k;

    int position = josephus(n, k);
    std::cout << "The position of the last person standing is: " << position << std::endl;

    return 0;
}
