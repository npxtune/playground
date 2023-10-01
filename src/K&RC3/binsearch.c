int binsearch(int x, int v[], int n) {
    int high = n-1, mid, low = 0;

    while (low <= high) {
        mid = (low+high) / 2;
        if (x < v[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    if (mid > n-1) {
        return -1;
    } else if (mid != high){
        return mid -1;
    } else {
        return mid;
    }
}