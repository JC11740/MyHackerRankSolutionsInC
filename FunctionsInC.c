#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
        
    return 0;
}

int max_of_four(a, b, c, d) {
    
        int result;
        
        if ( (a > b) && (a > c) && (a > d) ) {
            result = a;
               
        }
        
        else if( (b > a) && (b > c) && (b > d ) ) {
            result = b;
            
        }
        
        else if ( (c > a) && (c > b) && (c > d) ) {
            result = c;
            
        }
        
        else if ( (d > a) && (d > b) && (d > c) ) {
            result = d;
            
        }
        
        return result;
        
    }
