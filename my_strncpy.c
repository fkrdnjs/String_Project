char* my_strncpy(char* dest, const char* src, int n) {
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    dest[i] = '\0';

    return dest;
}