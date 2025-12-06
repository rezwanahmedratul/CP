#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[100005];
        scanf("%s", s);
        printf("%lu %lu\n", sizeof(s), strlen(s));
    }
    return 0;
}