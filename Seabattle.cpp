#include<iostream>
#include<string>
#include<ctime>
#include<stdlib.h>

using namespace std;

	int i,j,a[20],b[20],z,y[20][20],f,n,s1=9,s2=9,w1=1,w2=2,w3=3,w4=3,v1=1,v2=2,v3=3,v4=3;
	int d[20],e[20],r,ni,t,u,i1,j1,i2,j2,i3,j3,ii=100,jj=100,iii=100,jjj=100,pn;
	char c[20],x[20][20],m[20][20],q='÷',k[20][20],l[20][20],o='X',p='~',h[20],nj;
	string g,ime1,ime2;

class Brodovi {
	public:
		void pocetak();
		void odabir();
		void a1();
		void a2();
		void m1();
		void m2();
		
		void jedan1();
		void dva1();
		void tri1();
		void cetiri1();
		
		void jedan2();
		void dva2();
		void tri2();
		void cetiri2();
		
		void jedan1r();
		void dva1r();
		void tri1r();
		void cetiri1r();
		
		void jedan2r();
		void dva2r();
		void tri2r();
		void cetiri2r();
		
		void faza1();
		void faza2();
		void faza3();
		
		void potopljeno();
		void pobjeda();
		void gadjanje1();
		void gadjanje2();
		void gadjanjek();
};


//uvod u igru i pravila
void Brodovi::pocetak() {
	cout <<endl;
	cout << " * Dobrodosli u igru POTAPANJE BRODOVA! *" << endl;
	cout <<endl;
	A
	cout << "Za igru u dvoje unesite broj 2, " << endl;
	cout << "a za igru protiv racunala 1! " << endl;
	cin >> ni;
	
	system("CLS");
	
	if(ni==2) {
	cout <<endl;
	cout << " * Dobrodosli u igru POTAPANJE BRODOVA! *" << endl;
	cout <<endl;
		
	cout << "Unesite svoja imena." << endl;
	cout << "1. igrac: " ;
	cin >>ime1;
	cout << "2. igrac: " ;
	cin >>ime2;
	cout <<endl;
	
	cout << "Ukoliko zelite procitati pravila igre unesite 'DA', " << endl;
	cout << "ako ste upoznati s pravilima unesite 'NE' i zapocnite s igrom." << endl;
	cin >>g;
	
	system("CLS");
	
	//pravila igre
	if((g=="DA")||(g=="da")) {
	cout << " PRAVILA IGRE!" <<endl;
	cout <<endl;
	cout <<endl;
	cout << "U plocu velicine 9x9 svaki igrac unosi ukupno 9 brodova." << endl;
	cout << "Brodovi se ne smiju dodirivati horizontalno, vertikalno, niti dijagonalno!" << endl;
	cout <<endl;
	cout << "Brodovi na raspolaganju:" << endl;
	cout << "1 brod velicine 4x1" << endl;
	cout << "2 broda velicine 3x1" << endl;
	cout << "3 broda velicine 2x1" << endl;
	cout << "3 broda velicine 1x1" << endl;
	cout <<endl;
	cout << "Igrac ne bi smio vidjeti pozicije brodova suparnickog igraca!" << endl;
	cout << "Nakon sto oba igraca unesu svoje brodove pocinje igra pogadjanja." << endl;
	cout <<endl;
	cout << "Igraci gadjaju brodove unosenjem koordinata mete" << endl;
	cout << "Ukoliko je doslo do promasaja ispisat ce se '~'(more)" << endl;
	cout << "Ukoliko je doslo do pogotka ispisat ce se 'X'(pogodak)" << endl;
	cout << "i igrac u tom slucaju moze ponovo gadjati," << endl;
	cout << "a ukoliko je brod potopljen program ce vam to javiti." << endl;
	cout << endl;
	cout << "Cilj igre je prvi potopiti sve protivnicke brodove!" << endl;
	cout << endl;
	cout << "Uzivajte u igri!" << endl;
	cout <<endl;
	
	system("pause");
	
	}
	
	}
	
	
	else {
	cout <<endl;
	cout << " * Dobrodosli u igru POTAPANJE BRODOVA! *" << endl;
	cout <<endl;
		
	cout << "Unesite svoje ime: " ;
	cin >>ime1;
	cout <<endl;
		
	cout << "Ukoliko zelite procitati pravila igre unesite 'DA', " << endl;
	cout << "ako ste upoznati s pravilima unesite 'NE' i zapocnite s igrom." << endl;
	cin >>g;
	
	system("CLS");
	
	//pravila igre
	if((g=="DA")||(g=="da")) {
	cout << " PRAVILA IGRE!" <<endl;
	cout <<endl;
	cout <<endl;
	cout << "U plocu velicine 9x9 unosite ukupno 9 brodova." << endl;
	cout << "Brodovi se ne smiju dodirivati horizontalno, vertikalno, niti dijagonalno!" << endl;
	cout <<endl;
	cout << "Brodovi na raspolaganju:" << endl;
	cout << "1 brod velicine 4x1" << endl;
	cout << "2 broda velicine 3x1" << endl;
	cout << "3 broda velicine 2x1" << endl;
	cout << "3 broda velicine 1x1" << endl;
	cout <<endl;
	cout << "Racunalo unosi brodove slucajnim odabirom." << endl;
	cout <<endl;
	cout << "Gadjate brodove unosenjem koordinata mete" << endl;
	cout << "Ukoliko je doslo do promasaja ispisat ce se '~'(more)" << endl;
	cout << "Ukoliko je doslo do pogotka ispisat ce se 'X'(pogodak)" << endl;
	cout << "i igrac u tom slucaju moze ponovo gadjati," << endl;
	cout << "a ukoliko je brod potopljen program ce vam to javiti." << endl;
	cout << endl;
	cout << "Cilj igre je prvi potopiti sve protivnicke brodove!" << endl;
	cout << endl;
	cout << "Uzivajte u igri!" << endl;
	cout <<endl;
	
	system("pause");
	
	}
	}
}



//odabir automatskog ili manualnog unosenja
void Brodovi::odabir() {
	system("CLS");
	cout <<endl;
	if(pn==1) cout << ime1;
	if(pn==2) cout << ime2;
	cout << ", zelite li sami unositi brodove ili prepustiti odabir racunalu?" << endl;
	cout <<endl;
	cout << "Za manualno postavljanje brodova unesite 'm'!" << endl;
	cout << "Za automatsko postavljanje brodova unesite 'a' " << endl;
	
	cin >> nj;	
}



// automatsko unosenje brodova 1. igrac
void Brodovi::a1() {
	
	
	Brodovi::jedan1r();
	
	f=1;
	Brodovi::dva1r();
	
	f=3;
	Brodovi::tri1r();
	
	f=6;
	Brodovi::cetiri1r();
	
	
	cout << endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(x[i][j]=='O')
		printf("%4.c",x[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	
	
	system("pause");
	
	}
	


// manualno unosenje brodova 1. igrac
void Brodovi::m1() {

	cout <<endl;
	cout << ime1 << " mozes poceti postavljati brodove!" << endl;
	cout <<endl;

	
	Brodovi::jedan1();
	
	f=1;
	Brodovi::dva1();
	
	f=3;
	Brodovi::tri1();
	
	f=6;
	Brodovi::cetiri1();
	}
		


// automatsko unosenje brodova 2. igrac
void Brodovi::a2() {
		
	Brodovi::jedan2r();
	
	f=1;
	Brodovi::dva2r();
	
	f=3;
	Brodovi::tri2r();
	
	f=6;
	Brodovi::cetiri2r();
	
	if(ni==2) {
	cout << endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(m[i][j]=='O')
		printf("%4.c",m[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	
	
	system("pause");
}
}
	
	

// manualno unosenje brodova 2. igrac
void Brodovi::m2() {
	
	cout <<endl;
	cout << ime2 << " mozes poceti postavljati brodove!" << endl;
	cout <<endl;

	
	Brodovi::jedan2();
	
	f=1;
	Brodovi::dva2();
	
	f=3;
	Brodovi::tri2();
	
	f=6;
	Brodovi::cetiri2();
	
}



// 1. brod 4x1, komp1
void Brodovi::jedan1r() {
		
		
	//pozicija broda 4x1
	{
	z=0;
	a[z]= rand() % 9+1;
	b[z]= rand() % 9+1;
	r= rand() % 2;
	if(r==0) c[z]='d';
	else c[z]='r';
	}
	
	
	//krivi upis broda 4x1 (izvan granica terena)
	if(((b[z]>6)&&(c[z]=='r'))||((a[z]>6)&&(c[z]=='d'))) {
	Brodovi::jedan1r();
	}
	
	
	//definiranje broda 4x1
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
		
		if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
		x[i][j]='O';
		x[i][j+1]='O';
		x[i][j+2]='O';
		x[i][j+3]='O';
		}
		
		if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
		x[i][j]='O';
		x[i+1][j]='O';
		x[i+2][j]='O';
		x[i+3][j]='O';
		}
		
		}
	}
	
}



// 2. i 3. brod 3x1, komp1
void Brodovi::dva1r() {
	
	
	for(z=f;z<3;z++) {
	n=z;
	
	//pozicija broda 3x1
	{
	a[z]= rand() % 9+1;
	b[z]= rand() % 9+1;
	r= rand() % 2;
	if(r==0) c[z]='d';
	else c[z]='r';
 	}
 	
 	
 	//krivi upis broda 3x1 (izvan granica terena ili dodiruje drugi brod)
 	if(((b[z]>7)&&(c[z]=='r'))||((a[z]>7)&&(c[z]=='d'))||(x[a[z]][b[z]]=='O')) {
	f=n;
	Brodovi::dva1r();
	}
	
	
	//definiranje broda 3x1
 	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
		
		if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
		x[i][j]='O';
		x[i][j+1]='O';
		x[i][j+2]='O';
		}
					
		if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
		x[i][j]='O';
		x[i+1][j]='O';
		x[i+2][j]='O';
		}
					
		}
	}
 	
	
	//krivi upis broda 3x1 (dodiruje drugi brod)
	for(z=0;z<n;z++){
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(((x[i][j]=='O')&&((x[i-1][j-1]=='O')||(x[i-1][j+1]=='O')||(x[i+1][j-1]=='O')||(x[i+1][j+1]=='O')))||
		((z==0)&&(c[z]=='d')&&((x[a[z]-1][b[z]]=='O')||(x[a[z]+4][b[z]]=='O')))||
		((z==0)&&(c[z]=='r')&&((x[a[z]][b[z]-1]=='O')||(x[a[z]][b[z]+4]=='O')))||
		
		((z==1)&&(c[z]=='d')&&((x[a[z]-1][b[z]]=='O')||(x[a[z]+3][b[z]]=='O')))||
		((z==1)&&(c[z]=='r')&&((x[a[z]][b[z]-1]=='O')||(x[a[z]][b[z]+3]=='O'))))
		{
		
		
		//ponistavanje krivo unesenog broda 3x1
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
			
			z=n;	
				
			if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]=q;
			x[i][j+1]=q;
			x[i][j+2]=q;
			}
					
			if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]=q;
			x[i+1][j]=q;
			x[i+2][j]=q;
			}
					
			}
		}
		
		
		//ponovo definiranje broda 4x1 (u slucaju preklapanja)
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
				
			z=0;
			
			if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i][j+1]='O';
			x[i][j+2]='O';
			x[i][j+3]='O';
			}
			
			if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i+1][j]='O';
			x[i+2][j]='O';
			x[i+3][j]='O';
			}
			
			}
		}
		
		
		//ponovo definiranje broda 3x1 (u slucaju preklapanja)
		if(n==2) {
		
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
				
			z=1;	
					
			if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i][j+1]='O';
			x[i][j+2]='O';
			}
						
			if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i+1][j]='O';
			x[i+2][j]='O';
			}
						
			}
		}
			
		}
		
		
		f=n;
		
		Brodovi::dva1r();
		
		}
			
	}
	}
	}

	

}

}



// 3., 4. i 5. brod 2x1, komp1
void Brodovi::tri1r() {
	
	
	for(z=f;z<6;z++) {
	n=z;
	
	//pozicija broda 2x1
	{
	a[z]= rand() % 9+1;
	b[z]= rand() % 9+1;
	r= rand() % 2;
	if(r==0) c[z]='d';
	else c[z]='r';
 	}
 	
 	
 	//krivi upis broda 2x1 (izvan granica terena ili dodiruje drugi brod)
 	if(((b[z]>8)&&(c[z]=='r'))||((a[z]>8)&&(c[z]=='d'))||(x[a[z]][b[z]]=='O')) {
	f=n;
	Brodovi::tri1r();
	}
	
	
	//definiranje broda 2x1
 	for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
				
			if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i][j+1]='O';
			}
					
			if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i+1][j]='O';
			}
					
			}
		}
 	
 	
 	//krivi upis broda 2x1 (dodiruje drugi brod)
	for(z=0;z<n;z++){
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(((x[i][j]=='O')&&((x[i-1][j-1]=='O')||(x[i-1][j+1]=='O')||(x[i+1][j-1]=='O')||(x[i+1][j+1]=='O')))||
		((z==0)&&(c[z]=='d')&&((x[a[z]-1][b[z]]=='O')||(x[a[z]+4][b[z]]=='O')))||
		((z==0)&&(c[z]=='r')&&((x[a[z]][b[z]-1]=='O')||(x[a[z]][b[z]+4]=='O')))||
		
		(((z==1)||(z==2))&&(c[z]=='d')&&((x[a[z]-1][b[z]]=='O')||(x[a[z]+3][b[z]]=='O')))||
		(((z==1)||(z==2))&&(c[z]=='r')&&((x[a[z]][b[z]-1]=='O')||(x[a[z]][b[z]+3]=='O')))||
		
		(((z==3)||(z==4))&&(c[z]=='d')&&((x[a[z]-1][b[z]]=='O')||(x[a[z]+2][b[z]]=='O')))||
		(((z==3)||(z==4))&&(c[z]=='r')&&((x[a[z]][b[z]-1]=='O')||(x[a[z]][b[z]+2]=='O'))))
		{
	
		
		//ponistavanje krivo unesenog broda 2x1
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
			
			z=n;	
				
			if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]=q;
			x[i][j+1]=q;
			}
					
			if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]=q;
			x[i+1][j]=q;
			}
					
			}
		}
		
		
		//ponovo definiranje broda 4x1 (u slucaju preklapanja)
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
				
			z=0;
			
			if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i][j+1]='O';
			x[i][j+2]='O';
			x[i][j+3]='O';
			}
			
			if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i+1][j]='O';
			x[i+2][j]='O';
			x[i+3][j]='O';
			}
			
			}
		}
		
		
		//ponovo definiranje brodova 3x1 (u slucaju  preklapanja)
		for(z=1;z<3;z++) {
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
			
			if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i][j+1]='O';
			x[i][j+2]='O';
			}
						
			if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i+1][j]='O';
			x[i+2][j]='O';
			}
						
			}
		}
			
		}
		
		
		//ponovo definiranje brodova 2x1 (u slucaju preklapanja)
		for(z=3;z<n;z++) {
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
				
			if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i][j+1]='O';
			}
						
			if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i+1][j]='O';
			}
						
			}
		}
			
		}
		
		f=n;
		
		Brodovi::tri1r();
	
		}
		
		
	}
	}
	}
	
	

}

}



