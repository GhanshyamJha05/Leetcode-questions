class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
    long long totalSum = 0;
    int minAbsValue = INT_MAX;
    int negativeCount = 0;

    for (const auto& row : matrix) {
        for (int val : row) {
            totalSum += abs(val);
            if (val < 0) negativeCount++;
            minAbsValue = min(minAbsValue, abs(val));
        }
    }
    if (negativeCount % 2 != 0) {
        totalSum -= 2 * minAbsValue;
    }

    return totalSum;
}

};
