/* version 1.0.1 */

/** trims all extra white space including newline in a giving string
 *  @param str pointer to a string 
 */
void trim(char **str) {
    int len = strlen(*str);
    int i = 0;
    while((*str)[i] != '\0') {
        if(((*str)[i]==' ' && (*str)[i+1]==' ') || ((*str)[i]==' ' && (*str)[i+1]=='\n') || ((*str)[i]==' ' && (*str)[i+1]=='\0') || ((*str)[i]==' ' && i==0) || (*str)[i]=='\n') {
            int j;
            for(j = i; j < len; j++) {
                (*str)[j] = (*str)[j+1];
            }
        } else {
            i++;
        }
    }
}


/** checks to see if a given character is an uppercase character
 *  @param c character to check
 *  @return TRUE (1) is the character is uppercase, FALSE (0) otherwise
 */
int isUpper(char c) {
    return c > 64 && c < 91;
}


/** checks to see if a given character is an lowercase character
 *  @param c character to check
 *  @return TRUE (1) is the character is lowercase, FALSE (0) otherwise
 */
int isLower(char c) {
    return c > 96 && c < 123;
}


/** checks to see if a character is in the alphabet
 *  @param c charcater to check
 *  @return TRUE (1) if character is in the alphabet, FALSE (0) otherwise
 */
int isAlpha(char c) {
    return isUpper(c) || isLower(c);
}
