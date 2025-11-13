class Solution {
  public:
  
    int res = 0;

    void merge(vector<int> &arr, int low, int mid, int high) {
        int n1 = mid - low + 1;
        int n2 = high - mid;
    
        vector<int> t1(n1), t2(n2);
        for (int i = 0; i < n1; i++) t1[i] = arr[low + i];
        for (int i = 0; i < n2; i++) t2[i] = arr[mid + 1 + i];
    
        // count reverse pairs
        int i = 0, j = 0;
        while (i < n1 && j < n2) {
            if (t1[i] > 2LL * t2[j]) {
                res += (n1 - i);
                j++;
            } else {
                i++;
            }
        }
    
        // merge two sorted halves
        i = j = 0;
        int k = low;
        while (i < n1 && j < n2) {
            if (t1[i] <= t2[j]) arr[k++] = t1[i++];
            else arr[k++] = t2[j++];
        }
        while (i < n1) arr[k++] = t1[i++];
        while (j < n2) arr[k++] = t2[j++];
    }
    
    void mergesort(vector<int> &arr, int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;
            mergesort(arr, left, mid);
            mergesort(arr, mid + 1, right);
            merge(arr, left, mid, right);
        }
    }

    
    int countRevPairs(vector<int> &arr) {
        // Code here
        mergesort(arr, 0, arr.size()-1);
        return res;
    }
};