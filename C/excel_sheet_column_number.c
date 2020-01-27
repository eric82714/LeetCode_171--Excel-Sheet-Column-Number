int titleToNumber(char * s){
    int num = 0;
        
    for(int i = 0; i < strlen(s); i++) {
        num = num + (s[i] - 'A' + 1) * pow(26, strlen(s)-i-1);
    }
        
    return num;
}
