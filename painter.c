/*#include<stdio.h>
int main()
{
	int a[100],ab,n,i=0,in,f=0;
	scanf("%d",&ab);
	for(i;i<ab;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	for(i=0;i<ab;i++){
		if(a[i]==n)
		{
	}
	if(f==1)
	printf("Index number is %d",in);
	else
	printf("Index numb
			f=1;
			in=i;
			break;
		}
		er is not found");
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int *p=(int*)malloc(2*n*sizeof(int));
	for(i=0;i<(2*n);i++){
		scanf("%d",(p+i));
	}
	for(i=0;i<n;i++){
		if(*(p+i)==((*p(n*2))){prin
		}
	}
}*/
#include<stdio.h>
struct Date{
    int date,m,yr;
};
int isEqual(struct Date d1,struct Date d2){
    if(d1.date==d2.date && d1.m==d2.m && d1.yr==d2.yr){
        return 1;
    }
    else return 0;
}
int main(){
    struct Date d1,d2;
    scanf("%d %d %d",&d1.date,&d1.m,&d1.yr);
    scanf("%d %d %d",&d2.date,&d2.m,&d2.yr);
    if(isEqual(d1,d2)){
        printf("The given dates are Equal.");
    }
    else {
        printf("The given dates are not Equal.");
    }
}