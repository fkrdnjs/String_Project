char* my_strcpy(char* dest, const char* src) {
    char* ptr = dest;
    while ((*ptr++ = *src++) != '\0');
    return dest;
}