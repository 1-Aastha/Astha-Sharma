#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	map<int, int>ob;
        for (int i = 0; i < n; i++) {
          ob[arr[i]]++;
          if (ob[arr[i]] > n / 2)
            return arr[i];
        }
        return -1;
}


