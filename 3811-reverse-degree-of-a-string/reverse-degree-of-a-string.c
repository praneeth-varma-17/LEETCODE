

int reverseDegree(char* s) {
    int ans = 0;
    int len = strlen(s);
    
    for (int i = 0; i < len; ++i) {
        
        int reversePos = 26 - (s[i] - 'a');
        

        ans += reversePos * (i + 1);
    }
    
    return ans;
}