// 6., 7. i 8. brod 1x1, komp1
void Brodovi::cetiri1r() {
	
	
	for(z=f;z<9;z++) {
	n=z;
	
	//pozicija broda 1x1
	{
	a[z]= rand() % 9+1;
	b[z]= rand() % 9+1;
 	}
 	
 	
 	//krivi upis broda 1x1 (polozaj broda je tocno na drugom brodu)
	if(x[a[z]][b[z]]=='O'){
	f=n;
	Brodovi::cetiri1r();
	}
 	
 			
	//definiranje broda 1x1
 	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
		
		if((a[z]==i)&&(b[z]==j))
		x[i][j]='O';
		
		}
	}
 	
	
	
	//krivi upis broda 1x1 (dodiruje drugi brod)
	for(z=0;z<n;z++){
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(((x[i][j]=='O')&&((x[i-1][j-1]=='O')||(x[i-1][j+1]=='O')||(x[i+1][j-1]=='O')||(x[i+1][j+1]=='O')))||
		((z==0)&&(c[z]=='d')&&((x[a[z]-1][b[z]]=='O')||(x[a[z]+4][b[z]]=='O')))||
		((z==0)&&(c[z]=='r')&&((x[a[z]][b[z]-1]=='O')||(x[a[z]][b[z]+4]=='O')))||
		
		(((z==1)||(z==2))&&(c[z]=='d')&&((x[a[z]-1][b[z]]=='O')||(x[a[z]+3][b[z]]=='O')))||
		(((z==1)||(z==2))&&(c[z]=='r')&&((x[a[z]][b[z]-1]=='O')||(x[a[z]][b[z]+3]=='O')))||
		
		(((z==3)||(z==4)||(z==5))&&(c[z]=='d')&&((x[a[z]-1][b[z]]=='O')||(x[a[z]+2][b[z]]=='O')))||
		(((z==3)||(z==4)||(z==5))&&(c[z]=='r')&&((x[a[z]][b[z]-1]=='O')||(x[a[z]][b[z]+2]=='O')))||
		
		(((z==6)||(z==7))&&((x[a[z]-1][b[z]]=='O')||(x[a[z]][b[z]-1]=='O')||(x[a[z]][b[z]+1]=='O')||(x[a[z]+1][b[z]]=='O'))))
		{
		
		//ponistavanje krivo unesenog broda 1x1
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
			
			z=n;	
				
			if((a[z]==i)&&(b[z]==j)) {
			x[i][j]=q;
			}
					
			}
		}
		
		f=n;
		
		Brodovi::cetiri1r();
		
		}
		
		
	}
	}
	}
	


}

}



// 1. brod 4x1, 1. igrac
void Brodovi::jedan1() {
	
	
	//pocetna ploca 1
	cout <<endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
				
		if(i==0) 
		printf("%4.d",j); 
		else 
		if(j==0) 
		printf("%4.d",i); 
		else 
		printf("%4.c",q);
		}
	cout <<endl;
	cout <<endl;
	}
		
		
	//pozicija broda 4x1
	{
	z=0;
	cout <<endl;
	cout << "Unesite koordinate pramca broda 4x1" << endl;
	cin >> a[z];
	cin >> b[z];
	cout << "Unesite usmjerenje broda (u-up, d-down, l-left, r-right)" << endl;
	cin >> c[z];
	
	system("CLS");
	}
	
	
	//krivi upis broda 4x1 (izvan granica terena)
	if(((a[z]<4)&&(c[z]=='u'))||((b[z]<4)&&(c[z]=='l'))||((b[z]>6)&&(c[z]=='r'))||((a[z]>6)&&(c[z]=='d'))||
	(a[z]>9)||(a[z]<1)||(b[z]>9)||(b[z]<1)) {
	cout << "Nije moguce postaviti ovakav brod (nalazi se izvan terena), pokusajte ponovo" << endl;
	cout <<endl;
	
	Brodovi::jedan1();
	}
	
	
	//krivi upis broda 4x1 (neodredjeno usmjerenje)
	else if((c[z]!='u')&&(c[z]!='d')&&(c[z]!='l')&&(c[z]!='r')) {
	cout << "Nije moguce postaviti ovakav brod (usmjerenje je netocno), pokusajte ponovo" << endl;
	cout <<endl;
	
	Brodovi::jedan1();
	}
	
	
	//definiranje broda 4x1
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
		
		if((c[z]=='u')&&(a[z]==i)&&(b[z]==j)) {
		x[i-3][j]='O';
		x[i-2][j]='O';
		x[i-1][j]='O';
		x[i][j]='O';
		}
		
		if((c[z]=='l')&&(a[z]==i)&&(b[z]==j)) {
		x[i][j-3]='O';
		x[i][j-2]='O';
		x[i][j-1]='O';
		x[i][j]='O';
		}
		
		if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
		x[i][j]='O';
		x[i][j+1]='O';
		x[i][j+2]='O';
		x[i][j+3]='O';
		}
		
		if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
		x[i][j]='O';
		x[i+1][j]='O';
		x[i+2][j]='O';
		x[i+3][j]='O';
		}
		
		}
	}
	
}



// 2. i 3. brod 3x1, 1. igrac
void Brodovi::dva1() {
	
	
	//pocetna ploca 2
	cout << endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(x[i][j]=='O')
		printf("%4.c",x[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	
	
	
	for(z=f;z<3;z++) {
	n=z;
	
	//pozicija broda 3x1
	{
	cout <<endl;
	cout << "Unesite koordinate pramca " << z << ". od 2 broda 3x1" << endl;
	cin >> a[z];
	cin >> b[z];
	cout << "Unesite usmjerenje broda (u-up, d-down, l-left, r-right)" << endl;
 	cin >> c[z];
 	
 	system("CLS");
 	}
 	
 	
 	//krivi upis broda 3x1 (izvan granica terena)
 	if(((a[z]<3)&&(c[z]=='u'))||((b[z]<3)&&(c[z]=='l'))||((b[z]>7)&&(c[z]=='r'))||((a[z]>7)&&(c[z]=='d'))||
	(a[z]>9)||(a[z]<1)||(b[z]>9)||(b[z]<1)) {
	cout << "Nije moguce postaviti ovakav brod (nalazi se izvan terena), pokusajte ponovo" << endl;
	cout <<endl;
	cout << "z " << z << endl;
	cout << "f " << f << endl;
	cout << "n " << n << endl;
	
	f=n;
	
	cout <<endl;
	cout << z << endl;
	cout << f << endl;
	cout << n << endl;
	
	Brodovi::dva1();
	}
		
	
	//krivi upis broda 3x1 (neodredjeno usmjerenje)
	else if((c[z]!='u')&&(c[z]!='d')&&(c[z]!='l')&&(c[z]!='r')) {
	cout << "Nije moguce postaviti ovakav brod (usmjerenje je netocno), pokusajte ponovo" << endl;
	cout <<endl;
	
	f=n;
	
	Brodovi::dva1();
	}
	
	
	//krivi upis broda 3x1 (polozaj broda je tocno na drugom brodu)
	else if(x[a[z]][b[z]]=='O'){
	cout << "Nije moguce postaviti ovakav brod (brodovi se dodiruju), pokusajte ponovo" << endl;
	cout <<endl;
		
	f=n;

	Brodovi::dva1();
	}
	
	
	//definiranje broda 3x1
 	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
				
		if((c[z]=='u')&&(a[z]==i)&&(b[z]==j)) {
		x[i-2][j]='O';
		x[i-1][j]='O';
		x[i][j]='O';
		}
					
		if((c[z]=='l')&&(a[z]==i)&&(b[z]==j)) {
		x[i][j-2]='O';
		x[i][j-1]='O';
		x[i][j]='O';
		}
				
		if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
		x[i][j]='O';
		x[i][j+1]='O';
		x[i][j+2]='O';
		}
					
		if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
		x[i][j]='O';
		x[i+1][j]='O';
		x[i+2][j]='O';
		}
					
		}
	}
 	
	
	//krivi upis broda 3x1 (dodiruje drugi brod)
	for(z=0;z<n;z++){
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(((x[i][j]=='O')&&((x[i-1][j-1]=='O')||(x[i-1][j+1]=='O')||(x[i+1][j-1]=='O')||(x[i+1][j+1]=='O')))||
		((z==0)&&(c[z]=='d')&&((x[a[z]-1][b[z]]=='O')||(x[a[z]+4][b[z]]=='O')))||
		((z==0)&&(c[z]=='u')&&((x[a[z]+1][b[z]]=='O')||(x[a[z]-4][b[z]]=='O')))||
		((z==0)&&(c[z]=='l')&&((x[a[z]][b[z]+1]=='O')||(x[a[z]][b[z]-4]=='O')))||
		((z==0)&&(c[z]=='r')&&((x[a[z]][b[z]-1]=='O')||(x[a[z]][b[z]+4]=='O')))||
		
		((z==1)&&(c[z]=='d')&&((x[a[z]-1][b[z]]=='O')||(x[a[z]+3][b[z]]=='O')))||
		((z==1)&&(c[z]=='u')&&((x[a[z]+1][b[z]]=='O')||(x[a[z]-3][b[z]]=='O')))||
		((z==1)&&(c[z]=='l')&&((x[a[z]][b[z]+1]=='O')||(x[a[z]][b[z]-3]=='O')))||
		((z==1)&&(c[z]=='r')&&((x[a[z]][b[z]-1]=='O')||(x[a[z]][b[z]+3]=='O'))))
		{
		
		cout << "Nije moguce postaviti ovakav brod (brodovi se dodiruju), pokusajte ponovo" << endl;
		cout <<endl;
		
		//ponistavanje krivo unesenog broda 3x1
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
			
			z=n;	
				
			if((c[z]=='u')&&(a[z]==i)&&(b[z]==j)) {
			x[i-2][j]=q;
			x[i-1][j]=q;
			x[i][j]=q;
			}
					
			if((c[z]=='l')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j-2]=q;
			x[i][j-1]=q;
			x[i][j]=q;
			}
				
			if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]=q;
			x[i][j+1]=q;
			x[i][j+2]=q;
			}
					
			if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]=q;
			x[i+1][j]=q;
			x[i+2][j]=q;
			}
					
			}
		}
		
		
		//ponovo definiranje broda 4x1 (u slucaju preklapanja)
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
				
			z=0;
			
			if((c[z]=='u')&&(a[z]==i)&&(b[z]==j)) {
			x[i-3][j]='O';
			x[i-2][j]='O';
			x[i-1][j]='O';
			x[i][j]='O';
			}
			
			if((c[z]=='l')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j-3]='O';
			x[i][j-2]='O';
			x[i][j-1]='O';
			x[i][j]='O';
			}
			
			if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i][j+1]='O';
			x[i][j+2]='O';
			x[i][j+3]='O';
			}
			
			if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i+1][j]='O';
			x[i+2][j]='O';
			x[i+3][j]='O';
			}
			
			}
		}
		
		
		//ponovo definiranje broda 3x1 (u slucaju preklapanja)
		if(n==2) {
		
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
				
			z=1;	
					
			if((c[z]=='u')&&(a[z]==i)&&(b[z]==j)) {
			x[i-2][j]='O';
			x[i-1][j]='O';
			x[i][j]='O';
			}
						
			if((c[z]=='l')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j-2]='O';
			x[i][j-1]='O';
			x[i][j]='O';
			}
					
			if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i][j+1]='O';
			x[i][j+2]='O';
			}
						
			if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i+1][j]='O';
			x[i+2][j]='O';
			}
						
			}
		}
			
		}
		
		
		f=n;
		
		Brodovi::dva1();
		
		}
			
	}
	}
	}

	
	//ispis brodova
	cout << endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(x[i][j]=='O')
		printf("%4.c",x[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	

}
system("CLS");
}



