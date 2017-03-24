#include<stdio.h>
#include<stdlib.h>
/*struct node
{
    int value;
    struct node *link;
}*top;*/

int main()
{
    int *number=NULL;
    int i;
    int n;
    int *mumber,*tumber;
    mumber=realloc(number,sizeof(int));
    *mumber=45;
    printf("%d\n",*mumber);
    tumber=realloc(mumber,2*sizeof(int));
    *tumber=*mumber;
    *(tumber+1)=30;
    printf("%d %d\n",*tumber,*(tumber+1));
    for(i=0;i<2;i++)
    {
        printf("enter no. %d\n",i+1);
        scanf("%d",tumber+i);
    }
    printf("%d %d\n",*tumber,*(tumber+1));
    n=sizeof(tumber)/sizeof(int);
    printf("%d",n);
    return 0;
}

