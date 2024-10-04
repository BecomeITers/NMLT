#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<limits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> input(n);
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    int result = numeric_limits<int>::max(); //Điều này giúp đảm bảo rằng result sẽ được cập nhật đúng cách trong quá trình tìm kiếm giá trị nhỏ nhất.
    for (size_t i = 1; i < input.size(); i++) {
        int kq = abs(input[i] - input[i - 1]);
        result = min(result, kq);
    }
    cout << result;
    return 0;
}
