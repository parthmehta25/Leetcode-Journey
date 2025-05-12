char* longestCommonPrefix(char** strs, int strsSize) {
         if (strsSize == 0)
        return "";

    static char prefix[201]; // buffer to hold result, max 200 chars + null
    strcpy(prefix, strs[0]); // start with the first string as prefix

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        // Compare characters until they match
        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0'; // cut off at first mismatch
    }

    return prefix;

}