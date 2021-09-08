#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;//initialize file pointer
    int i,n;
    fp=fopen("file.txt","r+w");//create a file
    if(fp==NULL)//check if the file exit
    {
        printf("File does not exit\n");
    }
    else
        printf("Enter 10 values\n ");
    for(i=0;i<10;i++)//take 10 values from the user
    {
        scanf("%d",&n);
        fprintf(fp,"%d\n",n);//print them inside the file
    }
    fclose(fp);

    fp=fopen("file.txt","r");
    int c,max=-99999;
      while(fscanf(fp,"%d",&c)!=EOF)
      {
       if(max<c)
       {
           max=c;
       }
      }
      printf("Max value is :%d ",max);
 fclose(fp);

    return 0;
}
