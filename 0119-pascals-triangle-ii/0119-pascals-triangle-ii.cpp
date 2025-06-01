class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> arr;
        arr.resize(rowIndex+1);
        arr[0].push_back(1);
        for(int i=1;i<=rowIndex;i++) {
            arr[i].push_back(1);
            for(int j=1;j<i;j++) {
                arr[i].push_back(arr[i-1][j-1]+arr[i-1][j]);
            }
            arr[i].push_back(1);
        }
        return arr[rowIndex];
    }
};