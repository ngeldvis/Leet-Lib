/* version 1.0.0 */

/* trims all extra white space including newline in a giving string
 * param str: pointer to a string 
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