// 3., 4. i 5. brod 2x1, 1. igrac
void Brodovi::tri1() {
	
	
	//pocetna ploca 3
	cout << endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(x[i][j]=='O')
		printf("%4.c",x[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	
	
	
	for(z=f;z<6;z++) {
	n=z;
	
	//pozicija broda 2x1
	{
	cout <<endl;
	cout << "Unesite koordinate pramca " << z-2 << ". od 3 broda 2x1" << endl;
	cin >> a[z];
	cin >> b[z];
	cout << "Unesite usmjerenje broda (u-up, d-down, l-left, r-right)" << endl;
 	cin >> c[z];
 	
 	system("CLS");
 	}
 	
 	
 	//krivi upis broda 2x1 (izvan granica terena)
 	if(((a[z]<2)&&(c[z]=='u'))||((b[z]<2)&&(c[z]=='l'))||((b[z]>8)&&(c[z]=='r'))||((a[z]>8)&&(c[z]=='d'))||
	(a[z]>9)||(a[z]<1)||(b[z]>9)||(b[z]<1)) {
	cout << "Nije moguce postaviti ovakav brod (nalazi se izvan terena), pokusajte ponovo" << endl;
	cout <<endl;
	
	f=n;
	
	Brodovi::tri1();
	}
	
	
	//krivi upis smjera broda 2x1 (neodredjeno usmjerenje)
	else if((c[z]!='u')&&(c[z]!='d')&&(c[z]!='l')&&(c[z]!='r')) {
	cout << "Nije moguce postaviti ovakav brod (usmjerenje je netocno), pokusajte ponovo" << endl;
	cout <<endl;
	
	f=n;
	
	Brodovi::tri1();
	}
		
	
	//krivi upis broda 2x1 (polozaj broda je tocno na drugom brodu)
	else if(x[a[z]][b[z]]=='O'){
	cout << "Nije moguce postaviti ovakav brod (brodovi se dodiruju), pokusajte ponovo" << endl;
	cout <<endl;
	
	f=n;
	
	Brodovi::tri1();
	}
	
	
	//definiranje broda 2x1
 	for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
				
			if((c[z]=='u')&&(a[z]==i)&&(b[z]==j)) {
			x[i-1][j]='O';
			x[i][j]='O';
			}
					
			if((c[z]=='l')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j-1]='O';
			x[i][j]='O';
			}
				
			if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i][j+1]='O';
			}
					
			if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i+1][j]='O';
			}
					
			}
		}
 	
 	
 	//krivi upis broda 2x1 (dodiruje drugi brod)
	for(z=0;z<n;z++){
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(((x[i][j]=='O')&&((x[i-1][j-1]=='O')||(x[i-1][j+1]=='O')||(x[i+1][j-1]=='O')||(x[i+1][j+1]=='O')))||
		((z==0)&&(c[z]=='d')&&((x[a[z]-1][b[z]]=='O')||(x[a[z]+4][b[z]]=='O')))||
		((z==0)&&(c[z]=='u')&&((x[a[z]+1][b[z]]=='O')||(x[a[z]-4][b[z]]=='O')))||
		((z==0)&&(c[z]=='l')&&((x[a[z]][b[z]+1]=='O')||(x[a[z]][b[z]-4]=='O')))||
		((z==0)&&(c[z]=='r')&&((x[a[z]][b[z]-1]=='O')||(x[a[z]][b[z]+4]=='O')))||
		
		(((z==1)||(z==2))&&(c[z]=='d')&&((x[a[z]-1][b[z]]=='O')||(x[a[z]+3][b[z]]=='O')))||
		(((z==1)||(z==2))&&(c[z]=='u')&&((x[a[z]+1][b[z]]=='O')||(x[a[z]-3][b[z]]=='O')))||
		(((z==1)||(z==2))&&(c[z]=='l')&&((x[a[z]][b[z]+1]=='O')||(x[a[z]][b[z]-3]=='O')))||
		(((z==1)||(z==2))&&(c[z]=='r')&&((x[a[z]][b[z]-1]=='O')||(x[a[z]][b[z]+3]=='O')))||
		
		(((z==3)||(z==4))&&(c[z]=='d')&&((x[a[z]-1][b[z]]=='O')||(x[a[z]+2][b[z]]=='O')))||
		(((z==3)||(z==4))&&(c[z]=='u')&&((x[a[z]+1][b[z]]=='O')||(x[a[z]-2][b[z]]=='O')))||
		(((z==3)||(z==4))&&(c[z]=='l')&&((x[a[z]][b[z]+1]=='O')||(x[a[z]][b[z]-2]=='O')))||
		(((z==3)||(z==4))&&(c[z]=='r')&&((x[a[z]][b[z]-1]=='O')||(x[a[z]][b[z]+2]=='O'))))
		{
	
		cout << "Nije moguce postaviti ovakav brod (brodovi se dodiruju), pokusajte ponovo" << endl;
		cout <<endl;
		cout <<endl;
		
		//ponistavanje krivo unesenog broda 2x1
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
			
			z=n;	
				
			if((c[z]=='u')&&(a[z]==i)&&(b[z]==j)) {
			x[i-1][j]=q;
			x[i][j]=q;
			}
					
			if((c[z]=='l')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j-1]=q;
			x[i][j]=q;
			}
				
			if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]=q;
			x[i][j+1]=q;
			}
					
			if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]=q;
			x[i+1][j]=q;
			}
					
			}
		}
		
		
		//ponovo definiranje broda 4x1 (u slucaju preklapanja)
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
				
			z=0;
			
			if((c[z]=='u')&&(a[z]==i)&&(b[z]==j)) {
			x[i-3][j]='O';
			x[i-2][j]='O';
			x[i-1][j]='O';
			x[i][j]='O';
			}
			
			if((c[z]=='l')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j-3]='O';
			x[i][j-2]='O';
			x[i][j-1]='O';
			x[i][j]='O';
			}
			
			if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i][j+1]='O';
			x[i][j+2]='O';
			x[i][j+3]='O';
			}
			
			if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i+1][j]='O';
			x[i+2][j]='O';
			x[i+3][j]='O';
			}
			
			}
		}
		
		
		//ponovo definiranje brodova 3x1 (u slucaju  preklapanja)
		for(z=1;z<3;z++) {
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
					
			if((c[z]=='u')&&(a[z]==i)&&(b[z]==j)) {
			x[i-2][j]='O';
			x[i-1][j]='O';
			x[i][j]='O';
			}
						
			if((c[z]=='l')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j-2]='O';
			x[i][j-1]='O';
			x[i][j]='O';
			}
					
			if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i][j+1]='O';
			x[i][j+2]='O';
			}
						
			if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i+1][j]='O';
			x[i+2][j]='O';
			}
						
			}
		}
			
		}
		
		
		//ponovo definiranje brodova 2x1 (u slucaju preklapanja)
		for(z=3;z<n;z++) {
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
					
			if((c[z]=='u')&&(a[z]==i)&&(b[z]==j)) {
			x[i-1][j]='O';
			x[i][j]='O';
			}
						
			if((c[z]=='l')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j-1]='O';
			x[i][j]='O';
			}
					
			if((c[z]=='r')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i][j+1]='O';
			}
						
			if((c[z]=='d')&&(a[z]==i)&&(b[z]==j)) {
			x[i][j]='O';
			x[i+1][j]='O';
			}
						
			}
		}
			
		}
		
		f=n;
		
		Brodovi::tri1();
	
		}
		
		
	}
	}
	}
	
	
	//ispis brodova
	cout <<endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(x[i][j]=='O')
		printf("%4.c",x[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	

}
system("CLS");
}



// 6., 7. i 8. brod 1x1, 1. igrac
void Brodovi::cetiri1() {
	
	
	//pocetna ploca 4
	cout << endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(x[i][j]=='O')
		printf("%4.c",x[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	
	
	
	for(z=f;z<9;z++) {
	n=z;
	
	//pozicija broda 1x1
	{
	cout <<endl;
	cout << "Unesite koordinate " << z-5 << ".od 3 broda 1x1" << endl;
	cin >> a[z];
	cin >> b[z];
	 	
 	system("CLS");
 	}
 	
 	
 	//krivi upis broda 1x1 (izvan granica terena)
 	if((a[z]>9)||(a[z]<1)||(b[z]>9)||(b[z]<1)) {
	cout << "Nije moguce postaviti ovakav brod (nalazi se izvan terena), pokusajte ponovo" << endl;
	cout <<endl;
	
	f=n;
	
	Brodovi::cetiri1();
	}
 	
 	
 	//krivi upis broda 1x1 (polozaj broda je tocno na drugom brodu)
	else if(x[a[z]][b[z]]=='O') {
	cout << "Nije moguce postaviti ovakav brod (brodovi se dodiruju), pokusajte ponovo" << endl;
	cout <<endl;
	f=n;
	
	Brodovi::cetiri1();
	}
 	
 			
	//definiranje broda 1x1
 	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
		
		if((a[z]==i)&&(b[z]==j))
		x[i][j]='O';
		
		}
	}
 	
	
	
	//krivi upis broda 1x1 (dodiruje drugi brod)
	for(z=0;z<n;z++){
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(((x[i][j]=='O')&&((x[i-1][j-1]=='O')||(x[i-1][j+1]=='O')||(x[i+1][j-1]=='O')||(x[i+1][j+1]=='O')))||
		((z==0)&&(c[z]=='d')&&((x[a[z]-1][b[z]]=='O')||(x[a[z]+4][b[z]]=='O')))||
		((z==0)&&(c[z]=='u')&&((x[a[z]+1][b[z]]=='O')||(x[a[z]-4][b[z]]=='O')))||
		((z==0)&&(c[z]=='l')&&((x[a[z]][b[z]+1]=='O')||(x[a[z]][b[z]-4]=='O')))||
		((z==0)&&(c[z]=='r')&&((x[a[z]][b[z]-1]=='O')||(x[a[z]][b[z]+4]=='O')))||
		
		(((z==1)||(z==2))&&(c[z]=='d')&&((x[a[z]-1][b[z]]=='O')||(x[a[z]+3][b[z]]=='O')))||
		(((z==1)||(z==2))&&(c[z]=='u')&&((x[a[z]+1][b[z]]=='O')||(x[a[z]-3][b[z]]=='O')))||
		(((z==1)||(z==2))&&(c[z]=='l')&&((x[a[z]][b[z]+1]=='O')||(x[a[z]][b[z]-3]=='O')))||
		(((z==1)||(z==2))&&(c[z]=='r')&&((x[a[z]][b[z]-1]=='O')||(x[a[z]][b[z]+3]=='O')))||
		
		(((z==3)||(z==4)||(z==5))&&(c[z]=='d')&&((x[a[z]-1][b[z]]=='O')||(x[a[z]+2][b[z]]=='O')))||
		(((z==3)||(z==4)||(z==5))&&(c[z]=='u')&&((x[a[z]+1][b[z]]=='O')||(x[a[z]-2][b[z]]=='O')))||
		(((z==3)||(z==4)||(z==5))&&(c[z]=='l')&&((x[a[z]][b[z]+1]=='O')||(x[a[z]][b[z]-2]=='O')))||
		(((z==3)||(z==4)||(z==5))&&(c[z]=='r')&&((x[a[z]][b[z]-1]=='O')||(x[a[z]][b[z]+2]=='O')))||
		
		(((z==6)||(z==7))&&((x[a[z]-1][b[z]]=='O')||(x[a[z]][b[z]-1]=='O')||(x[a[z]][b[z]+1]=='O')||(x[a[z]+1][b[z]]=='O'))))
		{
	
		cout << "Nije moguce postaviti ovakav brod (brodovi se dodiruju), pokusajte ponovo" << endl;
		cout <<endl;
		
		//ponistavanje krivo unesenog broda 1x1
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
			
			z=n;	
				
			if((a[z]==i)&&(b[z]==j)) {
			x[i][j]=q;
			}
					
			}
		}
		
		f=n;
		
		Brodovi::cetiri1();
		
		}
		
		
	}
	}
	}
	
	//ispis brodova
	cout <<endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(x[i][j]=='O')
		printf("%4.c",x[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	

}

}



// 1. brod 4x1, komp2
void Brodovi::jedan2r() {
		
		
	//pozicija broda 4x1
	{
	z=0;
	d[z]= rand() % 9+1;
	e[z]= rand() % 9+1;
	r= rand() % 2;
	if(r==0) h[z]='d';
	else h[z]='r';
	}
	
	
	//krivi upis broda 4x1 (izvan granica terena)
	if(((e[z]>6)&&(h[z]=='r'))||((d[z]>6)&&(h[z]=='d'))) {
	Brodovi::jedan2r();
	}
	
	
	//definiranje broda 4x1
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
		
		if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
		m[i][j]='O';
		m[i][j+1]='O';
		m[i][j+2]='O';
		m[i][j+3]='O';
		}
		
		if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
		m[i][j]='O';
		m[i+1][j]='O';
		m[i+2][j]='O';
		m[i+3][j]='O';
		}
		
		}
	}
	
}



// 2. i 3. brod 3x1, komp2
void Brodovi::dva2r() {
	
	
	for(z=f;z<3;z++) {
	n=z;
	
	//pozicija broda 3x1
	{
	d[z]= rand() % 9+1;
	e[z]= rand() % 9+1;
	r= rand() % 2;
	if(r==0) h[z]='d';
	else h[z]='r';
 	}
 	
 	
 	//krivi upis broda 3x1 (izvan granica terena ili dodiruje drugi brod)
 	if(((e[z]>7)&&(h[z]=='r'))||((d[z]>7)&&(h[z]=='d'))||(m[d[z]][e[z]]=='O')) {
	f=n;
	Brodovi::dva2r();
	}
	
	
	//definiranje broda 3x1
 	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
		
		if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
		m[i][j]='O';
		m[i][j+1]='O';
		m[i][j+2]='O';
		}
					
		if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
		m[i][j]='O';
		m[i+1][j]='O';
		m[i+2][j]='O';
		}
					
		}
	}
 	
	
	//krivi upis broda 3x1 (dodiruje drugi brod)
	for(z=0;z<n;z++){
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(((m[i][j]=='O')&&((m[i-1][j-1]=='O')||(m[i-1][j+1]=='O')||(m[i+1][j-1]=='O')||(m[i+1][j+1]=='O')))||
		((z==0)&&(h[z]=='d')&&((m[d[z]-1][e[z]]=='O')||(m[d[z]+4][e[z]]=='O')))||
		((z==0)&&(h[z]=='r')&&((m[d[z]][e[z]-1]=='O')||(m[d[z]][e[z]+4]=='O')))||
		
		((z==1)&&(h[z]=='d')&&((m[d[z]-1][e[z]]=='O')||(m[d[z]+3][e[z]]=='O')))||
		((z==1)&&(h[z]=='r')&&((m[d[z]][e[z]-1]=='O')||(m[d[z]][e[z]+3]=='O'))))
		{
		
		
		//ponistavanje krivo unesenog broda 3x1
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
			
			z=n;	
				
			if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]=q;
			m[i][j+1]=q;
			m[i][j+2]=q;
			}
					
			if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]=q;
			m[i+1][j]=q;
			m[i+2][j]=q;
			}
					
			}
		}
		
		
		//ponovo definiranje broda 4x1 (u slucaju preklapanja)
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
				
			z=0;
			
			if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i][j+1]='O';
			m[i][j+2]='O';
			m[i][j+3]='O';
			}
			
			if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i+1][j]='O';
			m[i+2][j]='O';
			m[i+3][j]='O';
			}
			
			}
		}
		
		
		//ponovo definiranje broda 3x1 (u slucaju preklapanja)
		if(n==2) {
		
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
				
			z=1;	
					
			if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i][j+1]='O';
			m[i][j+2]='O';
			}
						
			if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i+1][j]='O';
			m[i+2][j]='O';
			}
						
			}
		}
			
		}
		
		
		f=n;
		
		Brodovi::dva2r();
		
		}
			
	}
	}
	}

	

}

}



