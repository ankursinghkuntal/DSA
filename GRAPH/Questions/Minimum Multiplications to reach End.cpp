// Given start, end and an array arr of n numbers. At each step, start is multiplied with any number in the array and then 
// mod operation with 100000 is done to get the new start.

// Your task is to find the minimum steps in which end can be achieved starting from start. If it is not possible to reach end, 
// then return -1.



#include <iostream>
#include <vector>
#include <queue>
#include <limits.h> // For using INT_MAX
using namespace std;

int minimumMultiplications(vector<int>& arr, int start, int end) {
    vector<int> dist(100000, 1e9);
    queue<pair<int, int>> q;
    
    dist[start] = 0;
    q.push({start, 0});
    
    int mod = 100000;
    
    while (!q.empty()) {
        int node = q.front().first;
        int steps = q.front().second;
        q.pop();
        
        if (node == end) return steps;
        
        for (int it : arr) {
            int num = (it * node) % mod;
            if (steps + 1 < dist[num]) {
                dist[num] = steps + 1;
                q.push({num, steps + 1});
            }
        }
    }
    
    return -1;
}

int main() {
    int n, start, end;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the start value: ";
    cin >> start;

    cout << "Enter the end value: ";
    cin >> end;

    int result = minimumMultiplications(arr, start, end);

    if (result != -1) {
        cout << "Minimum multiplications required: " << result << endl;
    } else {
        cout << "It's not possible to reach the end value." << endl;
    }

    return 0;
}
