#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int mabnaye2(int list[10])
{
	int s,number,p,n ;
	for (int i=0;i<10;i++)
    {
	   p = 1;
	   n = 0;
	   number = list[i];
	while (number !=0)
	{
		s = number % 2;
		number = number / 2;
		n = n + p * s;
		p = p * 10;
	}
    n = n + number * p;
    cout << "\n addade\t[" << list[i] << " ]\tdar mabnaye 2 mishavad : " << n;
    }
    cout << "\n";
	return 0;
}
int mabnaye8(int list[10])
{
	int s,number,p,n ;
	for (int i=0;i<10;i++)
	{
		p = 1;
		n = 0;
		number = list[i];
		while (number !=0)
		{
			s = number % 8;
			number = number / 8;
			n = n + p * s;
			p = p * 10;
		}
		n = n + number * p;
		cout << "\n addade\t[" << list[i] << " ]\tdar mabnaye 8 mishavad : " << n;
	}
	cout << "\n";
	return 0;
}
int mabnaye10(int list[10])
{
	for (int i=0;i<10;i++){
		cout << "\n addade\t[" << list[i] << " ]\tdar mabnaye 10 mishavad : " << list[i];
	}
	cout << "\n";
return 0;
}
int mabnaye16(int list[10]){
  cout << "\n";
	int number,index,s;
	char arr[10];
    for (int i=0;i<10;i++)
	{
		number = list[i];
		for(index=0;number != 0;index++)
		{
			s = number % 16;
			number = number / 16;
			if (s==10)
				arr[index]='A';
			else if (s==11)
				arr[index]='B';
			else if (s==12)
				arr[index]='C';
			else if (s==13)
				arr[index]='D';
			else if (s==14)
				arr[index]='E';
			else if (s==15)
				arr[index]='F';
			else
				arr[index]=s+48;//code ascii adad az 48 shoro mishavad ;)
		}
		cout << list[i]<< "\tdar mabnaye 16 mishavad :\t" ;
			for (int j=index-1;j>=0;j--)
				cout <<arr[j];
		cout << "\n";
	}
	return 0;
}
int main()
{
	int list[10];
	char ch;
   /*khandan az file !*/
	FILE *fp;
	fp = fopen("C:\\number.txt", "r");
	for (int i=0;i<10;i++)
		fscanf(fp,"%d",&list[i]);
	fclose(fp);

	/* menu chap mishavad */
	cout << "mabna16:(1)" << "   ,";
	cout << "mabna10:(2)" << "   ,";
	cout << "mabna8:(3) " << "   ,";
	cout << "mabna2:(4) " << "   ,";
	cout << "exit:(5)   " << "   \n";
	while(ch=getch())
	{
		cout << "mabna16:(1)" << "   ,";
		cout << "mabna10:(2)" << "   ,";
		cout << "mabna8:(3) " << "   ,";
		cout << "mabna2:(4) " << "   ,";
		cout << "exit:(5)   " << "   \n";
		if (ch=='1')
		{
			mabnaye16(list);
		}else if(ch=='2')
		{
			mabnaye10(list);
		}else if(ch=='3')
		{
			mabnaye8(list);
		}else if(ch=='4')
		{
			mabnaye2(list);
		}else if(ch=='5')
		{
			exit(1);
		}
	}
  cout << "\n";
return 0;
}