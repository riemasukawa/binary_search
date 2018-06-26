#include <stdio.h>

int n;
int k;
int A[100000];

int sum(int x){
    int sum=0,h;
    for(h=0; h<n; h++){
        sum=sum+(A[h]-1)/x;
    }
    return sum;
}

int p(int x){
    return(int)sum<=k;
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
        else{
            lb=x;
        }
    }

    printf("%d\n",ub);

  return 0;
}
