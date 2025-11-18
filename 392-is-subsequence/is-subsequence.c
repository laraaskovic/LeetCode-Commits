bool isSubsequence(char* s, char* t) {
    while (*t != '\0') {
        
        if (*s == *t) {
            s++;
        }
        t++;
    }

    return (*s == '\0');
    
}