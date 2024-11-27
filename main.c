//
//  main.c
//  hiiiii
//
//  Created by Abu Sayed Rana  on 9/18/24.
//

#include <stdio.h>

int main(void) {
    int a,b;
    scanf("%d %d ",&a,&b);
    if (a%b==0 ){
        printf("Multiples\n");
    }else if( b%a==0){
        printf("Multiples\n");
    }else{
        printf("No Multiples\n");
    }
    return 0;
}
