#include <stdio.h>
#include <math.h>
#include <unistd.h>

void six(const char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
        fflush(stdout);
        usleep(5000);
    }
}
int main()
{   
	int menu,menux,menuz,o,d,hx;
	int n,i;
	int num1,num2,num3,num4,num5,sux;
	int nx;
	float num[100],sum = 0.0, avg;
	int main;
	six("[1] Number Calculator \n\n[2] Number Converter\n\n");
	six("Enter Menu Number : ");
    scanf("%d",&menu);
    if ( menu == 1 ) 
    { 
    six("\n[1] Octal Calculator\n\n[2] Decimal Calculator\n\n[3] Hexa Decimal Calculator\n\n");
	six("Enter Menu Number : ");
    scanf("%d",&menuz);
    
    	}
    	
    	if ( menu == 2 ) 
    	{ six("\n[1] Octal\n\n[2] Decimal\n\n[3] Hexa Decimal\n\n");
	six("Enter Menu Number : ");
    scanf("%d",&menux);}
    if( menu == 3 )
    {
    	six("About");
    
    	}
    
    
   
    if ( menux == 1 ) 
    { 
    	six("\nEnter Octal Number : ");
    	scanf("%o",&o);
    }
    if (menux == 2) 
    { 
    	six("\nEnter Decimal Number : ");
    	scanf("%d",&d);
    }
    if (menux == 3)
    { 
    	six("\nEnter Hexa Decimal Number : ");
    	scanf("%x",&hx);
    }
  if (menuz == 1) 
    
    {
    	
     six("\nEnter the numbers of elements: ");
  	 scanf("%d",&nx);
  	 if (nx == 2)
     
     { 
     	six("\nEnter First Number : ");
     	scanf("%o",&num1);
     	six("\nEnter Second Number : ");
     	scanf("%o",&num2);
     	sux = num1+num2;
     	six("\nResult : ");
     	printf("%o",sux);
     	}
     	if (nx == 3)
     
     { 
     	six("\nEnter First Number : ");
     	scanf("%o",&num1);
     	six("\nEnter Second Number : ");
     	scanf("%o",&num2);
     	six("\nEnter Third Number : ");
     	scanf("%o",&num3);
     	sux = num1+num2+num3;
     	six("\nResult : ");
     	printf("%o",sux);
     	}
     	     	if (nx == 4)
     
     { 
     	six("\nEnter First Number : ");
     	scanf("%o",&num1);
     	six("\nEnter Second Number : ");
     	scanf("%o",&num2);
     	six("\nEnter Third Number : ");
     	scanf("%o",&num3);
     	six("\nEnter Fourth  Number : ");
     	scanf("%o",&num4);
     	sux = num1+num2+num3+num4;
     	six("\nResult : ");
     	printf("%o",sux);
     	}
     	     	     	if (nx == 5)
     
     { 
     	six("\nEnter First Number : ");
     	scanf("%o",&num1);
     	six("\nEnter Second Number : ");
     	scanf("%o",&num2);
     	six("\nEnter Third Number : ");
     	scanf("%o",&num3);
     	six("\nEnter Fourth Number : ");
     	scanf("%o",&num4);
     	six("\nEnter Fifth Number : ");
     	scanf("%o",&num5);
     	sux = num1+num2+num3+num4+num5;
     	six("\nResult : ");
     	printf("%o",sux);
     	}
     	
  	 }
    if (menuz == 2) 
    
    {
    	
     six("\nEnter the numbers of elements: ");
  	 scanf("%d",&nx);
  	 if (nx == 2)
     
     { 
     	six("\nEnter First Number : ");
     	scanf("%d",&num1);
     	six("\nEnter Second Number : ");
     	scanf("%d",&num2);
     	sux = num1+num2;
     	six("\nResult : ");
     	printf("%d",sux);
     	}
     	if (nx == 3)
     
     { 
     	six("\nEnter First Number : ");
     	scanf("%d",&num1);
     	six("\nEnter Second Number : ");
     	scanf("%d",&num2);
     	six("\nEnter Third Number : ");
     	scanf("%d",&num3);
     	sux = num1+num2+num3;
     	six("\nResult : ");
     	printf("%d",sux);
     	}
     	     	if (nx == 4)
     
     { 
     	six("\nEnter First Number : ");
     	scanf("%d",&num1);
     	six("\nEnter Second Number : ");
     	scanf("%d",&num2);
     	six("\nEnter Third Number : ");
     	scanf("%d",&num3);
     	six("\nEnter Fourth  Number : ");
     	scanf("%d",&num4);
     	sux = num1+num2+num3+num4;
     	six("\nResult : ");
     	printf("%d",sux);
     	}
     	     	     	if (nx == 5)
     
     { 
     	six("\nEnter First Number : ");
     	scanf("%d",&num1);
     	six("\nEnter Second Number : ");
     	scanf("%d",&num2);
     	six("\nEnter Third Number : ");
     	scanf("%d",&num3);
     	six("\nEnter Fourth Number : ");
     	scanf("%d",&num4);
     	six("\nEnter Fifth Number : ");
     	scanf("%d",&num5);
     	sux = num1+num2+num3+num4+num5;
     	six("\nResult : ");
     	printf("%d",sux);
     	}
     	
  	 }
   if (menuz == 3) 
    
    {
    	
     six("\nEnter the numbers of elements: ");
  	 scanf("%X",&nx);
  	 if (nx == 2)
     
     { 
     	six("\nEnter First Number : ");
     	scanf("%X",&num1);
     	six("\nEnter Second Number : ");
     	scanf("%X",&num2);
     	sux = num1+num2;
     	six("\nResult : ");
     	printf("%X",sux);
     	}
     	if (nx == 3)
     
     { 
     	six("\nEnter First Number : ");
     	scanf("%X",&num1);
     	six("\nEnter Second Number : ");
     	scanf("%X",&num2);
     	six("\nEnter Third Number : ");
     	scanf("%X",&num3);
     	sux = num1+num2+num3;
     	six("\nResult : ");
     	printf("%X",sux);
     	}
     	     	if (nx == 4)
     
     { 
     	six("\nEnter First Number : ");
     	scanf("%X",&num1);
     	six("\nEnter Second Number : ");
     	scanf("%X",&num2);
     	six("\nEnter Third Number : ");
     	scanf("%X",&num3);
     	six("\nEnter Fourth  Number : ");
     	scanf("%X",&num4);
     	sux = num1+num2+num3+num4;
     	six("\nResult : ");
     	printf("%X",sux);
     	}
     	     	     	if (nx == 5)
     
     { 
     	six("\nEnter First Number : ");
     	scanf("%X",&num1);
     	six("\nEnter Second Number : ");
     	scanf("%X",&num2);
     	six("\nEnter Third Number : ");
     	scanf("%X",&num3);
     	six("\nEnter Fourth Number : ");
     	scanf("%X",&num4);
     	six("\nEnter Fifth Number : ");
     	scanf("%X",&num5);
     	sux = num1+num2+num3+num4+num5;
     	six("\nResult : ");
     	printf("%X",sux);
     	}
     	
  	 }  	 

    	 
   if (menux == 1) 
    { 
    six("Decimal : ");
    printf("%d\n",o);
    	six("Hexa Decimal  : ");
    printf("%X\n",o);
    	
    	 }
    	 if (menux == 2) 
    { 
    	
    six("Octal : ");
    printf("%o\n",d);
    	six("Hexa Decimal  : ");
    printf("%X\n",d); }
     if (menux == 3) 
    { 
    six("Octal : ");
    printf("%o\n",hx);
    	six("Decimal  : ");
    printf("%d\n",hx);
   	}    
 }