// 3., 4. i 5. brod 2x1, komp2
void Brodovi::tri2r() {
	
	
	for(z=f;z<6;z++) {
	n=z;
	
	//pozicija broda 2x1
	{
	d[z]= rand() % 9+1;
	e[z]= rand() % 9+1;
	r= rand() % 2;
	if(r==0) h[z]='d';
	else h[z]='r';
 	}
 	
 	
 	//krivi upis broda 2x1 (izvan granica terena ili dodiruje drugi brod)
 	if(((e[z]>8)&&(h[z]=='r'))||((d[z]>8)&&(h[z]=='d'))||(m[d[z]][e[z]]=='O')) {
	f=n;
	Brodovi::tri2r();
	}
	
	
	//definiranje broda 2x1
 	for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
				
			if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i][j+1]='O';
			}
					
			if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i+1][j]='O';
			}
					
			}
		}
 	
 	
 	//krivi upis broda 2x1 (dodiruje drugi brod)
	for(z=0;z<n;z++){
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(((m[i][j]=='O')&&((m[i-1][j-1]=='O')||(m[i-1][j+1]=='O')||(m[i+1][j-1]=='O')||(m[i+1][j+1]=='O')))||
		((z==0)&&(h[z]=='d')&&((m[d[z]-1][e[z]]=='O')||(m[d[z]+4][e[z]]=='O')))||
		((z==0)&&(h[z]=='r')&&((m[d[z]][e[z]-1]=='O')||(m[d[z]][e[z]+4]=='O')))||
		
		(((z==1)||(z==2))&&(h[z]=='d')&&((m[d[z]-1][e[z]]=='O')||(m[d[z]+3][e[z]]=='O')))||
		(((z==1)||(z==2))&&(h[z]=='r')&&((m[d[z]][e[z]-1]=='O')||(m[d[z]][e[z]+3]=='O')))||
		
		(((z==3)||(z==4))&&(h[z]=='d')&&((m[d[z]-1][e[z]]=='O')||(m[d[z]+2][e[z]]=='O')))||
		(((z==3)||(z==4))&&(h[z]=='r')&&((m[d[z]][e[z]-1]=='O')||(m[d[z]][e[z]+2]=='O'))))
		{
	
		
		//ponistavanje krivo unesenog broda 2x1
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
			
			z=n;	
				
			if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]=q;
			m[i][j+1]=q;
			}
					
			if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]=q;
			m[i+1][j]=q;
			}
					
			}
		}
		
		
		//ponovo definiranje broda 4x1 (u slucaju preklapanja)
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
				
			z=0;
			
			if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i][j+1]='O';
			m[i][j+2]='O';
			m[i][j+3]='O';
			}
			
			if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i+1][j]='O';
			m[i+2][j]='O';
			m[i+3][j]='O';
			}
			
			}
		}
		
		
		//ponovo definiranje brodova 3x1 (u slucaju  preklapanja)
		for(z=1;z<3;z++) {
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
			
			if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i][j+1]='O';
			m[i][j+2]='O';
			}
						
			if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i+1][j]='O';
			m[i+2][j]='O';
			}
						
			}
		}
			
		}
		
		
		//ponovo definiranje brodova 2x1 (u slucaju preklapanja)
		for(z=3;z<n;z++) {
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
				
			if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i][j+1]='O';
			}
						
			if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i+1][j]='O';
			}
						
			}
		}
			
		}
		
		f=n;
		
		Brodovi::tri2r();
	
		}
		
		
	}
	}
	}
	
	

}

}



// 6., 7. i 8. brod 1x1, komp2
void Brodovi::cetiri2r() {
	
	
	for(z=f;z<9;z++) {
	n=z;
	
	//pozicija broda 1x1
	{
	d[z]= rand() % 9+1;
	e[z]= rand() % 9+1;
 	}
 	
 	
 	//krivi upis broda 1x1 (polozaj broda je tocno na drugom brodu)
	if(m[d[z]][e[z]]=='O'){
	f=n;
	Brodovi::cetiri2r();
	}
 	
 			
	//definiranje broda 1x1
 	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
		
		if((d[z]==i)&&(e[z]==j))
		m[i][j]='O';
		
		}
	}
 	
	
	
	//krivi upis broda 1x1 (dodiruje drugi brod)
	for(z=0;z<n;z++){
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(((m[i][j]=='O')&&((m[i-1][j-1]=='O')||(m[i-1][j+1]=='O')||(m[i+1][j-1]=='O')||(m[i+1][j+1]=='O')))||
		((z==0)&&(h[z]=='d')&&((m[d[z]-1][e[z]]=='O')||(m[d[z]+4][e[z]]=='O')))||
		((z==0)&&(h[z]=='r')&&((m[d[z]][e[z]-1]=='O')||(m[d[z]][e[z]+4]=='O')))||
		
		(((z==1)||(z==2))&&(h[z]=='d')&&((m[d[z]-1][e[z]]=='O')||(m[d[z]+3][e[z]]=='O')))||
		(((z==1)||(z==2))&&(h[z]=='r')&&((m[d[z]][e[z]-1]=='O')||(m[d[z]][e[z]+3]=='O')))||
		
		(((z==3)||(z==4)||(z==5))&&(h[z]=='d')&&((m[d[z]-1][e[z]]=='O')||(m[d[z]+2][e[z]]=='O')))||
		(((z==3)||(z==4)||(z==5))&&(h[z]=='r')&&((m[d[z]][e[z]-1]=='O')||(m[d[z]][e[z]+2]=='O')))||
		
		(((z==6)||(z==7))&&((m[d[z]-1][e[z]]=='O')||(m[d[z]][e[z]-1]=='O')||(m[d[z]][e[z]+1]=='O')||(m[d[z]+1][e[z]]=='O'))))
		{
		
		//ponistavanje krivo unesenog broda 1x1
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
			
			z=n;	
				
			if((d[z]==i)&&(e[z]==j)) {
			m[i][j]=q;
			}
					
			}
		}
		
		f=n;
		
		Brodovi::cetiri2r();
		
		}
		
		
	}
	}
	}
	


}

}



// 1. brod 4x1, 2. igrac
void Brodovi::jedan2() {
	
	
	//pocetna ploca 1
	cout <<endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
				
		if(i==0) 
		printf("%4.d",j); 
		else 
		if(j==0) 
		printf("%4.d",i); 
		else 
		printf("%4.c",q);
		}
	cout <<endl;
	cout <<endl;
	}
		
		
	//pozicija broda 4x1
	{
	z=0;
	cout <<endl;
	cout << "Unesite koordinate pramca broda 4x1" << endl;
	cin >> d[z];
	cin >> e[z];
	cout << "Unesite usmjerenje broda (u-up, d-down, l-left, r-right)" << endl;
	cin >> h[z];
	
	system("CLS");
	}
	
	
	//krivi upis broda 4x1 (izvan granica terena)
	if(((d[z]<4)&&(h[z]=='u'))||((e[z]<4)&&(h[z]=='l'))||((e[z]>6)&&(h[z]=='r'))||((d[z]>6)&&(h[z]=='d'))||
	(d[z]>9)||(d[z]<1)||(e[z]>9)||(e[z]<1)) {
	cout << "Nije moguce postaviti ovakav brod (nalazi se izvan terena), pokusajte ponovo" << endl;
	cout <<endl;
	
	Brodovi::jedan2();
	}
	
	
	//krivi upis broda 4x1 (neodredjeno usmjerenje)
	else if((h[z]!='u')&&(h[z]!='d')&&(h[z]!='l')&&(h[z]!='r')) {
	cout << "Nije moguce postaviti ovakav brod (usmjerenje je netocno), pokusajte ponovo" << endl;
	cout <<endl;
	
	Brodovi::jedan2();
	}
	
	
	//definiranje broda 4x1
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
		
		if((h[z]=='u')&&(d[z]==i)&&(e[z]==j)) {
		m[i-3][j]='O';
		m[i-2][j]='O';
		m[i-1][j]='O';
		m[i][j]='O';
		}
		
		if((h[z]=='l')&&(d[z]==i)&&(e[z]==j)) {
		m[i][j-3]='O';
		m[i][j-2]='O';
		m[i][j-1]='O';
		m[i][j]='O';
		}
		
		if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
		m[i][j]='O';
		m[i][j+1]='O';
		m[i][j+2]='O';
		m[i][j+3]='O';
		}
		
		if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
		m[i][j]='O';
		m[i+1][j]='O';
		m[i+2][j]='O';
		m[i+3][j]='O';
		}
		
		}
	}
	
}



// 2. i 3. brod 3x1, 2. igrac
void Brodovi::dva2() {
	
	
	//pocetna ploca 2
	cout << endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(m[i][j]=='O')
		printf("%4.c",m[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	
	
	
	for(z=f;z<3;z++) {
	n=z;
	
	//pozicija broda 3x1
	{
	cout <<endl;
	cout << "Unesite koordinate pramca " << z << ". od 2 broda 3x1" << endl;
	cin >> d[z];
	cin >> e[z];
	cout << "Unesite usmjerenje broda (u-up, d-down, l-left, r-right)" << endl;
 	cin >> h[z];
 	
 	system("CLS");
 	}
 	
 	
 	//krivi upis broda 3x1 (izvan granica terena)
 	if(((d[z]<3)&&(h[z]=='u'))||((e[z]<3)&&(h[z]=='l'))||((e[z]>7)&&(h[z]=='r'))||((d[z]>7)&&(h[z]=='d'))||
	(d[z]>9)||(d[z]<1)||(e[z]>9)||(e[z]<1)) {
	cout << "Nije moguce postaviti ovakav brod (nalazi se izvan terena), pokusajte ponovo" << endl;
	cout <<endl;
	
	f=n;
	
	Brodovi::dva2();
	}
		
	
	//krivi upis broda 3x1 (neodredjeno usmjerenje)
	else if((h[z]!='u')&&(h[z]!='d')&&(h[z]!='l')&&(h[z]!='r')) {
	cout << "Nije moguce postaviti ovakav brod (usmjerenje je netocno), pokusajte ponovo" << endl;
	cout <<endl;
	
	f=n;
	
	Brodovi::dva2();
	}
	
	
	//krivi upis broda 3x1 (polozaj broda je tocno na drugom brodu)
	else if(m[d[z]][e[z]]=='O') {
	cout << "Nije moguce postaviti ovakav brod (brodovi se dodiruju), pokusajte ponovo" << endl;
	cout <<endl;
		
	f=n;

	Brodovi::dva2();
	}
	
	
	//definiranje broda 3x1
 	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
				
		if((h[z]=='u')&&(d[z]==i)&&(e[z]==j)) {
		m[i-2][j]='O';
		m[i-1][j]='O';
		m[i][j]='O';
		}
					
		if((h[z]=='l')&&(d[z]==i)&&(e[z]==j)) {
		m[i][j-2]='O';
		m[i][j-1]='O';
		m[i][j]='O';
		}
				
		if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
		m[i][j]='O';
		m[i][j+1]='O';
		m[i][j+2]='O';
		}
					
		if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
		m[i][j]='O';
		m[i+1][j]='O';
		m[i+2][j]='O';
		}
					
		}
	}
 	
	
	//krivi upis broda 3x1 (dodiruje drugi brod)
	for(z=0;z<n;z++){
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(((m[i][j]=='O')&&((m[i-1][j-1]=='O')||(m[i-1][j+1]=='O')||(m[i+1][j-1]=='O')||(m[i+1][j+1]=='O')))||
		((z==0)&&(h[z]=='d')&&((m[d[z]-1][e[z]]=='O')||(m[d[z]+4][e[z]]=='O')))||
		((z==0)&&(h[z]=='u')&&((m[d[z]+1][e[z]]=='O')||(m[d[z]-4][e[z]]=='O')))||
		((z==0)&&(h[z]=='l')&&((m[d[z]][e[z]+1]=='O')||(m[d[z]][e[z]-4]=='O')))||
		((z==0)&&(h[z]=='r')&&((m[d[z]][e[z]-1]=='O')||(m[d[z]][e[z]+4]=='O')))||
		
		((z==1)&&(h[z]=='d')&&((m[d[z]-1][e[z]]=='O')||(m[d[z]+3][e[z]]=='O')))||
		((z==1)&&(h[z]=='u')&&((m[d[z]+1][e[z]]=='O')||(m[d[z]-3][e[z]]=='O')))||
		((z==1)&&(h[z]=='l')&&((m[d[z]][e[z]+1]=='O')||(m[d[z]][e[z]-3]=='O')))||
		((z==1)&&(h[z]=='r')&&((m[d[z]][e[z]-1]=='O')||(m[d[z]][e[z]+3]=='O'))))
		{
		
		cout << "Nije moguce postaviti ovakav brod (brodovi se dodiruju), pokusajte ponovo" << endl;
		cout <<endl;
		
		//ponistavanje krivo unesenog broda 3x1
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
			
			z=n;	
				
			if((h[z]=='u')&&(d[z]==i)&&(e[z]==j)) {
			m[i-2][j]=q;
			m[i-1][j]=q;
			m[i][j]=q;
			}
					
			if((h[z]=='l')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j-2]=q;
			m[i][j-1]=q;
			m[i][j]=q;
			}
				
			if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]=q;
			m[i][j+1]=q;
			m[i][j+2]=q;
			}
					
			if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]=q;
			m[i+1][j]=q;
			m[i+2][j]=q;
			}
					
			}
		}
		
		
		//ponovo definiranje broda 4x1 (u slucaju preklapanja)
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
				
			z=0;
			
			if((h[z]=='u')&&(d[z]==i)&&(e[z]==j)) {
			m[i-3][j]='O';
			m[i-2][j]='O';
			m[i-1][j]='O';
			m[i][j]='O';
			}
			
			if((h[z]=='l')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j-3]='O';
			m[i][j-2]='O';
			m[i][j-1]='O';
			m[i][j]='O';
			}
			
			if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i][j+1]='O';
			m[i][j+2]='O';
			m[i][j+3]='O';
			}
			
			if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i+1][j]='O';
			m[i+2][j]='O';
			m[i+3][j]='O';
			}
			
			}
		}
		
		
		//ponovo definiranje broda 3x1 (u slucaju preklapanja)
		if(n==2) {
		
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
				
			z=1;	
					
			if((h[z]=='u')&&(d[z]==i)&&(e[z]==j)) {
			m[i-2][j]='O';
			m[i-1][j]='O';
			m[i][j]='O';
			}
						
			if((h[z]=='l')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j-2]='O';
			m[i][j-1]='O';
			m[i][j]='O';
			}
					
			if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i][j+1]='O';
			m[i][j+2]='O';
			}
						
			if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i+1][j]='O';
			m[i+2][j]='O';
			}
						
			}
		}
			
		}
		
		
		f=n;
		
		Brodovi::dva2();
		
		}
			
	}
	}
	}

	
	//ispis brodova
	cout << endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(m[i][j]=='O')
		printf("%4.c",m[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	

}
system("CLS");
}



