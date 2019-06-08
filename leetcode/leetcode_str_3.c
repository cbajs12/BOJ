#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int carry = 0;
    int* returnArry = 0;

    if(digits[digitsSize - 1] == 9){
        carry = 1;

        for(int i =digitsSize - 1; i >= 0; --i){
            if(digits[i] == 9){
                if(carry == 1){
                    digits[i] = 0;
                    carry = 1;
                }

            }else{
                if(carry == 1){
                    digits[i] += carry;
                    carry = 0;
                }
            }
        }
    }else{
        digits[digitsSize - 1] += 1;
    }

    if(carry == 1){
        *returnSize = digitsSize + carry;
        returnArry = (int *)malloc(*returnSize*(sizeof(int)));

        //memcpy( returnArry, digits, digitsSize*(sizeof(int)) );

        returnArry[0]= 1;
        for(int i = 1; i < *returnSize; ++i){
            returnArry[i] = digits[i-1];
        }
    }else{
        *returnSize = digitsSize;
        returnArry = (int *)malloc(digitsSize*(sizeof(int)));
        //memcpy( returnArry, digits, digitsSize*(sizeof(int)) );
        for(int i = 0; i < *returnSize; ++i){
            returnArry[i] = digits[i];
        }
    }

    for(int i = 0; i < *returnSize ; ++i){
        printf("%d\n", returnArry[i]);
    }
    return returnArry;

}

