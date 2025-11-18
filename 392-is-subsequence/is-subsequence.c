bool isSubsequence(char* s, char* t) {
    while (*t != '\0') {
        
        if (*s == *t) {
            s++;
        }
        t++;

        if(*s == '\0') break;
    }

    return (*s == '\0');
    
}