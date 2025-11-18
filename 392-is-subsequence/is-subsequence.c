bool isSubsequence(char* s, char* t) {
    int i = 0;

    while (*t != '\0') {
        
        if (*s == *t) {
            s++;
        }
        t++;
    }

    if (*s == '\0') return true;
    return false;
    
}