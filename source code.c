# Game
//tic tac toa game 
//Tic tac toe///////
//////////////////////////////////////////////////////
#include<stdio.h>
char s[3][3],m=0,a=0,b,r,c,n,tmp=6,tmp1=0;
main()
{
	int row,col,cnd;
	printf("Enter array elements elements \n");

	r=sizeof(s)/sizeof(s[0]);
	c=sizeof(s[0])/sizeof(s[0][0]);

	print();
l:tmp1++;
        if(a==0)
	{
	printf("\n1st player\n");
	printf("Enter the row &col\n");	
	scanf("%d %d",&row,&col);
        scanning(s,row,col,a);
        ++a;
	}
        else
        {
	printf("\n2nd player\n");
	printf("Enter the row &col\n");	
	scanf("%d %d",&row,&col);
	scanning(s,row,col,a);
	--a;
        }
        system("clear");
        print();
        cnd=condition(s);  //to check is there any winning condition 
        if(cnd==1)
       goto t1;      
//////////////////////////////////////////  
        if(tmp1<9)  
	  goto l;

t1: if(a==0)
    printf("1st player win\nWinner !!!!\nWinner!!!!!\n");
    else if(a==1)
    printf("2nd player win\nWinner !!!!\nWinner!!!!!\n");
}
/////////////////-----printing-----//////////
	  
	void print()
	{
	for(m=0;m<r;m++)
	{        
		printf(" ____ ____ ____\n");
		for(n=0;n<c;n++)
		{  

			printf("|  %c ",s[m][n]);
		}
		printf("| \n");

	}
	printf("|____|____|____|\n");
}
/////////////////////////////////////////////////////////
	
	void scanning(char (*p)[3],int row,int col,int a)
	{
	char val;
	int i,j;
	static int count;
			for(i=0;i<3;i++)
				for(j=0;j<3;j++)
				{
					if(row==i&&j==col)
					{     
				
						if(a==0)
						p[i][j]='*';
						else  
						p[i][j]='0';
                                                //else 
                                            	//p[i][j]=' ';
						break;
					}
					else
					{
						if(count==0)
						p[i][j]=' ';
						
					}
					
					
				}
				count++;
				printf("\n\n");
	                     
	}	
/////////////////////////////////////////////////////////////////////////////
int condition(char (*p)[3])
{
	int i,j,c1=0;


	for(j=0;j<3;j++)
		for(i=0;i<3;i++)
		{      
			if(p[j][i]!=' ')
			{


				if((p[j][i]==p[j][i+1]) && (p[j][i+1]==p[j][i+2]) && (p[j][i]==p[j][i+2]))//for row
				{              
					return 1;
				} 

				else if((p[j][i]==p[j+1][i]) && (p[j+1][i]==p[j+2][i]) && (p[j][i]==p[j+2][i]))//for row
						return 1;
				 
				else if((p[j][i]==p[j+1][i+1]) && (p[j+2][i+2]==p[j+1][i+1]) && (p[j+2][i+2]==p[j][i]))
						return 1;

			}
		}
}
