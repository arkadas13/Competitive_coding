#include <stdio.h>
long int fermantlittletheorem(long int den,long int n)
{
	if(n==0)
	return 1;
	else if(n%2==0)
	return (long int)((fermantlittletheorem(den,n/2)*fermantlittletheorem(den,n/2))%1000000007);
	else if(n%2==1)
	return (long int)((fermantlittletheorem(den,n/2)*(fermantlittletheorem(den,n/2)*den)%1000000007)%1000000007);
}
int main()
{
	long int i,j,k,N,count,T,arr[1000000000],a,num,den1,den2,den3,den,den_to_num,sum;
	arr[0]=1;
	for(i=1;i<=N;i++)
	{
		arr[i]=(arr[i-1]*i)%1000000007;	
	}
	scanf("%ld",&T);
	for(a=0;a<T;a++)
	{
		sum=0;
	scanf("%ld",&N);
    for(i=1;i<=N-2;i++)
    {
    	for(j=1;j<=N-1-i;j++)
    	{
    		for(k=1;k<=N-i-j;k++)
    		{
    			num=arr[N];
    			den1=arr[i];
    			den2=arr[j];
    			den3=arr[N-j];
    			den=(den1*(den2*den3)%1000000007)%1000000007;
    			den_to_num=fermantlittletheorem(den,1000000005);
    			sum+=den_to_num;
    		}
    	}
    }
    printf("%ld\n",sum);
	}
    return 0;
}