class Solution {
public:
    int fib(int n) {
        //by loop
        int a = 0;
        int b = 1;
        int c;
        int ans;

        if(n == 0) return 0;
        if(n == 1) return 1;
        
        //n-1
        for(int i = 0; i<n-1; i++){
            c = a+b;
            a = b;
            b = c;           
        }

        return c;
    }
};