// 3., 4. i 5. brod 2x1, 2. igrac
void Brodovi::tri2() {
	
	
	//pocetna ploca 3
	cout << endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(m[i][j]=='O')
		printf("%4.c",m[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	
	
	
	for(z=f;z<6;z++) {
	n=z;
	
	//pozicija broda 2x1
	{
	cout <<endl;
	cout << "Unesite koordinate pramca " << z-2 << ". od 3 broda 2x1" << endl;
	cin >> d[z];
	cin >> e[z];
	cout << "Unesite usmjerenje broda (u-up, d-down, l-left, r-right)" << endl;
 	cin >> h[z];
 	
 	system("CLS");
 	}
 	
 	
 	//krivi upis broda 2x1 (izvan granica terena)
 	if(((d[z]<2)&&(h[z]=='u'))||((e[z]<2)&&(h[z]=='l'))||((e[z]>8)&&(h[z]=='r'))||((d[z]>8)&&(h[z]=='d'))||
	(d[z]>9)||(d[z]<1)||(e[z]>9)||(e[z]<1)) {
	cout << "Nije moguce postaviti ovakav brod (nalazi se izvan terena), pokusajte ponovo" << endl;
	cout <<endl;
	
	f=n;
	
	Brodovi::tri2();
	}
	
	
	//krivi upis smjera broda 2x1 (neodredjeno usmjerenje)
	else if((h[z]!='u')&&(h[z]!='d')&&(h[z]!='l')&&(h[z]!='r')) {
	cout << "Nije moguce postaviti ovakav brod (usmjerenje je netocno), pokusajte ponovo" << endl;
	cout <<endl;
	
	f=n;
	
	Brodovi::tri2();
	}
		
	
	//krivi upis broda 2x1 (polozaj broda je tocno na drugom brodu)
	else if(m[d[z]][e[z]]=='O') {
	cout << "Nije moguce postaviti ovakav brod (brodovi se dodiruju), pokusajte ponovo" << endl;
	cout <<endl;
	
	f=n;
	
	Brodovi::tri2();
	}
	
	
	//definiranje broda 2x1
 	for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
				
			if((h[z]=='u')&&(d[z]==i)&&(e[z]==j)) {
			m[i-1][j]='O';
			m[i][j]='O';
			}
					
			if((h[z]=='l')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j-1]='O';
			m[i][j]='O';
			}
				
			if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i][j+1]='O';
			}
					
			if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i+1][j]='O';
			}
					
			}
		}
 	
 	
 	//krivi upis broda 2x1 (dodiruje drugi brod)
	for(z=0;z<n;z++){
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(((m[i][j]=='O')&&((m[i-1][j-1]=='O')||(m[i-1][j+1]=='O')||(m[i+1][j-1]=='O')||(m[i+1][j+1]=='O')))||
		((z==0)&&(h[z]=='d')&&((m[d[z]-1][e[z]]=='O')||(m[d[z]+4][e[z]]=='O')))||
		((z==0)&&(h[z]=='u')&&((m[d[z]+1][e[z]]=='O')||(m[d[z]-4][e[z]]=='O')))||
		((z==0)&&(h[z]=='l')&&((m[d[z]][e[z]+1]=='O')||(m[d[z]][e[z]-4]=='O')))||
		((z==0)&&(h[z]=='r')&&((m[d[z]][e[z]-1]=='O')||(m[d[z]][e[z]+4]=='O')))||
		
		(((z==1)||(z==2))&&(h[z]=='d')&&((m[d[z]-1][e[z]]=='O')||(m[d[z]+3][e[z]]=='O')))||
		(((z==1)||(z==2))&&(h[z]=='u')&&((m[d[z]+1][e[z]]=='O')||(m[d[z]-3][e[z]]=='O')))||
		(((z==1)||(z==2))&&(h[z]=='l')&&((m[d[z]][e[z]+1]=='O')||(m[d[z]][e[z]-3]=='O')))||
		(((z==1)||(z==2))&&(h[z]=='r')&&((m[d[z]][e[z]-1]=='O')||(m[d[z]][e[z]+3]=='O')))||
		
		(((z==3)||(z==4))&&(h[z]=='d')&&((m[d[z]-1][e[z]]=='O')||(m[d[z]+2][e[z]]=='O')))||
		(((z==3)||(z==4))&&(h[z]=='u')&&((m[d[z]+1][e[z]]=='O')||(m[d[z]-2][e[z]]=='O')))||
		(((z==3)||(z==4))&&(h[z]=='l')&&((m[d[z]][e[z]+1]=='O')||(m[d[z]][e[z]-2]=='O')))||
		(((z==3)||(z==4))&&(h[z]=='r')&&((m[d[z]][e[z]-1]=='O')||(m[d[z]][e[z]+2]=='O'))))
		{
	
		cout << "Nije moguce postaviti ovakav brod (brodovi se dodiruju), pokusajte ponovo" << endl;
		cout <<endl;
		cout <<endl;
		
		//ponistavanje krivo unesenog broda 2x1
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
			
			z=n;	
				
			if((h[z]=='u')&&(d[z]==i)&&(e[z]==j)) {
			m[i-1][j]=q;
			m[i][j]=q;
			}
					
			if((h[z]=='l')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j-1]=q;
			m[i][j]=q;
			}
				
			if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]=q;
			m[i][j+1]=q;
			}
					
			if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]=q;
			m[i+1][j]=q;
			}
					
			}
		}
		
		
		//ponovo definiranje broda 4x1 (u slucaju preklapanja)
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
				
			z=0;
			
			if((h[z]=='u')&&(d[z]==i)&&(e[z]==j)) {
			m[i-3][j]='O';
			m[i-2][j]='O';
			m[i-1][j]='O';
			m[i][j]='O';
			}
			
			if((h[z]=='l')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j-3]='O';
			m[i][j-2]='O';
			m[i][j-1]='O';
			m[i][j]='O';
			}
			
			if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i][j+1]='O';
			m[i][j+2]='O';
			m[i][j+3]='O';
			}
			
			if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i+1][j]='O';
			m[i+2][j]='O';
			m[i+3][j]='O';
			}
			
			}
		}
		
		
		//ponovo definiranje brodova 3x1 (u slucaju  preklapanja)
		for(z=1;z<3;z++) {
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
					
			if((h[z]=='u')&&(d[z]==i)&&(e[z]==j)) {
			m[i-2][j]='O';
			m[i-1][j]='O';
			m[i][j]='O';
			}
						
			if((h[z]=='l')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j-2]='O';
			m[i][j-1]='O';
			m[i][j]='O';
			}
					
			if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i][j+1]='O';
			m[i][j+2]='O';
			}
						
			if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i+1][j]='O';
			m[i+2][j]='O';
			}
						
			}
		}
			
		}
		
		
		//ponovo definiranje brodova 2x1 (u slucaju preklapanja)
		for(z=3;z<n;z++) {
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
					
			if((h[z]=='u')&&(d[z]==i)&&(e[z]==j)) {
			m[i-1][j]='O';
			m[i][j]='O';
			}
						
			if((h[z]=='l')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j-1]='O';
			m[i][j]='O';
			}
					
			if((h[z]=='r')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i][j+1]='O';
			}
						
			if((h[z]=='d')&&(d[z]==i)&&(e[z]==j)) {
			m[i][j]='O';
			m[i+1][j]='O';
			}
						
			}
		}
			
		}
		
		f=n;
		
		Brodovi::tri2();
	
		}
		
		
	}
	}
	}
	
	
	//ispis brodova
	cout <<endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(m[i][j]=='O')
		printf("%4.c",m[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	

}

}



// 6., 7. i 8. brod 1x1, 2. igrac
void Brodovi::cetiri2() {
	
	
	//pocetna ploca 4
	cout << endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(m[i][j]=='O')
		printf("%4.c",m[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	
	
	
	for(z=f;z<9;z++) {
	n=z;
	
	//pozicija broda 1x1
	{
	cout <<endl;
	cout << "Unesite koordinate " << z-5 << ".od 3 broda 1x1" << endl;
	cin >> d[z];
	cin >> e[z];
	 	
 	system("CLS");
 	}
 	
 	
 	//krivi upis broda 1x1 (izvan granica terena)
 	if((d[z]>9)||(d[z]<1)||(e[z]>9)||(e[z]<1)) {
	cout << "Nije moguce postaviti ovakav brod (nalazi se izvan terena), pokusajte ponovo" << endl;
	cout <<endl;
	
	f=n;
	
	Brodovi::cetiri2();
	}
 	
 	
 	//krivi upis broda 1x1 (polozaj broda je tocno na drugom brodu)
	else if(m[d[z]][e[z]]=='O'){
	cout << "Nije moguce postaviti ovakav brod (brodovi se dodiruju), pokusajte ponovo" << endl;
	cout <<endl;
	f=n;
	
	Brodovi::cetiri2();
	}
 	
 			
	//definiranje broda 1x1
 	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
		
		if((d[z]==i)&&(e[z]==j))
		m[i][j]='O';
		
		}
	}
 	
	
	
	//krivi upis broda 1x1 (dodiruje drugi brod)
	for(z=0;z<n;z++){
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(((m[i][j]=='O')&&((m[i-1][j-1]=='O')||(m[i-1][j+1]=='O')||(m[i+1][j-1]=='O')||(m[i+1][j+1]=='O')))||
		((z==0)&&(h[z]=='d')&&((m[d[z]-1][e[z]]=='O')||(m[d[z]+4][e[z]]=='O')))||
		((z==0)&&(h[z]=='u')&&((m[d[z]+1][e[z]]=='O')||(m[d[z]-4][e[z]]=='O')))||
		((z==0)&&(h[z]=='l')&&((m[d[z]][e[z]+1]=='O')||(m[d[z]][e[z]-4]=='O')))||
		((z==0)&&(h[z]=='r')&&((m[d[z]][e[z]-1]=='O')||(m[d[z]][e[z]+4]=='O')))||
		
		(((z==1)||(z==2))&&(h[z]=='d')&&((m[d[z]-1][e[z]]=='O')||(m[d[z]+3][e[z]]=='O')))||
		(((z==1)||(z==2))&&(h[z]=='u')&&((m[d[z]+1][e[z]]=='O')||(m[d[z]-3][e[z]]=='O')))||
		(((z==1)||(z==2))&&(h[z]=='l')&&((m[d[z]][e[z]+1]=='O')||(m[d[z]][e[z]-3]=='O')))||
		(((z==1)||(z==2))&&(h[z]=='r')&&((m[d[z]][e[z]-1]=='O')||(m[d[z]][e[z]+3]=='O')))||
		
		(((z==3)||(z==4)||(z==5))&&(h[z]=='d')&&((m[d[z]-1][e[z]]=='O')||(m[d[z]+2][e[z]]=='O')))||
		(((z==3)||(z==4)||(z==5))&&(h[z]=='u')&&((m[d[z]+1][e[z]]=='O')||(m[d[z]-2][e[z]]=='O')))||
		(((z==3)||(z==4)||(z==5))&&(h[z]=='l')&&((m[d[z]][e[z]+1]=='O')||(m[d[z]][e[z]-2]=='O')))||
		(((z==3)||(z==4)||(z==5))&&(h[z]=='r')&&((m[d[z]][e[z]-1]=='O')||(m[d[z]][e[z]+2]=='O')))||
		
		(((z==6)||(z==7))&&((m[d[z]-1][e[z]]=='O')||(m[d[z]][e[z]-1]=='O')||(m[d[z]][e[z]+1]=='O')||(m[d[z]+1][e[z]]=='O'))))
		{
	
		cout << "Nije moguce postaviti ovakav brod (brodovi se dodiruju), pokusajte ponovo" << endl;
		cout <<endl;
		
		//ponistavanje krivo unesenog broda 1x1
		for(i=0;i<10;i++) {
			for(j=0;j<10;j++) {
			
			z=n;	
				
			if((d[z]==i)&&(e[z]==j)) {
			m[i][j]=q;
			}
					
			}
		}
		
		f=n;
		
		Brodovi::cetiri2();
		
		}
		
		
	}
	}
	}
	
	//ispis brodova
	cout <<endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(m[i][j]=='O')
		printf("%4.c",m[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	

}
//system("CLS");
}




