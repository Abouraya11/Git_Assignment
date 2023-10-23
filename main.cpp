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

int main() {
    vector<int> numVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int sum = getSum(numVector);

    cout << "Sum of elements in the vector: " << sum << std::endl;

    return 0;
}
