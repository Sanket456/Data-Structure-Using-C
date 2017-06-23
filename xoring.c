#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
    {
		int n,temp;
		int ans=0;
		scanf("%d",&n);
		while(n--)
		{
			scanf("%d",&temp);
			ans=ans^temp;
		}
		printf("%d\n",ans);
	}
	return 0;
}

