#include <stdio.h>

int n;
int k;
int A[100000];

int max(int m){
    int max=A[0];
    for(int j=1; j≤n; j++){
        if(A[0]<A[j]){
            max=A[j];
        }
    }
    return max;
}

int sum(int x){
    int sum=0;
    for(h=0; h<n; h++){
        sum=sum+ceil(A[h]/x);
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
    ub=max;
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
