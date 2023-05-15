#include <stdio.h>


int screen()
{
        char title_screen[] =
        "==========================\n"
        "=      물고기 키우기     =\n"
        "=                        =\n"
        "=         Start          =\n"
        "=                        =\n"
        "=        E x i t         =\n"
        "==========================\n"
        "\0";
}

	int main
{ 
	int screen;
	int i;
	int input;
	int menu;

	while(i!=0){scanf("%d", &input);
{	
	if(input==1)
	{
  	printf("start");
	scanf("%d", &menu);
	}

	else if(input==2)
	{
	printf("exit?");
	break;
	}
 	if(menu=1){
	printf("feed?");
	}
	else if(menu=2){
	printf("take an adventure?");
	}
	return 0;
}


