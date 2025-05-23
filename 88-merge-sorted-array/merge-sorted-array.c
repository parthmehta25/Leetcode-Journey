void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int p1 = m - 1;            // Pointer to the end of the actual elements in nums1
    int p2 = n - 1;            // Pointer to the end of nums2
    int p = m + n - 1;         // Pointer to the end of total buffer in nums1

    // Merge nums1 and nums2 starting from the end
    while (p1 >= 0 && p2 >= 0) {
        if (nums1[p1] > nums2[p2]) {
            nums1[p] = nums1[p1];
            p1--;
        } else {
            nums1[p] = nums2[p2];
            p2--;
        }
        p--;
    }

    // If any elements are left in nums2, copy them
    while (p2 >= 0) {
        nums1[p] = nums2[p2];
        p2--;
        p--;
    }

    // No need to copy nums1 elements — they’re already in place
}
