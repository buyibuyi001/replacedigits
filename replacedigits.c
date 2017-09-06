#include<stdio.h>
long int replacedigits(long int orinumber,long int ndigits,long int number2)
{
	long int a,b,number,temp,mask0,mask1;
	int i;
	a=1;
	b=3;
	number=orinumber;
	mask0=0x07;
	mask1=0XFFFF-mask0;
	for (i=0;i<32-2;i++)
		{
			temp=number&mask0;
			if (temp==a)
				{
					number=number&mask1;
					number=number|b;
					i=i+2;
					a=a<<3;
					b=b<<3;
				}
			else
				{
					a=a<<1;
					b=b<<1;
				}
		}

	printf("%x   %x",orinumber,number);
	return number;
}
void main(void)
{
	replacedigits(0xFFF9,0,0);
}
