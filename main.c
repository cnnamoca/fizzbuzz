//
//  main.c
//  FizzBuzz
//
//  Created by Carlo Namoca on 2017-08-01.
//  Copyright © 2017 Carlo Namoca. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i;
    
    for(i=1; i<101; i++){
        
        if((i%3==0) && (i%5==0)){
            printf("FIZZBUZZ\n");
        }
        
        else{
            if(i%3==0){
                printf("FIZZ\n");
            }
            else{
                if(i%5==0){
                    printf("BUZZ\n");
                }
                else{
                    printf("i=%d\n", i);
                }
            }
        }
    }
    
    return 0;
}
