//
// Created by heyjude on 18-10-28.
//

#include<stdio.h>
#define N 4
void swap(int x[],int i,int j);
int main(){
    int i,k,x[N];
    int p[N];
    for(i=0;i<N;i++){
        x[i]=i+1;
        p[i]=i;
    }
    k=0;
    while(k>=0){
        if(p[k]>=N){
            k--;
            if(k>0)
                swap(x,k,p[k]-1);
            continue;
        }
        swap(x,k,p[k]);
        p[k]++;
        if(k<N-1){
            k++;
            p[k]=k;
        }
        else{
            for(i=0;i<N;i++)
                printf("%d",x[i]);
            printf("\n");
        }
    }
    return 0;
}

void swap(int x[],int i,int j){
    int t;
    t=x[j];
    x[i]=x[j];
    x[j]=t;
}