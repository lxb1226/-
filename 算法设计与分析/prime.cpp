////
//// Created by heyjude on 18-10-28.
////
//
//#include<stdio.h>
//#define N 5
//#define INF 9999
//int prim(int (*G)[N],int* parent);
//int main(void){
//
//    int G[N][N]={
//            {INF,132,217,164,58},
//            {132,INF,290,201,79},
//            {217,290,INF,13,303},
//            {164,201,113,INF,196},
//            {58,79,303,196,INF}
//    };
//    int i=0;
//    int sum = 0;
//    int parent[N] = {0};
//    sum =  prim(G,parent);
//
//    printf("最小生成树的总权值为：%d\n",sum);
//    printf("选取的边为：\n");
//    for(i=1;i<N;i++){
//        if(i<parent[i]){
//            printf("(%d,%d,%d)",i,parent[i],G[i][parent[i]]);
//        }
//        else{
//            printf("(%d,%d,%d)",parent[i],i,G[i][parent[i]]);
//        }
//    }
//}
//
//int prim(int (*G)[N],int* parent){
//    int least[N];
//    int is_choice[N];
//    int j=0,k=0,t=0;
//    int min=0,sum=0;
//    for(j=0;j<N;++j){
//        least[j]=0;
//        is_choice[j]=0;
//        parent[j]=0;
//    }
//    is_choice[0]=1;
//    for(j=0;j<N;++j){
//        least[j]=G[0][j];
//    }
//
//    for(k=1;k<N;++k){
//        min=INF+1;
//        for(j=0;j<N;j++){
//            if(!is_choice[j]&&least[j]<min){
//                min=least[j];
//                t=j;
//            }
//        }
//        is_choice[t]=1;
//        sum+=min;
//
//        for(j=0;j<N;++j){
//            if(!is_choice[j]&&G[t][j]<least[j]){
//                least[j]=G[t][j];
//                parent[j]=t;
//            }
//
//        }
//    }
//    return sum;
//}