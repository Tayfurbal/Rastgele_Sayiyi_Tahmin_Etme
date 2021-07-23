#include <iostream.h>
#include <conio.h>

main ()
{
 int taban=0, tavan, tahmin, sonuc, deneme_sayisi=0;
 unsigned int rastgele;
 cout<<"0 ile kac arasinda sayi tutmami istersiniz:";
 cin>>tavan;
 randomize();
 rastgele=random(tavan);
 cout<<"Rastgele olusturulan sayi:"<<rastgele<<endl;
 do
 {
	 cout<<"Benim tahminim ";
	 tahmin=(taban+tavan)/2;
	 cout<<tahmin<<endl;
	 deneme_sayisi=deneme_sayisi+1;
	 if(rastgele>tahmin)
			{
			cout<<"daha buyuk bir sayi tahmin etmem gerekir."<<endl;
			taban=tahmin;
			}
	 if(rastgele<tahmin)
			{
			cout<<"daha kucuk bir sayi tahmin etmem gerekir."<<endl;
			tavan=tahmin;
			}
 }
 while (rastgele!=tahmin);
 cout<<"Aferin bana "<<deneme_sayisi<<" denemede buldum";

getch();
}

