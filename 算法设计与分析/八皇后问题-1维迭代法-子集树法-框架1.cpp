////
//// Created by heyjude on 18-10-28.
////
//#include<stdio.h>
//#include<stdlib.h>
//#define N 8
//int valid(int k);
//void print();
//int x[N]={-1};
//int cnt=0;
//
//int main(void){
//    int k=0;
//    while(k>=0) {
//        if (k >= N) {
//            print();
//            k--;
//        }
//
//
//        if (x[k] >= N - 1) {
//            --k;
//            continue;
//        }
//        ++x[k];
//        if (valid(k) == 1) {
//            ++k;
//            if (k < N) {
//                x[k] = -1;
//            }
//        }
//    }
//    return 0;
//}
//
//int valid(int k) {
//    int i;
//    for (i = 0; i < k; i++) {
//        if ((x[i] == x[k]) || abs(x[i] - x[k]))
//            return 0;
//    }
//    return 1;
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