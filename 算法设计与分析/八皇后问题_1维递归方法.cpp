////
//// Created by heyjude on 18-10-28.
////
//
//#include<stdio.h>
//#include<stdlib.h>
//#define N 8
//void print(void);
//int valid(int k);
//void Queen(int k);
//
//int x[N]={0};
//int cnt=0;
//int main(void){
//    Queen(0);
//    return 0;
//}
//
//void Queen(int k){
//    int i=0;
//    if(k>=N){
//        print();
//        return ;
//    }
//    for(i=0;i<N;i++){
//        x[k]=i;
//        if(valid(k))
//            Queen(k+1);
//    }
//}
//
//void print(void){
//    int i=0;
//    cnt++;
//    printf("第%d个解为：",cnt);
//    for(i=0;i<N;i++){
//        printf("%d",x[i]);
//    }
//    printf("\n");
//}
//
//int valid(int k){
//    int i;
//    for(i=0;i<k;i++){
//        if((x[i]==x[k])||abs(x[i]-x[k]))
//            return 0;
//    }
//    return 1;
//}