#include<iostream.h>
#include<conio.h>

void main()
{
	 clrscr();

	int *a,*b;
	cout<<"\n Enter value of first number:- ";
	cin>>*a;

	cout<<"\n Enter value of second number:- ";
	cin>>*b;

	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	
	/**temp=*a;
	*a=*b;
	*b=*temp;
	*/
    cout<<"\n\n_____________________________________________________________________________";
	    cout<<"\n\t After swaping value or first number ="<<*a<<" and of b ="<<*b<<"\n";
    cout<<"_____________________________________________________________________________";

	getch();
}
