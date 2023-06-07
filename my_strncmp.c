int my_strncmp(const char* str1, const char* str2, int n) {
    int i = 0;
    while ((str1[i] != '\0' || str2[i] != '\0') && i < n) {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return 0;
}