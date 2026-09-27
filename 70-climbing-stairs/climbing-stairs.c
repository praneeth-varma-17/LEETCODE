int climbStairs(int n) {

    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    int a = 1;
    int b = 2;
    int c = a + b;

    int count = 0;

   for(count = 3; count <= n; count++){
        c = a+b;
        a = b;
        b = c;    
   } 
   return b;
   
}