//prvi igrac
void Brodovi::gadjanje1() {

	cout <<endl;
	cout << ime1 << " je na potezu" << endl;
	cout <<endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(k[i][j]==o)
		printf("%4.c",k[i][j]);
		
		else if(k[i][j]==p)
		printf("%4.c",k[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	
	
	
	cout <<endl;
	cout << "Unesite koordinate koje zelite gadjati" << endl;
	cin >> i;
	cin >> j;
	system("CLS");
	
	
	if((k[i][j]==o)||(k[i][j]==p)) {
	cout <<endl;
	cout << "Ovo polje ste vec gadjali prije!" << endl;
	Brodovi::gadjanje1();
	}
	
	
	//doslo je pogotka
	if(m[i][j]=='O') {
	
	k[i][j]=o;
	
	for(z=0;z<9;z++) {
	
	//potopljen je brod 4x1
	if((z==0)&&(
	                  
	((h[z]=='u')&&(k[d[z]][e[z]]=='X')&&(k[d[z]-1][e[z]]=='X')&&(k[d[z]-2][e[z]]=='X')&&(k[d[z]-3][e[z]]=='X')&&
	(((i==d[z])&&(j==e[z]))||((i==d[z]-1)&&(j==e[z]))||((i==d[z]-2)&&(j==e[z]))||((i==d[z]-3)&&(j==e[z]))))||
	
	((h[z]=='d')&&(k[d[z]][e[z]]=='X')&&(k[d[z]+1][e[z]]=='X')&&(k[d[z]+2][e[z]]=='X')&&(k[d[z]+3][e[z]]=='X')&&
	(((i==d[z])&&(j==e[z]))||((i==d[z]+1)&&(j==e[z]))||((i==d[z]+2)&&(j==e[z]))||((i==d[z]+3)&&(j==e[z]))))||
	
	((h[z]=='l')&&(k[d[z]][e[z]]=='X')&&(k[d[z]][e[z]-1]=='X')&&(k[d[z]][e[z]-2]=='X')&&(k[d[z]][e[z]-3]=='X')&&
	(((i==d[z])&&(j==e[z]))||((i==d[z])&&(j==e[z]-1))||((i==d[z])&&(j==e[z]-2))||((i==d[z])&&(j==e[z]-3))))||
	
	((h[z]=='r')&&(k[d[z]][e[z]]=='X')&&(k[d[z]][e[z]+1]=='X')&&(k[d[z]][e[z]+2]=='X')&&(k[d[z]][e[z]+3]=='X')&&
	(((i==d[z])&&(j==e[z]))||((i==d[z])&&(j==e[z]+1))||((i==d[z])&&(j==e[z]+2))||((i==d[z])&&(j==e[z]+3)))))) {
		
	
	if(h[z]=='u'){
	k[d[z]-4][e[z]-1]=p; k[d[z]-4][e[z]]=p;	k[d[z]-4][e[z]+1]=p; 
	k[d[z]-3][e[z]-1]=p; 					k[d[z]-3][e[z]+1]=p; 
	k[d[z]-2][e[z]-1]=p;					k[d[z]-2][e[z]+1]=p; 
	k[d[z]-1][e[z]-1]=p;					k[d[z]-1][e[z]+1]=p; 
	k[d[z]][e[z]-1]=p;						k[d[z]][e[z]+1]=p; 
	k[d[z]+1][e[z]-1]=p; k[d[z]+1][e[z]]=p; k[d[z]+1][e[z]+1]=p; 
	}
	
	if(h[z]=='d'){
	k[d[z]-1][e[z]-1]=p; k[d[z]-1][e[z]]=p;	k[d[z]-1][e[z]+1]=p; 
	k[d[z]][e[z]-1]=p; 						k[d[z]][e[z]+1]=p; 
	k[d[z]+1][e[z]-1]=p;					k[d[z]+1][e[z]+1]=p; 
	k[d[z]+2][e[z]-1]=p;					k[d[z]+2][e[z]+1]=p; 
	k[d[z]+3][e[z]-1]=p;					k[d[z]+3][e[z]+1]=p; 
	k[d[z]+4][e[z]-1]=p; k[d[z]+4][e[z]]=p; k[d[z]+4][e[z]+1]=p; 
	}
	
	if(h[z]=='l'){
	k[d[z]-1][e[z]-4]=p; k[d[z]-1][e[z]-3]=p; k[d[z]-1][e[z]-2]=p; k[d[z]-1][e[z]-1]=p; k[d[z]-1][e[z]]=p; k[d[z]-1][e[z]+1]=p;
	k[d[z]][e[z]-4]=p; 																					   k[d[z]][e[z]+1]=p;	
	k[d[z]+1][e[z]-4]=p; k[d[z]+1][e[z]-3]=p; k[d[z]+1][e[z]-2]=p; k[d[z]+1][e[z]-1]=p; k[d[z]+1][e[z]]=p; k[d[z]+1][e[z]+1]=p;
	}
	
	if(h[z]=='r'){
	k[d[z]-1][e[z]-1]=p; k[d[z]-1][e[z]]=p; k[d[z]-1][e[z]+1]=p; k[d[z]-1][e[z]+2]=p; k[d[z]-1][e[z]+3]=p; k[d[z]-1][e[z]+4]=p;
	k[d[z]][e[z]-1]=p; 																					   k[d[z]][e[z]+4]=p;	
	k[d[z]+1][e[z]-1]=p; k[d[z]+1][e[z]]=p; k[d[z]+1][e[z]+1]=p; k[d[z]+1][e[z]+2]=p; k[d[z]+1][e[z]+3]=p; k[d[z]+1][e[z]+4]=p;
	}
		
		
	cout << "Brod 4x1 je potopljen!" << endl;
	v1--;
	cout << "Ostalo je jos " << v1 << " 4x1 brodova, " << v2 << " 3x1 brodova, " << v3 << " 2x1 brodova i " << v4 << " 1x1 brodova." << endl;
	s2--;	
	}
	
	
	//potopljen je brod 3x1
	if(((z==1)||(z==2))&&(                  
	
	((h[z]=='u')&&(k[d[z]][e[z]]=='X')&&(k[d[z]-1][e[z]]=='X')&&(k[d[z]-2][e[z]]=='X')&&
	(((i==d[z])&&(j==e[z]))||((i==d[z]-1)&&(j==e[z]))||((i==d[z]-2)&&(j==e[z]))))||
	
	((h[z]=='d')&&(k[d[z]][e[z]]=='X')&&(k[d[z]+1][e[z]]=='X')&&(k[d[z]+2][e[z]]=='X')&&
	(((i==d[z])&&(j==e[z]))||((i==d[z]+1)&&(j==e[z]))||((i==d[z]+2)&&(j==e[z]))))||
	
	((h[z]=='l')&&(k[d[z]][e[z]]=='X')&&(k[d[z]][e[z]-1]=='X')&&(k[d[z]][e[z]-2]=='X')&&
	(((i==d[z])&&(j==e[z]))||((i==d[z])&&(j==e[z]-1))||((i==d[z])&&(j==e[z]-2))))||
	
	((h[z]=='r')&&(k[d[z]][e[z]]=='X')&&(k[d[z]][e[z]+1]=='X')&&(k[d[z]][e[z]+2]=='X')&&
	(((i==d[z])&&(j==e[z]))||((i==d[z])&&(j==e[z]+1))||((i==d[z])&&(j==e[z]+2)))))) {
		
	
	if(h[z]=='u'){
	k[d[z]-3][e[z]-1]=p; k[d[z]-3][e[z]]=p;	k[d[z]-3][e[z]+1]=p; 
	k[d[z]-2][e[z]-1]=p;					k[d[z]-2][e[z]+1]=p; 
	k[d[z]-1][e[z]-1]=p;					k[d[z]-1][e[z]+1]=p; 
	k[d[z]][e[z]-1]=p;						k[d[z]][e[z]+1]=p; 
	k[d[z]+1][e[z]-1]=p; k[d[z]+1][e[z]]=p; k[d[z]+1][e[z]+1]=p; 
	}
	
	if(h[z]=='d'){
	k[d[z]-1][e[z]-1]=p; k[d[z]-1][e[z]]=p;	k[d[z]-1][e[z]+1]=p; 
	k[d[z]][e[z]-1]=p; 						k[d[z]][e[z]+1]=p; 
	k[d[z]+1][e[z]-1]=p;					k[d[z]+1][e[z]+1]=p; 
	k[d[z]+2][e[z]-1]=p;					k[d[z]+2][e[z]+1]=p; 
	k[d[z]+3][e[z]-1]=p; k[d[z]+3][e[z]]=p; k[d[z]+3][e[z]+1]=p; 
	}
	
	if(h[z]=='l'){
	k[d[z]-1][e[z]-3]=p; k[d[z]-1][e[z]-2]=p; k[d[z]-1][e[z]-1]=p; k[d[z]-1][e[z]]=p; k[d[z]-1][e[z]+1]=p;
	k[d[z]][e[z]-3]=p;																  k[d[z]][e[z]+1]=p;	
	k[d[z]+1][e[z]-3]=p; k[d[z]+1][e[z]-2]=p; k[d[z]+1][e[z]-1]=p; k[d[z]+1][e[z]]=p; k[d[z]+1][e[z]+1]=p;
	}
	
	if(h[z]=='r'){
	k[d[z]-1][e[z]-1]=p; k[d[z]-1][e[z]]=p; k[d[z]-1][e[z]+1]=p; k[d[z]-1][e[z]+2]=p; k[d[z]-1][e[z]+3]=p;
	k[d[z]][e[z]-1]=p; 																  k[d[z]][e[z]+3]=p;					  
	k[d[z]+1][e[z]-1]=p; k[d[z]+1][e[z]]=p; k[d[z]+1][e[z]+1]=p; k[d[z]+1][e[z]+2]=p; k[d[z]+1][e[z]+3]=p;
	}
		
		
	cout << "Brod 3x1 je potopljen!" << endl;
	v2--;
	cout << "Ostalo je jos " << v1 << " 4x1 brodova, " << v2 << " 3x1 brodova, " << v3 << " 2x1 brodova i " << v4 << " 1x1 brodova." << endl;
	s2--;		
	}
	
	
	//potopljen je brod 2x1
	if(((z==3)||(z==4)||(z==5))&&(
	
	((h[z]=='u')&&(k[d[z]][e[z]]=='X')&&(k[d[z]-1][e[z]]=='X')&&
	(((i==d[z])&&(j==e[z]))||((i==d[z]-1)&&(j==e[z]))))||
	
	((h[z]=='d')&&(k[d[z]][e[z]]=='X')&&(k[d[z]+1][e[z]]=='X')&&
	(((i==d[z])&&(j==e[z]))||((i==d[z]+1)&&(j==e[z]))))||
	
	((h[z]=='l')&&(k[d[z]][e[z]]=='X')&&(k[d[z]][e[z]-1]=='X')&&
	(((i==d[z])&&(j==e[z]))||((i==d[z])&&(j==e[z]-1))))||
	
	((h[z]=='r')&&(k[d[z]][e[z]]=='X')&&(k[d[z]][e[z]+1]=='X')&&
	(((i==d[z])&&(j==e[z]))||((i==d[z])&&(j==e[z]+1)))))) {
	
	
	if(h[z]=='u'){
	k[d[z]-2][e[z]-1]=p; k[d[z]-2][e[z]]=p; k[d[z]-2][e[z]+1]=p; 
	k[d[z]-1][e[z]-1]=p;					k[d[z]-1][e[z]+1]=p; 
	k[d[z]][e[z]-1]=p;						k[d[z]][e[z]+1]=p; 
	k[d[z]+1][e[z]-1]=p; k[d[z]+1][e[z]]=p; k[d[z]+1][e[z]+1]=p; 
	}
	
	if(h[z]=='d'){
	k[d[z]-1][e[z]-1]=p; k[d[z]-1][e[z]]=p;	k[d[z]-1][e[z]+1]=p; 
	k[d[z]][e[z]-1]=p; 						k[d[z]][e[z]+1]=p; 
	k[d[z]+1][e[z]-1]=p;					k[d[z]+1][e[z]+1]=p; 
	k[d[z]+2][e[z]-1]=p; k[d[z]+2][e[z]]=p; k[d[z]+2][e[z]+1]=p; 
	}
	
	if(h[z]=='l'){
	k[d[z]-1][e[z]-2]=p; k[d[z]-1][e[z]-1]=p; k[d[z]-1][e[z]]=p; k[d[z]-1][e[z]+1]=p;
	k[d[z]][e[z]-2]=p;											 k[d[z]][e[z]+1]=p;	
	k[d[z]+1][e[z]-2]=p; k[d[z]+1][e[z]-1]=p; k[d[z]+1][e[z]]=p; k[d[z]+1][e[z]+1]=p;
	}
	
	if(h[z]=='r'){
	k[d[z]-1][e[z]-1]=p; k[d[z]-1][e[z]]=p; k[d[z]-1][e[z]+1]=p; k[d[z]-1][e[z]+2]=p;
	k[d[z]][e[z]-1]=p; 											 k[d[z]][e[z]+2]=p;					  
	k[d[z]+1][e[z]-1]=p; k[d[z]+1][e[z]]=p; k[d[z]+1][e[z]+1]=p; k[d[z]+1][e[z]+2]=p;
	}
	
	
	cout << "Brod 2x1 je potopljen!" << endl;
	v3--;
	cout << "Ostalo je jos " << v1 << " 4x1 brodova, " << v2 << " 3x1 brodova, " << v3 << " 2x1 brodova i " << v4 << " 1x1 brodova." << endl;
	s2--;	
	}
	
	
	//potopljen je brod 1x1
	if(((z==6)||(z==7)||(z==8))&&(k[d[z]][e[z]]=='X')&&((i==d[z])&&(j==e[z]))) {
		
		
	k[d[z]-1][e[z]-1]=p; k[d[z]-1][e[z]]=p; k[d[z]-1][e[z]+1]=p;
	k[d[z]][e[z]-1]=p; 						k[d[z]][e[z]+1]=p;					  
	k[d[z]+1][e[z]-1]=p; k[d[z]+1][e[z]]=p; k[d[z]+1][e[z]+1]=p;
		
		
	cout << "Brod 1x1 je potopljen!" << endl;
	v4--;
	cout << "Ostalo je jos " << v1 << " 4x1 brodova, " << v2 << " 3x1 brodova, " << v3 << " 2x1 brodova i " << v4 << " 1x1 brodova." << endl;
	s2--;	
	}
	
	}
	
	//ako su potopljeni svi brodovi
	if(s2==0) {
	system("CLS");
	
	//ploca 1. igraca sa svim brodovima (pogodjenim/potopljenim/promasenim)
	cout <<endl;
	cout << ime1 << " je pobijedio, cestitamo!" << endl;
	cout <<endl;
	
	if(ni==2)
	cout << ime2  <<", ovako izgleda ploca pobjednika sa tvojim pogotcima i promasajima!" << endl;
	
	if(ni==1)
	cout <<"Ovako izgleda tvoja ploca sa pogotcima i promasajima racunala!" << endl;
	
	cout <<endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(l[i][j]==o)
		printf("%4.c",l[i][j]);
		
		else if(l[i][j]==p)
		printf("%4.c",l[i][j]);
		
		else if(x[i][j]=='O')
		printf("%4.c",x[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}
	system("pause");
	}

	Brodovi::gadjanje1();
	}
	
	
	else {
	k[i][j]=p;
	system("CLS");
	
	if(ni==2)
	Brodovi::gadjanje2();
	
	else{
		
	if(u==0)
	Brodovi::gadjanjek();
	
	if(u==1)
	Brodovi::faza1();
	
	if(u==2)
	Brodovi::faza2();
	
	if(u==3)
	Brodovi::faza3();	
	
	}
	}
	
}



//drugi igrac
void Brodovi::gadjanje2() {
	
	cout <<endl;
	cout << ime2 << " je na potezu" << endl;
	cout <<endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(l[i][j]==o)
		printf("%4.c",l[i][j]);
		
		else if(l[i][j]==p)
		printf("%4.c",l[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	
	
	
	cout <<endl;
	cout << "Unesite koordinate koje zelite gadjati" << endl;
	cin >> i;
	cin >> j;
	system("CLS");
	
	
	if((l[i][j]==o)||(l[i][j]==p)) {
	cout <<endl;
	cout << "Ovo polje ste vec gadjali prije!" << endl;
	Brodovi::gadjanje2();
	}
	
	
	//doslo je do pogotka
	if(x[i][j]=='O') {
	
	l[i][j]=o;
	
	for(z=0;z<9;z++) {
	
	//potopljen je brod 4x1
	if((z==0)&&(  
	                
	((c[z]=='u')&&(l[a[z]][b[z]]=='X')&&(l[a[z]-1][b[z]]=='X')&&(l[a[z]-2][b[z]]=='X')&&(l[a[z]-3][b[z]]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z]-1)&&(j==b[z]))||((i==a[z]-2)&&(j==b[z]))||((i==a[z]-3)&&(j==b[z]))))||
	
	((c[z]=='d')&&(l[a[z]][b[z]]=='X')&&(l[a[z]+1][b[z]]=='X')&&(l[a[z]+2][b[z]]=='X')&&(l[a[z]+3][b[z]]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z]+1)&&(j==b[z]))||((i==a[z]+2)&&(j==b[z]))||((i==a[z]+3)&&(j==b[z]))))||
	
	((c[z]=='l')&&(l[a[z]][b[z]]=='X')&&(l[a[z]][b[z]-1]=='X')&&(l[a[z]][b[z]-2]=='X')&&(l[a[z]][b[z]-3]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z])&&(j==b[z]-1))||((i==a[z])&&(j==b[z]-2))||((i==a[z])&&(j==b[z]-3))))||
	
	((c[z]=='r')&&(l[a[z]][b[z]]=='X')&&(l[a[z]][b[z]+1]=='X')&&(l[a[z]][b[z]+2]=='X')&&(l[a[z]][b[z]+3]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z])&&(j==b[z]+1))||((i==a[z])&&(j==b[z]+2))||((i==a[z])&&(j==b[z]+3)))))) {
	
	
	if(c[z]=='u'){
	l[a[z]-4][b[z]-1]=p; l[a[z]-4][b[z]]=p;	l[a[z]-4][b[z]+1]=p; 
	l[a[z]-3][b[z]-1]=p; 					l[a[z]-3][b[z]+1]=p; 
	l[a[z]-2][b[z]-1]=p;					l[a[z]-2][b[z]+1]=p; 
	l[a[z]-1][b[z]-1]=p;					l[a[z]-1][b[z]+1]=p; 
	l[a[z]][b[z]-1]=p;						l[a[z]][b[z]+1]=p; 
	l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p; 
	}
	
	if(c[z]=='d'){
	l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p;	l[a[z]-1][b[z]+1]=p; 
	l[a[z]][b[z]-1]=p; 						l[a[z]][b[z]+1]=p; 
	l[a[z]+1][b[z]-1]=p;					l[a[z]+1][b[z]+1]=p; 
	l[a[z]+2][b[z]-1]=p;					l[a[z]+2][b[z]+1]=p; 
	l[a[z]+3][b[z]-1]=p;					l[a[z]+3][b[z]+1]=p; 
	l[a[z]+4][b[z]-1]=p; l[a[z]+4][b[z]]=p; l[a[z]+4][b[z]+1]=p; 
	}
	
	if(c[z]=='l'){
	l[a[z]-1][b[z]-4]=p; l[a[z]-1][b[z]-3]=p; l[a[z]-1][b[z]-2]=p; l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p; l[a[z]-1][b[z]+1]=p;
	l[a[z]][b[z]-4]=p; 																					   l[a[z]][b[z]+1]=p;	
	l[a[z]+1][b[z]-4]=p; l[a[z]+1][b[z]-3]=p; l[a[z]+1][b[z]-2]=p; l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p;
	}
	
	if(c[z]=='r'){
	l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p; l[a[z]-1][b[z]+1]=p; l[a[z]-1][b[z]+2]=p; l[a[z]-1][b[z]+3]=p; l[a[z]-1][b[z]+4]=p;
	l[a[z]][b[z]-1]=p; 																					   l[a[z]][b[z]+4]=p;	
	l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p; l[a[z]+1][b[z]+2]=p; l[a[z]+1][b[z]+3]=p; l[a[z]+1][b[z]+4]=p;
	}
	
	
	cout << "Brod 4x1 je potopljen!" << endl;
	w1--;
	cout << "Ostalo je jos " << w1 << " 4x1 brodova, " << w2 << " 3x1 brodova, " << w3 << " 2x1 brodova i " << w4 << " 1x1 brodova." << endl;
	s1--;
	}
	
	
	//potopljen je brod 3x1
	if(((z==1)||(z==2))&&(                  
	
	((c[z]=='u')&&(l[a[z]][b[z]]=='X')&&(l[a[z]-1][b[z]]=='X')&&(l[a[z]-2][b[z]]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z]-1)&&(j==b[z]))||((i==a[z]-2)&&(j==b[z]))))||
	
	((c[z]=='d')&&(l[a[z]][b[z]]=='X')&&(l[a[z]+1][b[z]]=='X')&&(l[a[z]+2][b[z]]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z]+1)&&(j==b[z]))||((i==a[z]+2)&&(j==b[z]))))||
	
	((c[z]=='l')&&(l[a[z]][b[z]]=='X')&&(l[a[z]][b[z]-1]=='X')&&(l[a[z]][b[z]-2]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z])&&(j==b[z]-1))||((i==a[z])&&(j==b[z]-2))))||
	
	((c[z]=='r')&&(l[a[z]][b[z]]=='X')&&(l[a[z]][b[z]+1]=='X')&&(l[a[z]][b[z]+2]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z])&&(j==b[z]+1))||((i==a[z])&&(j==b[z]+2)))))) {
		
	
	if(c[z]=='u'){
	l[a[z]-3][b[z]-1]=p; l[a[z]-3][b[z]]=p;	l[a[z]-3][b[z]+1]=p; 
	l[a[z]-2][b[z]-1]=p;					l[a[z]-2][b[z]+1]=p; 
	l[a[z]-1][b[z]-1]=p;					l[a[z]-1][b[z]+1]=p; 
	l[a[z]][b[z]-1]=p;						l[a[z]][b[z]+1]=p; 
	l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p; 
	}
	
	if(c[z]=='d'){
	l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p;	l[a[z]-1][b[z]+1]=p; 
	l[a[z]][b[z]-1]=p; 						l[a[z]][b[z]+1]=p; 
	l[a[z]+1][b[z]-1]=p;					l[a[z]+1][b[z]+1]=p; 
	l[a[z]+2][b[z]-1]=p;					l[a[z]+2][b[z]+1]=p; 
	l[a[z]+3][b[z]-1]=p; l[a[z]+3][b[z]]=p;	l[a[z]+3][b[z]+1]=p; 
	}
	
	if(c[z]=='l'){
	l[a[z]-1][b[z]-3]=p; l[a[z]-1][b[z]-2]=p; l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p; l[a[z]-1][b[z]+1]=p;
	l[a[z]][b[z]-3]=p;														   	      l[a[z]][b[z]+1]=p;	
	l[a[z]+1][b[z]-3]=p; l[a[z]+1][b[z]-2]=p; l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p;
	}
	
	if(c[z]=='r'){
	l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p; l[a[z]-1][b[z]+1]=p; l[a[z]-1][b[z]+2]=p; l[a[z]-1][b[z]+3]=p; 
	l[a[z]][b[z]-1]=p; 															      l[a[z]][b[z]+3]=p;				   
	l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p; l[a[z]+1][b[z]+2]=p; l[a[z]+1][b[z]+3]=p; 
	}
		
	
	cout << "Brod 3x1 je potopljen!" << endl;
	w2--;
	cout << "Ostalo je jos " << w1 << " 4x1 brodova, " << w2 << " 3x1 brodova, " << w3 << " 2x1 brodova i " << w4 << " 1x1 brodova." << endl;
	s1--;	
	}
	
	
	//potopljen je brod 2x1
	if(((z==3)||(z==4)||(z==5))&&(
	
	((c[z]=='u')&&(l[a[z]][b[z]]=='X')&&(l[a[z]-1][b[z]]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z]-1)&&(j==b[z]))))||
	
	((c[z]=='d')&&(l[a[z]][b[z]]=='X')&&(l[a[z]+1][b[z]]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z]+1)&&(j==b[z]))))||
	
	((c[z]=='l')&&(l[a[z]][b[z]]=='X')&&(l[a[z]][b[z]-1]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z])&&(j==b[z]-1))))||
	
	((c[z]=='r')&&(l[a[z]][b[z]]=='X')&&(l[a[z]][b[z]+1]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z])&&(j==b[z]+1)))))) {
		
	
	if(c[z]=='u'){
	l[a[z]-2][b[z]-1]=p; l[a[z]-2][b[z]]=p;	l[a[z]-2][b[z]+1]=p; 
	l[a[z]-1][b[z]-1]=p;					l[a[z]-1][b[z]+1]=p; 
	l[a[z]][b[z]-1]=p;						l[a[z]][b[z]+1]=p; 
	l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p; 
	}
	
	if(c[z]=='d'){
	l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p;	l[a[z]-1][b[z]+1]=p; 
	l[a[z]][b[z]-1]=p; 						l[a[z]][b[z]+1]=p; 
	l[a[z]+1][b[z]-1]=p;					l[a[z]+1][b[z]+1]=p; 
	l[a[z]+2][b[z]-1]=p; l[a[z]+2][b[z]]=p;	l[a[z]+2][b[z]+1]=p; 
	}
	
	if(c[z]=='l'){
	l[a[z]-1][b[z]-2]=p; l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p; l[a[z]-1][b[z]+1]=p;
	l[a[z]][b[z]-2]=p;											 l[a[z]][b[z]+1]=p;	
	l[a[z]+1][b[z]-2]=p; l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p;
	}
	
	if(c[z]=='r'){
	l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p; l[a[z]-1][b[z]+1]=p; l[a[z]-1][b[z]+2]=p; 
	l[a[z]][b[z]-1]=p; 											 l[a[z]][b[z]+2]=p;     				   
	l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p; l[a[z]+1][b[z]+2]=p; 
	}
		
		
	cout << "Brod 2x1 je potopljen!" << endl;
	w3--;
	cout << "Ostalo je jos " << w1 << " 4x1 brodova, " << w2 << " 3x1 brodova, " << w3 << " 2x1 brodova i " << w4 << " 1x1 brodova." << endl;
	s1--;	
	}
	
	//potopljen je brod 1x1
	if(((z==6)||(z==7)||(z==8))&&(l[a[z]][b[z]]=='X')&&((i==a[z])&&(j==b[z]))) {
		
	
	l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p; l[a[z]-1][b[z]+1]=p;
	l[a[z]][b[z]-1]=p; 					 	l[a[z]][b[z]+1]=p;
	l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p;
	
		
	cout << "Brod 1x1 je potopljen!" << endl;
	w4--;
	cout << "Ostalo je jos " << w1 << " 4x1 brodova, " << w2 << " 3x1 brodova, " << w3 << " 2x1 brodova i " << w4 << " 1x1 brodova." << endl;
	s1--;	
	}
	
}
	
	//ako su potopljeni svi brodovi
	if(s1==0) {
	system("CLS");
	
	//ploca 2. igraca sa svim brodovima (pogodjenim/potopljenim/promasenim)
	cout <<endl;
	cout << ime2 <<" je pobijedio, cestitamo!" << endl;
	cout << endl;
	cout << ime1  <<", ovako izgleda ploca pobjednika sa tvojim pogotcima i promasajima!" << endl;
	cout <<endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(k[i][j]==o)
		printf("%4.c",k[i][j]);
		
		else if(k[i][j]==p)
		printf("%4.c",k[i][j]);
		
		else if(m[i][j]=='O')
		printf("%4.c",m[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}
	system("pause");
	}
	
	Brodovi::gadjanje2();
	
}
	
	//nije doslo do pogotka
	else {
	l[i][j]=p;
	system("CLS");
	Brodovi::gadjanje1();
	}
	
}



