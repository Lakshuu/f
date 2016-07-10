# f
#include<stdio.h>
int main(){
    char c;
        	int i,j,n,nc,nd,asc=97,days;;
	    	char name[100];
	        printf("Enter the value n ");
		scanf("%d",&n);        
		 nc=2*n;
		nd=nc-1;
		    for(i=0;i<nc;i++)
    	{
				name[i]=asc;
				asc++;
			}
			 days=nd;
			 j=2*n-1;
			 while(days!=0)
			 {
				printf("\n The children pairs for day %d",days);
				for(int i=0;i<2*n;i++)
				{
					printf("\n %c %c",name[i],name[j]);
					j--;
				}
				for(int i=0;i<2*n;i++)
					{ 
					char temp;
						if(i==0)
						{
							temp=name[i];
						}
					name[i]=name[i+1];
					if(i==(2*n)-1)
						{
						name[i]=temp;
						}
					}
					days--;
			 }
		return 0;
	}
