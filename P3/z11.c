#include<stdio.h>
#define MAX 30

void menjaj(float *a,float *b)
{
    float t;
    t=*a;
    *a=*b;
    *b=t;
}
void sort(float *a,int n){
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(*(a+i)>*(a+j))
                menjaj(a+i, a+j);
}

int main()
{
    float x[MAX];
    int i,n;
    printf("Unesite broj elemenata niza za sortiranje:\n");
    scanf("%d",&n);
    printf("Unesite clanove niza: \n");
    for(i=0;i<n;i++)scanf("%f",&x[i]);
    sort(x,n);
    printf("Sortirani niz je:\n");
    for(i=0;i<n;i++)printf("x[%d]=%.2f\n",i,x[i]);
    return 0;
}
