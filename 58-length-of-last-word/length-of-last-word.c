int lengthOfLastWord(char* s) {
    int len = 0;
    int i = strlen(s) - 1;

    // Skip trailing spaces
    while (i >= 0 && s[i] == ' ')
        i--;

    // Count word length
    while (i >= 0 && s[i] != ' ') {
        len++;
        i--;
    }

    return len;
}
