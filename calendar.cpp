#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>/*for setw*/
using namespace std;
int main()
{
	int i,j,year,dy;
	int mn;
	cout<<"Enter the year(it should be after 2000 )";
	cin>>year;
	cout<<"\nEnter the month number:";
	cin>>mn;
	int leap;
	char exit;
	do
	{
	if(year%100==0&&year%400==0)
			leap= 1;
	if(year%100!=0&&year%4==0)
			leap=1;
	else
		leap=0;
	 	
	dy=(year-1-2000)/4;
	dy=(dy+1)*2+(year-2000-dy);
	dy=dy%7-1;/*january*/
	int n=1;
	system("CLS");
	cout<<"\n"<<"year::"<<year<<"\t\t\t\t\t\t\t\t\t\t\t\t\tsho19\n";
	if(leap==0)
	{
		 if(mn==1||mn==3||mn==5||mn==7||mn==8||mn==10||mn==12)
		{
			if(mn==1)
				cout<<"\tJANUARY\n\n";
			if(mn==3)
				{
				dy=(dy+3)%7;
				cout<<"\tMARCH\n\n";
			}
			if(mn==5)
			{
				dy=(dy+8)%7;
				cout<<"\tMAY\n\n";
			}
			if(mn==7)
				{
				dy=(dy+13)%7;
				cout<<"\tJULY\n\n";}
			if(mn==8)
				{
				dy=(dy+16)%7;
			cout<<"\tAUGUST\n\n";
			}
			if(mn==10)
				{
				dy=(dy+21)%7;
				cout<<"\tOCTOBER\n\n";
			}
			if(mn==12)
				{
				dy=(dy+26)%7;
				cout<<"\tDECEMBER\n\n";
			}
			
			if(dy==0)
				dy=7;
			cout<<" S  M  T  W  T  F  S\n";		
			for(i=1;i<dy;i++)
				cout<<"   ";
			for(i=dy;i<=7;i++)
				{
				cout<<setw(2)<<n<<" ";
				n++;}
				cout<<"\n";
			for(i=1;i<=5;i++)
			{
				for(j=1;j<=7;j++)
				{
					if(n<=31)
					cout<<setw(2)<<n<<" ";
					n++;
				}
			cout<<"\n";
			}
			
		}
		else if(mn==2)
		{
			dy=(dy+3)%7;
		
			cout<<"\tFEBRUARY\n\n";
			if(dy==0)
				dy=7;
					cout<<" S  M  T  W  T  F  S\n";
			for(i=1;i<dy;i++)
				cout<<"   ";
			for(i=dy;i<=7;i++)
				{
				cout<<setw(2)<<n<<" ";
				n++;}
				cout<<"\n";
			for(i=1;i<=5;i++)
			{
				for(j=1;j<=7;j++)
				{
					if(n<=28)
					{
					cout<<setw(2)<<n<<" ";
					n++;}
				}
				cout<<"\n";
		}
	}
		else if(mn==4||mn==6||mn==9||mn==11)
	{
		
			if(mn==4)
				{
				dy=(dy+6)%7;
			cout<<"\tAPRIL\n\n";
			}
			if(mn==6)
				{
				dy=(dy+11)%7;
			cout<<"\tJUNE\n\n";
			}
			if(mn==9)
				{
				dy=(dy+19)%7;
			cout<<"\tSEPTEMBER\n\n";
			}
			if(mn==11)
				{
				dy=(dy+24)%7;
				cout<<"\tNOVEMBER\n\n";
				}
				
			if(dy==0)
				dy=7;
					cout<<" S  M  T  W  T  F  S\n";
			for(i=1;i<dy;i++)
				cout<<"   ";
			for(i=dy;i<=7;i++)
				{
				cout<<setw(2)<<n<<" ";
				n++;}
				cout<<"\n";
			for(i=1;i<=5;i++)
			{
				for(j=1;j<=7;j++)
				{
					if(n<=30)
					cout<<setw(2)<<n<<" ";
					n++;
				}
			cout<<"\n";
			}
			
		}
	}
	if(leap==1)
	{
	
		 if(mn==1||mn==3||mn==5||mn==7||mn==8||mn==10||mn==12)
		{
		
			if(mn==1)
				cout<<"\tJANUARY\n\n";
			if(mn==3)
			{
				dy=(dy+4)%7;
				cout<<"\tMARCH\n\n";
			}
			if(mn==5)
				{
				dy=(dy+9)%7;
			cout<<"\tMAY\n\n";
			}
			if(mn==7)
				{
				dy=(dy+14)%7;
				cout<<"\tJULY\n\n";
				}
			if(mn==8)
				{
				dy=(dy+17)%7;
			cout<<"\tAUGUST\n\n";
			}
			if(mn==10)
				{
				dy=(dy+22)%7;
			cout<<"\tOCTOBER\n\n";
			}
			if(mn==12)
				{
				dy=(dy+27)%7;
			cout<<"\tDECEMBER\n\n";
			}
			
			if(dy==0)
				dy=7;	
					cout<<" S  M  T  W  T  F  S\n";
			for(i=1;i<dy;i++)
				cout<<"   ";
			for(i=dy;i<=7;i++)
				{
				cout<<setw(2)<<n<<" ";
				n++;}
				cout<<"\n";
			for(i=1;i<=5;i++)
			{
				for(j=1;j<=7;j++)
				{
					if(n<=31)
					cout<<setw(2)<<n<<" ";
					n++;
				}
			cout<<"\n";
			}
			
		}
		else if(mn==2)
		{
			dy=(dy+3)%7;
			
			cout<<"\tFEBRUARY\n\n";
			if(dy==0)
				dy=7;
					cout<<" S  M  T  W  T  F  S\n";
			for(i=1;i<dy;i++)
				cout<<"   ";
			for(i=dy;i<=7;i++)
				{
				cout<<setw(2)<<n<<" ";
				n++;}
				cout<<"\n";
			for(i=1;i<=5;i++)
			{
				for(j=1;j<=7;j++)
				{
					if(n<=29)
					{
					cout<<setw(2)<<n<<" ";
					n++;}
				}
				cout<<"\n";
		}
	}
		else if(mn==4||mn==6||mn==9||mn==11)
	{
		
			if(mn==4)
			{
				dy=(dy+7)%7;
			cout<<"\tAPRIL\n\n";
			}
			if(mn==6)
				{
				dy=(dy+12)%7;
			cout<<"\tJUNE\n\n";
			}
			if(mn==9)
				{
				dy=(dy+20)%7;
			cout<<"\tSEPTEMBER\n\n";
			}
			if(mn==11)
				{
				dy=(dy+25)%7;
				cout<<"\tNOVEMBER\n\n";
		}
			if(dy==0)
				dy=7;	
					cout<<" S  M  T  W  T  F  S\n";
			for(i=1;i<dy;i++)
				cout<<"   ";
			for(i=dy;i<=7;i++)
				{
				cout<<setw(2)<<n<<" ";
				n++;}
				cout<<"\n";
			for(i=1;i<=5;i++)
			{
				for(j=1;j<=7;j++)
				{
					if(n<=30)
					cout<<setw(2)<<n<<" ";
					n++;
				}
			cout<<"\n";
			}
			
		}
	}
	cout<<"\nPress 'q' to close the screen or press 'm' to see more:";
	cin>>exit;
	if(exit=='m')
	{
		cout<<"\nEnter the year you want to see:";
		cin>>year;
		cout<<"\nEnter the month number:";
		cin>>mn;
	}
	
}
while(exit!='q');
if(exit=='q')
{
	system("CLS");
	cout<<"\t\t\t\t\t\t\tsho19\n\t     \t\t\t\t\tNIT KURUKSHETRA\n\n\n";
}
}
