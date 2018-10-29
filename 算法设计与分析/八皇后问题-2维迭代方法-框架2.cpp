////
//// Created by heyjude on 18-10-28.
////
//#include<stdio.h>
//#include<stdlib.h>
//#define N 8
//
//int valid(int x[][N],int i,int j);
//void print(int x[][N]);
//int cnt=0;
//int main(void){
//    int x[N][N]={0};
//    int i=0,j=0;
//    int y[N]={0};
//
//    while(i>=0){
//        x[i][j]=1;
//        if(valid(x,i,j)){
//            y[i]=j;
//            if(i>=N-1){
//                print(x);
//                --i;
//                x[i][y[i]]=0;
//                j=y[i]+1;
//            }
//            else{
//                ++i;
//                j=0;
//            }
//        }
//        else{
//            x[i][j]=0;
//            ++j;
//        }
//        while ((i>=0)&&(j>=N)){
//            --i;
//            if(i>=0){
//                x[i][y[i]]=0;
//                j=y[i]+1;
//            }
//        }
//    }
//    return 0;
//}
//
//void print(int x[][N]){
//    int i,j=0;
//    ++cnt;
//    printf("第%d个解为：\n",cnt);
//    for(i=0;i<N;i++){
//        for(j=0;j<N;++j){
//            printf("%d",x[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");
//}
//
//int valid(int x[][N],int i,int j){
//    int k=0;
//    int s=0;
//    for(k=0;k<i;++k){
//        for(s=0;s<N;++s){
//            if((x[k][s]==1)&&((s==j)||abs(k-i)==abs(s-j)))
//                return 0;
//        }
//    }
//    for (s=0;s<j;s++){
//        if(x[i][s]==1){
//            return 0;
//        }
//    }
//    return 1;
//}
