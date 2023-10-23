#include <iostream>
#include <vector>

using namespace std;

int getSum(const vector<int>& numVector) {
    
    int sum = 0;
    for (int num : numVector) {
        sum += num;
    }
    return sum;
}

int getMin(const vector<int>& numVector) {
    if (numVector.empty()) {
        return 0;
    }
    int min = numVector[0];
    for (int num : numVector) {
        if (num < min) {
            min = num;
        }
    }
    return min;
}

int main() {
    vector<int> numVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int sum = getSum(numVector);
    int min = getMin(numVector);

    cout << "Sum of elements in the vector: " << sum << std::endl;
    cout << "Minimum element in the vector: " << min << endl;

    return 0;
}
