#include <iostream>
#include <algorithm>
using namespace std;

// Brute Force Approach
bool twoSum(int arr[], int n, int x) {

    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {

            if (arr[i] + arr[j] == x) {
                return true;
            }
        }
    }

    return false;
}


// Two Pointer Approach
bool twoSum2PointerApproach(int arr[], int n, int x) {

    int l = 0;
    int h = n - 1;

    while (l < h) {

        int csum = arr[l] + arr[h];

        if (csum == x) {
            return true;
        }

        // Sum bada hai → right pointer left karo
        else if (csum > x) {
            h--;
        }

        // Sum chhota hai → left pointer right karo
        else {
            l++;
        }
    }

    return false;
}


// Main function
int main() {

    int arr[] = {2, 7, 11, 15};
    int n = 4;
    int x = 9;

    // Pehle array ko sort karna zaroori hai
    sort(arr, arr + n);

    bool ans = twoSum2PointerApproach(arr, n, x);

    if (ans) {
        cout << "Pair exists";
    }
    else {
        cout << "Pair does not exist";
    }

    return 0;
}