//komp
void Brodovi::gadjanjek() {

	u=0;
	t=0;

	
	cout <<endl;
	cout << "Komp je na potezu" << endl;
	cout <<endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(l[i][j]==o)
		printf("%4.c",l[i][j]);
		
		else if(l[i][j]==p)
		printf("%4.c",l[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	
	
	
	i= rand() % 9+1;
	j= rand() % 9+1;
	
	if((l[i][j]==o)||(l[i][j]==p)) {
	system("CLS");
	Brodovi::gadjanjek();
	}
	
	cout <<endl;
	cout << "Unesite koordinate koje zelite gadjati" << endl;
	cout << i << endl;
	cout << j << endl;
	
	system("pause");
	system("CLS");
	
	//doslo je pogotka
	if(x[i][j]=='O') {
		
	i1=i;
	j1=j;
		
	Brodovi::potopljeno();
	
	if(s1==0) 
	Brodovi::pobjeda();
	
	if(t==1)
	Brodovi::gadjanjek();
	
	else Brodovi::faza1();
		
	}
	
	
	else {
	l[i][j]=p;
	system("CLS");
	Brodovi::gadjanje1();
	}
	
}



void Brodovi::faza1() {
	
	u=1;
	t=0;
	
	cout <<endl;
	cout << "Komp je na potezu" << endl;
	cout <<endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(l[i][j]==o)
		printf("%4.c",l[i][j]);
		
		else if(l[i][j]==p)
		printf("%4.c",l[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	
	
	r= rand() % 4;
	
	if(r==0) {
	i=i1-1;
	j=j1;
	}
	
	if(r==1) {
	i=i1;
	j=j1-1;
	}
	
	if(r==2) {
	i=i1;
	j=j1+1;
	}
	
	if(r==3) {
	i=i1+1;
	j=j1;
	}

	if((i<1)||(i>9)||(j<1)||(j>9)){
	system("CLS");
	Brodovi::faza1();
	}
	
	else {
	
	if((l[i][j]==o)||(l[i][j]==p)) {
	system("CLS");
	Brodovi::faza1();
	}
	
	
	cout << i << endl;
	cout << j << endl;
	
	system("pause");
	system("CLS");
	
	
	//doslo je pogotka
	if(x[i][j]=='O') {
		
	i2=i;
	j2=j;	
		
	Brodovi::potopljeno();

	if(s1==0) 
	Brodovi::pobjeda();

	if(t==1)
	Brodovi::gadjanjek();
	
	else Brodovi::faza2();	
	}
	
	
	else {
	l[i][j]=p;
	system("CLS");
	Brodovi::gadjanje1();
	}
	
}

}



void Brodovi::faza2() {
	
	u=2;
	t=0;
	
	cout <<endl;
	cout << "Komp je na potezu" << endl;
	cout <<endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(l[i][j]==o)
		printf("%4.c",l[i][j]);
		
		else if(l[i][j]==p)
		printf("%4.c",l[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	
	
	if(l[ii][jj]==p) {
		
	cout <<endl;
	cout << "Unesite koordinate koje zelite gadjati" << endl;
	i=i1+i1-i2;
	cout << i << endl;
	
	j=j1+j1-j2;
	cout << j << endl;
	
	system("pause");
	system("CLS");
		
	
	//doslo je pogotka
	if(x[i][j]=='O') {
		
	i3=i;
	j3=j;
		
	Brodovi::potopljeno();

	if(s1==0) 
	Brodovi::pobjeda();

	if(t==1)
	Brodovi::gadjanjek();
	
	else {	
	
	cout <<endl;
	cout << "Komp je na potezu" << endl;
	cout <<endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(l[i][j]==o)
		printf("%4.c",l[i][j]);
		
		else if(l[i][j]==p)
		printf("%4.c",l[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	
	
	cout <<endl;
	cout << "Unesite koordinate koje zelite gadjati" << endl;
	i=i3+i3-i1;
	cout << i << endl;
	
	j=j3+j3-j1;
	cout << j << endl;
	
	system("pause");
	system("CLS");
	
	//doslo je pogotka
	if(x[i][j]=='O') {
	Brodovi::potopljeno();

	if(s1==0) 
	Brodovi::pobjeda();

	if(t==1)
	Brodovi::gadjanjek();
		
	}	
	}
	
	}
	
	ii=100;
	jj=100;
}
	
	
	
	else {
		
	cout <<endl;
	cout << "Unesite koordinate koje zelite gadjati" << endl;
	i=i2+i2-i1;
	j=j2+j2-j1;
		
	
	if(l[i][j]==p) {
	system("CLS");
	ii=i;
	jj=j;
	Brodovi::faza2();
	}
	
	else if((i<1)||(i>9)||(j<1)||(j>9)){
	ii=i;
	jj=j;
	l[ii][jj]=p;
	system("CLS");
	Brodovi::faza2();
	}
	
	else{
	cout << i << endl;
	cout << j << endl;
	
	system("pause");
	system("CLS");
	
	
	//doslo je pogotka
	if(x[i][j]=='O') {
		
	i3=i;
	j3=j;
		
	Brodovi::potopljeno();

	if(s1==0) 
	Brodovi::pobjeda();

	if(t==1)
	Brodovi::gadjanjek();
	
	else Brodovi::faza3();	
	}
	
	
	else {
	l[i][j]=p;
	ii=i;
	jj=j;
	system("CLS");
	Brodovi::gadjanje1();
	}
	
	}
	}
	
}



void Brodovi::faza3() {
	
	u=3;
	t=0;
	
	cout <<endl;
	cout << "Komp je na potezu" << endl;
	cout <<endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(l[i][j]==o)
		printf("%4.c",l[i][j]);
		
		else if(l[i][j]==p)
		printf("%4.c",l[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}	
	
	if(l[iii][jjj]==p) {
		
	i=i1+i1-i2;
	cout << i << endl;
	
	j=j1+j1-j2;
	cout << j << endl;
	
	system("pause");
	system("CLS");
		
	//doslo je pogotka
	if(x[i][j]=='O') {
	Brodovi::potopljeno();

	if(s1==0) 
	Brodovi::pobjeda();

	if(t==1)
	Brodovi::gadjanjek();
	}	
	
	iii=100;
	jjj=100;	
	}
	
	else{
	cout <<endl;
	cout << "Unesite koordinate koje zelite gadjati" << endl;
	i=i3+i3-i2;
	
	j=j3+j3-j2;
		
	
	if(l[i][j]==p) {
	system("CLS");
	iii=i;
	jjj=j;
	Brodovi::faza3();
	}
	
	
	else if((i<1)||(i>9)||(j<1)||(j>9)){
	system("CLS");
	iii=i;
	jjj=j;
	l[iii][jjj]=p;
	Brodovi::faza3();
	}
	
	
	else {
	cout << i << endl;
	cout << j << endl;
	
	system("pause");
	system("CLS");
	
	
	//doslo je pogotka
	if(x[i][j]=='O') {
	Brodovi::potopljeno();

	if(s1==0) 
	Brodovi::pobjeda();

	if(t==1)
	Brodovi::gadjanjek();
	}
	
	
	else {
	l[i][j]=p;
	system("CLS");
	Brodovi::gadjanje1();
	}
}
	
}
}



//brod je potopljen (za komp 1 igraca)
void Brodovi::potopljeno() {

	l[i][j]=o;
	
	for(z=0;z<9;z++) {
	
	//potopljen je brod 4x1
	if((z==0)&&(  
	                
	((c[z]=='u')&&(l[a[z]][b[z]]=='X')&&(l[a[z]-1][b[z]]=='X')&&(l[a[z]-2][b[z]]=='X')&&(l[a[z]-3][b[z]]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z]-1)&&(j==b[z]))||((i==a[z]-2)&&(j==b[z]))||((i==a[z]-3)&&(j==b[z]))))||
	
	((c[z]=='d')&&(l[a[z]][b[z]]=='X')&&(l[a[z]+1][b[z]]=='X')&&(l[a[z]+2][b[z]]=='X')&&(l[a[z]+3][b[z]]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z]+1)&&(j==b[z]))||((i==a[z]+2)&&(j==b[z]))||((i==a[z]+3)&&(j==b[z]))))||
	
	((c[z]=='l')&&(l[a[z]][b[z]]=='X')&&(l[a[z]][b[z]-1]=='X')&&(l[a[z]][b[z]-2]=='X')&&(l[a[z]][b[z]-3]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z])&&(j==b[z]-1))||((i==a[z])&&(j==b[z]-2))||((i==a[z])&&(j==b[z]-3))))||
	
	((c[z]=='r')&&(l[a[z]][b[z]]=='X')&&(l[a[z]][b[z]+1]=='X')&&(l[a[z]][b[z]+2]=='X')&&(l[a[z]][b[z]+3]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z])&&(j==b[z]+1))||((i==a[z])&&(j==b[z]+2))||((i==a[z])&&(j==b[z]+3)))))) {
	
	
	if(c[z]=='u'){
	l[a[z]-4][b[z]-1]=p; l[a[z]-4][b[z]]=p;	l[a[z]-4][b[z]+1]=p; 
	l[a[z]-3][b[z]-1]=p; 					l[a[z]-3][b[z]+1]=p; 
	l[a[z]-2][b[z]-1]=p;					l[a[z]-2][b[z]+1]=p; 
	l[a[z]-1][b[z]-1]=p;					l[a[z]-1][b[z]+1]=p; 
	l[a[z]][b[z]-1]=p;						l[a[z]][b[z]+1]=p; 
	l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p; 
	}
	
	if(c[z]=='d'){
	l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p;	l[a[z]-1][b[z]+1]=p; 
	l[a[z]][b[z]-1]=p; 						l[a[z]][b[z]+1]=p; 
	l[a[z]+1][b[z]-1]=p;					l[a[z]+1][b[z]+1]=p; 
	l[a[z]+2][b[z]-1]=p;					l[a[z]+2][b[z]+1]=p; 
	l[a[z]+3][b[z]-1]=p;					l[a[z]+3][b[z]+1]=p; 
	l[a[z]+4][b[z]-1]=p; l[a[z]+4][b[z]]=p; l[a[z]+4][b[z]+1]=p; 
	}
	
	if(c[z]=='l'){
	l[a[z]-1][b[z]-4]=p; l[a[z]-1][b[z]-3]=p; l[a[z]-1][b[z]-2]=p; l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p; l[a[z]-1][b[z]+1]=p;
	l[a[z]][b[z]-4]=p; 																					   l[a[z]][b[z]+1]=p;	
	l[a[z]+1][b[z]-4]=p; l[a[z]+1][b[z]-3]=p; l[a[z]+1][b[z]-2]=p; l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p;
	}
	
	if(c[z]=='r'){
	l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p; l[a[z]-1][b[z]+1]=p; l[a[z]-1][b[z]+2]=p; l[a[z]-1][b[z]+3]=p; l[a[z]-1][b[z]+4]=p;
	l[a[z]][b[z]-1]=p; 																					   l[a[z]][b[z]+4]=p;	
	l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p; l[a[z]+1][b[z]+2]=p; l[a[z]+1][b[z]+3]=p; l[a[z]+1][b[z]+4]=p;
	}
	
	
	cout << "Brod 4x1 je potopljen!" << endl;
	w1--;
	cout << "Ostalo je jos " << w1 << " 4x1 brodova, " << w2 << " 3x1 brodova, " << w3 << " 2x1 brodova i " << w4 << " 1x1 brodova." << endl;
	s1--;
	t=1;
	}
	
	
	//potopljen je brod 3x1
	if(((z==1)||(z==2))&&(                  
	
	((c[z]=='u')&&(l[a[z]][b[z]]=='X')&&(l[a[z]-1][b[z]]=='X')&&(l[a[z]-2][b[z]]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z]-1)&&(j==b[z]))||((i==a[z]-2)&&(j==b[z]))))||
	
	((c[z]=='d')&&(l[a[z]][b[z]]=='X')&&(l[a[z]+1][b[z]]=='X')&&(l[a[z]+2][b[z]]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z]+1)&&(j==b[z]))||((i==a[z]+2)&&(j==b[z]))))||
	
	((c[z]=='l')&&(l[a[z]][b[z]]=='X')&&(l[a[z]][b[z]-1]=='X')&&(l[a[z]][b[z]-2]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z])&&(j==b[z]-1))||((i==a[z])&&(j==b[z]-2))))||
	
	((c[z]=='r')&&(l[a[z]][b[z]]=='X')&&(l[a[z]][b[z]+1]=='X')&&(l[a[z]][b[z]+2]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z])&&(j==b[z]+1))||((i==a[z])&&(j==b[z]+2)))))) {
		
	
	if(c[z]=='u'){
	l[a[z]-3][b[z]-1]=p; l[a[z]-3][b[z]]=p;	l[a[z]-3][b[z]+1]=p; 
	l[a[z]-2][b[z]-1]=p;					l[a[z]-2][b[z]+1]=p; 
	l[a[z]-1][b[z]-1]=p;					l[a[z]-1][b[z]+1]=p; 
	l[a[z]][b[z]-1]=p;						l[a[z]][b[z]+1]=p; 
	l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p; 
	}
	
	if(c[z]=='d'){
	l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p;	l[a[z]-1][b[z]+1]=p; 
	l[a[z]][b[z]-1]=p; 						l[a[z]][b[z]+1]=p; 
	l[a[z]+1][b[z]-1]=p;					l[a[z]+1][b[z]+1]=p; 
	l[a[z]+2][b[z]-1]=p;					l[a[z]+2][b[z]+1]=p; 
	l[a[z]+3][b[z]-1]=p; l[a[z]+3][b[z]]=p;	l[a[z]+3][b[z]+1]=p; 
	}
	
	if(c[z]=='l'){
	l[a[z]-1][b[z]-3]=p; l[a[z]-1][b[z]-2]=p; l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p; l[a[z]-1][b[z]+1]=p;
	l[a[z]][b[z]-3]=p;														   	      l[a[z]][b[z]+1]=p;	
	l[a[z]+1][b[z]-3]=p; l[a[z]+1][b[z]-2]=p; l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p;
	}
	
	if(c[z]=='r'){
	l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p; l[a[z]-1][b[z]+1]=p; l[a[z]-1][b[z]+2]=p; l[a[z]-1][b[z]+3]=p; 
	l[a[z]][b[z]-1]=p; 															      l[a[z]][b[z]+3]=p;				   
	l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p; l[a[z]+1][b[z]+2]=p; l[a[z]+1][b[z]+3]=p; 
	}
		
	
	cout << "Brod 3x1 je potopljen!" << endl;
	w2--;
	cout << "Ostalo je jos " << w1 << " 4x1 brodova, " << w2 << " 3x1 brodova, " << w3 << " 2x1 brodova i " << w4 << " 1x1 brodova." << endl;
	s1--;	
	t=1;
	}
	
	
	//potopljen je brod 2x1
	if(((z==3)||(z==4)||(z==5))&&(
	
	((c[z]=='u')&&(l[a[z]][b[z]]=='X')&&(l[a[z]-1][b[z]]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z]-1)&&(j==b[z]))))||
	
	((c[z]=='d')&&(l[a[z]][b[z]]=='X')&&(l[a[z]+1][b[z]]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z]+1)&&(j==b[z]))))||
	
	((c[z]=='l')&&(l[a[z]][b[z]]=='X')&&(l[a[z]][b[z]-1]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z])&&(j==b[z]-1))))||
	
	((c[z]=='r')&&(l[a[z]][b[z]]=='X')&&(l[a[z]][b[z]+1]=='X')&&
	(((i==a[z])&&(j==b[z]))||((i==a[z])&&(j==b[z]+1)))))) {
		
	
	if(c[z]=='u'){
	l[a[z]-2][b[z]-1]=p; l[a[z]-2][b[z]]=p;	l[a[z]-2][b[z]+1]=p; 
	l[a[z]-1][b[z]-1]=p;					l[a[z]-1][b[z]+1]=p; 
	l[a[z]][b[z]-1]=p;						l[a[z]][b[z]+1]=p; 
	l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p; 
	}
	
	if(c[z]=='d'){
	l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p;	l[a[z]-1][b[z]+1]=p; 
	l[a[z]][b[z]-1]=p; 						l[a[z]][b[z]+1]=p; 
	l[a[z]+1][b[z]-1]=p;					l[a[z]+1][b[z]+1]=p; 
	l[a[z]+2][b[z]-1]=p; l[a[z]+2][b[z]]=p;	l[a[z]+2][b[z]+1]=p; 
	}
	
	if(c[z]=='l'){
	l[a[z]-1][b[z]-2]=p; l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p; l[a[z]-1][b[z]+1]=p;
	l[a[z]][b[z]-2]=p;											 l[a[z]][b[z]+1]=p;	
	l[a[z]+1][b[z]-2]=p; l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p;
	}
	
	if(c[z]=='r'){
	l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p; l[a[z]-1][b[z]+1]=p; l[a[z]-1][b[z]+2]=p; 
	l[a[z]][b[z]-1]=p; 											 l[a[z]][b[z]+2]=p;     				   
	l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p; l[a[z]+1][b[z]+2]=p; 
	}
		
		
	cout << "Brod 2x1 je potopljen!" << endl;
	w3--;
	cout << "Ostalo je jos " << w1 << " 4x1 brodova, " << w2 << " 3x1 brodova, " << w3 << " 2x1 brodova i " << w4 << " 1x1 brodova." << endl;
	s1--;	
	t=1;
	}
	
	//potopljen je brod 1x1
	if(((z==6)||(z==7)||(z==8))&&(l[a[z]][b[z]]=='X')&&((i==a[z])&&(j==b[z]))) {
		
	
	l[a[z]-1][b[z]-1]=p; l[a[z]-1][b[z]]=p; l[a[z]-1][b[z]+1]=p;
	l[a[z]][b[z]-1]=p; 					 	l[a[z]][b[z]+1]=p;
	l[a[z]+1][b[z]-1]=p; l[a[z]+1][b[z]]=p; l[a[z]+1][b[z]+1]=p;
	
		
	cout << "Brod 1x1 je potopljen!" << endl;
	w4--;
	cout << "Ostalo je jos " << w1 << " 4x1 brodova, " << w2 << " 3x1 brodova, " << w3 << " 2x1 brodova i " << w4 << " 1x1 brodova." << endl;
	s1--;
	t=1;	
	}
	
}

	}



