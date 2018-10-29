////
//// Created by heyjude on 18-10-28.
////
//#include<stdio.h>
//#include<stdlib.h>
//
//int kruskal(int (*data)[3],int n,int m,int is_choice[]);
//void quicksort(int (*data)[3],int left,int right);
//void swap(int (*data)[3],int i,int j);
//int getf(int f[],int v);
//int merge(int f[],int v,int u);
//
//int main(void){
//    int data[][3]={
//            {2,4,11},{3,5,13},
//            {4,6,3},{5,6,4},
//            {2,3,6},{4,5,7},
//            {1,2,1},{3,4,9},
//            {1,3,2}
//    };
//    int n,m;
//    int sum=0;
//    int i=0;
//    m=sizeof(data)/sizeof(int)/3;
//    n=0;
//    for(i=0;i<m;i++){
//        if(n<data[i][0])
//            n=data[i][0];
//        if(n<data[i][1])
//            n=data[i][1];
//    }
//
//    int is_choice[m];
//    printf("原始数据为：\n");
//    for(i=0;i<m;++i){
//        printf("(%d,%d,%d)\n",data[i][0],data[i][1],data[i][2]);
//    }
//    sum=kruskal(data,n,m,is_choice);
//    printf("最小生成树的总权值为：%d\n",sum);
//    printf("选取的边为：\n");
//    for(i=0;i<m;i++){
//        if(is_choice[i])
//            printf("(%d,%d,%d)\n",data[i][0],data[i][1],data[i][2]);
//    }
//}
//
//int kruskal(int (*data)[3],int n,int m,int is_choice[]){
//    int f[n];
//    int sum=0;
//    int count=0;
//    int i;
//    quicksort(data,0,m-1);
//    for(i=0;i<n;i++)
//        f[i]=i;
//    for(i=0;i<m;i++){
//        if(merge(f,data[i][0]-1,data[i][1]-1)){
//            count++;
//            sum+=data[i][2];
//            is_choice[i]=1;
//        }
//        if(count == n-1)
//            break;
//    }
//    return sum;
//}
//
//void quicksort(int (*data)[3],int left,int right){
//    int i,j;
//    if(left>right)
//        return;
//    i=left;
//    j=right;
//    while(i != j){
//        while(data[j][2]>=data[left][2] && i<j)
//            j--;
//        while(data[i][2]<=data[left][2]&&i<j)
//            i++;
//        if(i<j)
//            swap(data,i,j);
//    }
//    swap(data,left,i);
//    quicksort(data,left,i-1);
//    quicksort(data,i+1,right);
//    return;
//}
//
//int getf(int f[],int v){
//    if(f[v]==v)
//        return v;
//    else{
//        f[v]==getf(f,f[v]);
//        return f[v];
//    }
//}
//
//int merge(int f[],int v,int u){
//    int t1,t2;
//    t1=getf(f,v);
//    t2=getf(f,u);
//    if(t1!=t2){
//        f[t2]=t1;
//        return 1;
//    }
//    return 0;
//}
//
//void swap(int (*data)[3],int i,int j){
//    int k=0;
//    int t;
//    for(k=0; k<3;k++){
//        t=data[i][k];
//        data[i][k]=data[j][k];
//        data[j][k]=t;
//    }
//}