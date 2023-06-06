char* my_strncat(char* dest, const char* src, int n) {
    char* ptr = dest;
    while (*ptr != '\0') {
        ptr++;
    }
    int i;
    for (i = 0; i < n && *src != '\0'; i++) {
        *ptr++ = *src++;
    }
    *ptr = '\0';
    return dest;
}