//ako su potopljeni svi brodovi (samo za 1 igraca)
void Brodovi::pobjeda() {
	
	system("CLS");
	
	//ploca 1. igraca sa svim brodovima (pogodjenim/potopljenim/promasenim)
	cout <<endl;
	cout <<"Racunalo je pobijedilo, cestitamo!" << endl;
	cout << endl;
	cout << ime1  <<", ovako izgleda ploca racunala sa tvojim pogotcima i promasajima!" << endl;
	cout <<endl;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			
		if(i==0) 
		y[i][j]=j;
		
		if(j==0) 
		y[i][j]=i;
		
		if((i==0)||(j==0))
		printf("%4.d",y[i][j]); 
		
		else if(k[i][j]==o)
		printf("%4.c",k[i][j]);
		
		else if(k[i][j]==p)
		printf("%4.c",k[i][j]);
		
		else if(m[i][j]=='O')
		printf("%4.c",m[i][j]);
		
		else 
		printf("%4.c",q);
		
		}
		cout << endl;
		cout << endl;
	}
	system("pause");
	
}




int main() {

	srand(time(0));
	
	Brodovi B;
	
	B.pocetak();
	
	pn=1;
	B.odabir();
	
	if(nj=='a')
	B.a1();
	
	if(nj=='m')
	B.m1();
	
	
	if(ni==2){
	
	pn=2;
	B.odabir();
	
	if(nj=='a')
	B.a2();
	
	if(nj=='m')
	B.m2();
	}
	
	else
	B.a2();
	
	
	system("CLS");
	cout <<endl;
	cout << "Mozete zapoceti s potapanjem brodova!" << endl;
	cout <<endl;
	
	
	B.gadjanje1();
	

system("pause");
return 0;

}
