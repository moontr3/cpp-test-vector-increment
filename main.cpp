#include <iostream>
#include <vector>

// function
std::vector<int> incrementVector(std::vector<int> vec, int n) {
    for (int i = 0; i < vec.size(); i++) {
        vec[i] += n;
    }
    return vec;
}

// tests for the function
int main() {
    std::vector<int> testVector = {1, 2, 3, 4, 5};
    std::vector<int> targetVector = {11, 12, 13, 14, 15};
    int n = 10;

    testVector = incrementVector(testVector, n);

    for(int index; index < testVector.size(); index++) {
        if (targetVector[index] != testVector[index]) {
            std::cerr << "Test failed" << std::endl;
            return 1;
        }
    }
    std::cout << "Test passed" << std::endl;
    return 0;
}