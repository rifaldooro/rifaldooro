
#include <iostream>
using namespace::std;
main()
{
	int nilai['n'],temp,ketemu, cari,n, i;


   for(int a=1; a<=n; a++)
   {cout<<"Data ke-"<<a<<" : ";
   cin>>nilai[a];
   }

   cout<<"\n\nData sebelum diurutkan :"<<endl;

   for(int a=1; a<=n; a++)
   {cout<<nilai[a]<<" ";}

   for(int a=n-1; a>=1; a--)
   {for(int b=1; b<=a; b++)
   {if (nilai[b]>nilai[b+1])
   {temp=nilai[b+1];
   nilai[b+1]=nilai[b];
   nilai[b]=temp;}}}

   cout<<"\nData setelah diurutkan (dari yang terkecil) :";
   cout<<endl;
   for(int a=1; a<=n; a++)
   {cout<<nilai[a]<<" ";}
   cout<<"\n\nData setelah diurutkan (dari yang terbesar) :";
   cout<<endl;
   for (int a=n; a>=1; a--)
   {cout<<nilai[a]<<" ";}

	i=0;
   cout<<"\n\n\n bilangan yang ingin dicari :"; cin>>cari;
   ketemu=0;

   while((i<n)&&(ketemu==0))
   {
   if(nilai[i]==cari)
   	{ ketemu=1;
      cout<<"pencarian sequential "<<cari<<" Ada pada indeks ke-"<<i;}
   else
      i=i+1;
   }

   if(ketemu==1)
   {cout<<"\n\nData terdapat pada baris data";
   cout<<endl;}

   else
   cout<<"\n\nData tidak terdapat dalam baris data";
   cout<<endl;


}
