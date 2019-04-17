#include<stdio.h>
#include<stdlib.h>
int main()
{
    	int row,col,i,j,peak,flag=0;
    	printf("ENTER MATRIX SIZE\n");
    	scanf("%d%d",&row,&col);
    	int a[row][col];
    	printf("ENTER ARRAY ELEMENTS\n");
    	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
        		scanf("%d",&a[i][j]);

	if(a[0][0] > a[0][1] && a[0][0] > a[1][0])//  a[0][0]
	{
		peak=a[0][0];
		flag=1;
	}
	else if(a[0][col-1] > a[0][col-2] && a[0][col-1] > a[1][col-1])//  a[0][col-1]
	{
		peak=a[0][col-1];
		flag=1;
	}
	else if(a[row-1][0] > a[row-2][0] && a[row-1][0] > a[row-1][1])  // a[row-1][0]
	{
		peak=a[row-1][0];
		flag=1;
	}
	else if(a[row-1][col-1] > a[row-2][col-1] && a[row-1][col-1] > a[row-1][col-2])// a[row-1][col-1]
	{
		peak=a[row-1][col-1];
		flag=1;
	}
  else
  {
    for(i=0;i<row;i++)
  	{
  		for(j=0;j<col;j++)
  		{
  			if(i==0  && j>0 && a[i][j] > a[0][j-1] && a[i][j] > a[0][j+1] && a[i][j] > a[1][j] )  // row 0
  				{
  					peak=a[i][j];
  					flag=1;
            break;
  				}
  			else if(i==row-1 && j>0 && a[i][j] > a[i][j-1] && a[i][j] > a[i][j+1] && a[i][j] > a[i-1][j] ) //last row
  				{
  					peak=a[i][j];
  					flag=1;
            break;
  				}
          else if(j==0 && i>0 && a[i][j] > a[i-1][j] && a[i][j] > a[i+1][j] && a[i][j] > a[i][j+1] )  // first column
    				{
    					peak=a[i][j];
    					flag=1;
              break;
    				}
            else if(j==col-1 && i>0 && a[i][j] > a[i-1][j] && a[i][j] > a[i+1][j] && a[i][j] > a[i][j-1] )  // last column
              {
                peak=a[i][j];
                flag=1;
                break;
              }
  			else if(i>0 && j>0 && a[i][j] > a[i][j+1] && a[i][j] > a[i][j-1] && a[i][j] > a[i-1][j] && a[i][j] > a[i+1][j]) //mid element
  				{
  					peak=a[i][j];
  					flag=1;
            break;
  				}
  		}
  	}
  }
	if(flag==1)
	{
		printf("peak = %d",peak);
		exit(0);
	}
}
