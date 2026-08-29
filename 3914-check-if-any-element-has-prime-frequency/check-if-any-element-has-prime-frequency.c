
bool isPrime(int n) { 
    if (n <= 1) return false; 
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) return false; 
    } 
    return true; 
} 

bool checkPrimeFrequency(int* nums, int numsSize) { 
    int visited[numsSize]; 
    int freq[numsSize]; 
    
    for(int i = 0; i < numsSize; i++) { 
        visited[i] = 0; 
        freq[i] = 0; 
    } 
    
    for(int i = 0; i < numsSize; i++) { 
        if(visited[i] == 1) { 
            continue; 
        } 
        int count = 1; 
        for(int j = i + 1; j < numsSize; j++) { 
            if(nums[i] == nums[j]) { 
                count++; 
                visited[j] = 1; 
            } 
        } 
        freq[i] = count; 
        visited[i] = 1; 
    } 
    
    for(int i = 0; i < numsSize; i++) { 
        if(freq[i] > 0) { 
            if (isPrime(freq[i])) { 
                return true; 
            } 
        } 
    } 
    
    return false; 
}
