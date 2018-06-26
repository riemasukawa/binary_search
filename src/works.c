#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x){
    int shigoto=0,nowwork=0,j,t;
    for (j=0;j<n; j++){
        for(t=nowwork ; shigoto+A[nowwork]<x ; nowwork++){
            shigoto=shigoto+A[nowwork];
        }}
    return nowwork<=k;
}

int main(){
    int i, lb, ub;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    lb=0;
    ub=1000000000;
    while(ub-lb>1){
        int x=(lb+ub)/2;
        if(p(x)){
            ub=x;
        }
        else {
            lb=x;
        }}
    printf("%d\n",lb);
    
    
    return 0;
}
#include <stdio.h>
