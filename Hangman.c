#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>
void start()
{
	printf("Choose type of word you want:\n\n");
	printf("1.Animal Names\n");
	printf("2.Country Names\n");
	printf("3.Comic Characters\n");
}
int endgame()
{
	int c;
	printf("\n\nDo you wish to countonue:\n1.Continue\n2.Return to Menu\n3.Exit");
	scanf("%d",&c);
	return c;
}
int lose(int a)
{
	int c;
	printf("\nYOU LOST!!!\n\n1.Return to Menu\n2.Exit");
	scanf("%d",&c);
	c++;
	return c;
}
void execution(int a)
{

	 switch(a)
     {

     case 13:
         
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||   / %c",'\\');
	printf("\n\t||      ");
	break;
	case 12:
         
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||   / %c",'\\');
	printf("\n\t||      ");
	break;
     case 11:
         
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||     %c",'\\');
	printf("\n\t||      ");
	break;
	case 10:
         
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||     %c",'\\');
	printf("\n\t||      ");
	break;
     case 9:
         
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
	case 8:
         
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 7:
         
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
	case 6:
         
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 5:
         
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO ",'\\');
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
	case 4:
         
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO ",'\\');
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 3:
         
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||    O ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
	case 2:
         
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||    O ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
	case 1:
			printf("\n\t||===== ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
	case 0:
			printf("\n\t||===== ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
      }
      
      return;
}

int main()
{
	int end=2,streak=0,choice_of_file,str=1,fla,len,flag2,flag3;
	
	while(end==1 || end==2){
		
		
    if(end==2){
    	system("cls");
		start();
	scanf(" %d",&choice_of_file);	
}
flag3=0;
	int i,j,flag=0,lenght,a=0;
	char b;
	char ch;
	FILE *fp;
	switch(choice_of_file)
	{
	case 1:	
	fp = fopen ( "animal.txt", "r");
	break;
	case 2:	
	fp = fopen ( "country.txt", "r");
	break;
	case 3:	
	fp = fopen ( "comic.txt", "r");
	break;
}
    char word[350];
    char word2[350];
   srand ( time(NULL) );
    
    	for(j=0;j<350;j++)
    	{
		fscanf(fp,"%c",&ch);
	    word[j]=ch;
		if(j>rand()%320 && ch=='\n')
		break;	
		
		}
	for(j=0;j<350;j+=2)
    	{
		fscanf(fp,"%c",&ch);
	    word2[j]=ch;
	    word2[j+1]=' ';
	    if(ch=='\n')
	    break;
	
		}
		word2[j+1]='\0';
    	printf("%s",word2);
    	lenght=strlen(word2)-1;
    	fclose(fp);
    	if(strlen(word2)%2==0)
    	len=strlen(word2)/2;
    	if(strlen(word2)%2!=0)
    	len=(strlen(word2)-1)/2;
		
char c[lenght];

for(i=0;i<lenght;i+=2)
{
c[i]='_';
c[i+1]=' ';
}
puts(c);
	for(i=0;i<200;i++)
	{
		fla=0;
		execution(a);
				printf("                      Streak=%d\n",streak);
          printf("Enter an alphabet=");
		scanf("%c",&b);
		b=toupper(b);
		flag2=0;
				system("cls");
						
		for(j=0;j<lenght;j++)
		{  
		
		if(b==c[j])
		{
		flag--;
	}
			if(b==word2[j])
			{
				c[j]=b;
				flag++;	
				fla=1;
				if(flag2==0)
				{
				//a--;
				flag2=1;
			}
			}
		   
			if(flag>=len)
			break;
}
if(fla==0)
{
a++;
}
	puts(c);
        if(a==12 || a==13 && flag3==0)
        {
        	execution(a);
        streak=0;
		printf("\nThe word was:\n");	
        puts(word2);
		end=lose(a);
		flag3=1;
		if(end==3)
		break;
		if(end==2)
		{
		a=0;
		break;
	}
}
	
		if(flag>=len)
		{
		printf("You Won!!!");
		streak++;
						printf("                      Streak=%d\n",streak);

		end=endgame();
		break;}
	}}

}
