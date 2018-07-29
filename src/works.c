#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x){
    int shigoto=0,nowwork=1,j;
    for (j=0;j<n; j++){
        if(A[j]>x) return 0;
        else if(shigoto+A[j]<=x) shigoto=shigoto+A[j];
        else {
        nowwork=nowwork+1;
        shigoto=A[j];
        }
    }
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
    printf("%d\n",ub);
    
    
    return 0;
}
#include <stdio.h>
