int strStr(char* haystack, char* needle) {
   int hlen = strlen(haystack);
    int nlen = strlen(needle);

    if (nlen == 0) return 0; // empty needle matches at index 0

    for (int i = 0; i <= hlen - nlen; i++) {
        int j = 0;
        for (j = 0; j < nlen; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }
        if (j == nlen) {
            return i; // full match found
        }
    }

    return -1; // no match found
}