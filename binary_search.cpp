#include <iostream>
#include <vector>
using namespace std;

bool BinarySearch(vector <int>& vec, int x, int n) {
    int left = 0, right = n;
    int mid;
    while (left < right) {

        mid = (left + right) / 2;
        if (x == vec[mid]) {
            return true;
        }
        else if (x < vec[mid]) {
            right = mid;
        }
        else {
            left = mid + 1;
        }
    }
    return false;
}

int UpperBound(vector <int>& vec, int x, int n) {

    int left = 0, right = n;
    int mid;

    while (left < right) {
        int mid = (left + right) / 2;
        if (x < vec[mid]) {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return left;
}

int LowerBound(vector <int>& vec, int x, int n) {

    int left = 0, right = n;
    int mid;

    while (left < right) {
        int mid = (left + right) / 2;
        if (x <= vec[mid]) {
            right = mid;
        }
        else {
            left = mid + 1;
        }
    }
    return left;
}

int main() {
    int n, q;
    cin >> n;
    vector<int> vec1;
    for (int m = 0; m < n; m++) {
        cin >> q;
        vec1.push_back(q);
    }
    int k, a;
    cin >> k;
    for (int t = 0; t < k; t++)
    {
        cin >> a;
        cout << BinarySearch(vec1, a, n) << " " << LowerBound(vec1, a, n) << " " << UpperBound(vec1, a, n) << "\n";
    }
    return 0;
}