//
// Created by abdob on 10/29/2022.
//
#include <stdio.h>
#include <iostream>
int main(){
    int l,g,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&g,&l);
        if(l%g)
            printf("-1\n");
        else printf("%d %d\n",g,l);
    }
    return 0;
}
