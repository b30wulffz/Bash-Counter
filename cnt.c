#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
	char a1[][5]={
		"   # ",
		"  ## ",
		"   # ",
		"   # ",
		"   # ",
		"   # ",
		"   # ",
		"  ###"
	};
	char a2[][5]={
		"#####",
		"    #",
		"    #",
		"    #",
		"#####",
		"#    ",
		"#    ",
		"#####"
	};
	char a3[][5]={
		"#####",
		"    #",
		"    #",
		"#####",
		"    #",
		"    #",
		"    #",
		"#####"
	};
	char a4[][5]={
		"#    ",
		"#    ",
		"#    ",
		"#  # ",
		"#####",
		"   # ",
		"   # ",
		"   # "
	};
	char a5[][5]={
		"#####",
		"#    ",
		"#    ",
		"#####",
		"    #",
		"    #",
		"    #",
		"#####"
	};
	char a6[][5]={
		"#####",
		"#    ",
		"#    ",
		"#####",
		"#   #",
		"#   #",
		"#   #",
		"#####"
	};
	char a7[][5]={
		"#####",
		"    #",
		"    #",
		"    #",
		"   # ",
		"  #  ",
		" #   ",
		"#    "
	};
	char a8[][5]={
		"#####",
		"#   #",
		"#   #",
		"#####",
		"#   #",
		"#   #",
		"#   #",
		"#####"
	};
	char a9[][5]={
		"#####",
		"#   #",
		"#   #",
		"#####",
		"    #",
		"    #",
		"    #",
		"#####"
	};
	char a0[][5]={
		"#####",
		"#   #",
		"#   #",
		"#   #",
		"#   #",
		"#   #",
		"#   #",
		"#####"
	};
	char num[100][100];
	for(int i=1;i<argc;i++)
		strcpy(num[i],argv[i]);

	for(int t=1;t<argc;t++)
	{
		for(int i=0;i<8;i++)
		{
			for(int k=0;k<strlen(num[t]);k++)
			{			
				switch(num[t][k])
				{
					case '1':
					for(int j=0;j<5;j++)
						printf("%c",a1[i][j]);
					printf(" ");
					break;
					case '2':
					for(int j=0;j<5;j++)
						printf("%c",a2[i][j]);
					printf(" ");
					break;
					case '3':
					for(int j=0;j<5;j++)
						printf("%c",a3[i][j]);
					printf(" ");
					break;
					case '4':
					for(int j=0;j<5;j++)
						printf("%c",a4[i][j]);
					printf(" ");
					break;
					case '5':
					for(int j=0;j<5;j++)
						printf("%c",a5[i][j]);
					printf(" ");
					break;
					case '6':
					for(int j=0;j<5;j++)
						printf("%c",a6[i][j]);
					printf(" ");
					break;
					case '7':
					for(int j=0;j<5;j++)
						printf("%c",a7[i][j]);
					printf(" ");
					break;
					case '8':
					for(int j=0;j<5;j++)
						printf("%c",a8[i][j]);
					printf(" ");
					break;
					case '9':
					for(int j=0;j<5;j++)
						printf("%c",a9[i][j]);
					printf(" ");
					break;
					case '0':
					for(int j=0;j<5;j++)
						printf("%c",a0[i][j]);
					printf(" ");
					break;
				}
			}
			printf("\n");
		}
	}
	return 0;
}
