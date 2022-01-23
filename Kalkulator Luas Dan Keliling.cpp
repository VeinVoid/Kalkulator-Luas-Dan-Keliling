#include <iostream>
using namespace std;

int main()
{
	int a, Mulai, End;
	
	cout << "Ketik Angka Yang Tertera Di Belakang Sama Dengan" << endl;
	
	cout << "1 = Persegi " << endl;
	cout << "2 = Persegi Panjang" << endl;
	cout << "3 = Segitiga" << endl;
	cout << "4 = Jajar Genjang" << endl;
	
	cout << "Masukan Rumus Yang Dinginkan = ";
	cin >> a;
	
	
	//Persegi
	if (a == 1)
	{
		int Sisi, Luas;
		
		cout << "1 = Luas" << endl;
		cout << "2 = Keliling" << endl;
		
		cout << "Masukkan Angka Di Atas = ";
		cin >> a;
		
		if (a == 1)
		{
			int Luas, Sisi;
		
		    cout << "Luas = S X S"<< endl;
		
		    cout << "Masukan Sisinya = ";
	        cin >> Sisi;
		    
		    Luas=Sisi*Sisi;
		    cout << "Luas Persegi Adalah = " << Luas << endl;
		    
		    cout << "Ketik Apa pun" << endl;
		    cin >> End;
	        return 0;
	    }
			
	
			
		
		if (a == 2)
		{
			int Keliling, Sisi;
			
			cout << "Keliling = S X 4"<< endl;
			
			cout << "Masukan Sisinya = ";
			cin >> Sisi;
			
			Keliling=Sisi*4;
			cout << "Keliling Persegi Adalah = " << Keliling << endl;
			
			cout << "Ketik Apa pun" << endl;
		    cin >> End;
			return 0; 
			
		}	
	}
	
	
	//Persegi Panjang
	if (a == 2)
	{
	
	
		cout << "1 = Luas"<< endl;
		cout << "2 = Keliling"<< endl;
		
		cout << "Masukkan Angka Di Atas = ";
		cin >> a;
		
		if (a == 1)
		{
			int Panjang, Lebar, Luas;
			
			cout << "2 (P X L)"<< endl;
			
			cout << "Panjang = ";
			cin >> Panjang;
			
			cout << "Lebar = ";
			cin >> Lebar;
			
			Luas=Panjang*Lebar;
			cout << "Luas Persegi Panjang = "<< Luas << endl;
		
			cout << "Ketik Apa pun" << endl;
		    cin >> End;
			return 0;
				
		}
		
		if (a == 2)
		{
			int Panjang, Lebar, Keliling;
			
			cout << "2 (P + L)" << endl;
			
			cout << "Panjang = ";
			cin >> Panjang;
			
			cout << "Lebar = ";
			cin >> Lebar;
			
			Keliling=Panjang*2+Lebar*2;
			cout << "Keliling Persegi Panjang = "<< Keliling << endl;
			
			cout << "Ketik Apa pun" << endl;
		    cin >> End;
			return 0;
		}
	}
	
	
	//Segitiga
	if (a == 3)
	{
		
		
		cout << "1 = Luas"<<endl;
		cout << "2 = Keliling"<<endl;
		
		cout << "Masukkan Angka Di Atas = ";
		cin >> a;
		
		if (a == 1)
		{
			int Alas, Tinggi, Luas;
			
			cout << "1/2 X a X t" <<endl;
			
			cout << "Alas = " ;
			cin >> Alas;
			
			cout << "Tinggi = " ;
			cin >> Tinggi;
			
			Luas=Alas*Tinggi/2;
			cout << "Luas Segitiga = " << Luas << endl;
			
			cout << "Ketik Apa pun"<<endl;
			cin>>End;
			return 0;
		}
		
		if (a == 2)
		{
			int Alas, Tinggi, SisiMiring, Keliling;
			
			cout << "S X S X S" << endl;
			
			cout << "Alas = ";
			cin >> Alas;
			
			cout << "Tinggi = ";
			cin >> Tinggi;
			
			cout << "Sisi Miring = ";
			cin >> SisiMiring;
			
			Keliling=Alas*Tinggi*SisiMiring;
			cout << "Keliling Segitiga = "<< Keliling << endl;
			
			cout << "Ketik Apa Pun"<<endl;
			cin>>End;
			return 0;
		}
	}
	
	
	//JajarGenjang
	if (a == 4)
	{
		
		
		cout<<"1 = Luas"<<endl;
		cout<<"2 = Keliling"<<endl;
		
		cout<<"Masukkan Angka Di Atas = ";
		cin >> a;
		
		if (a == 1)
		{
			int Alas, Tinggi, Luas;
			
			cout<<"a X t"<<endl;
			
			cout<<"Alas = ";
			cin>>Alas;
			
			cout<<"Tinggi = ";
			cin>>Tinggi;
			
			Luas=Alas*Tinggi;
			cout<<"Luas Jajar Genjang = "<< Luas<< endl;
			
			cout<<"Ketik Apa Pun"<<endl;
			cin>>End;
			return 0;
		}
		
		if (a == 2)
		{
			int Alas, Tinggi, Keliling;
			
			cout<<"2 (a + t)"<<endl;
			
			cout<<"Alas = ";
			cin>>Alas;
			
			cout<<"Tinggi = ";
			cin>>Tinggi;
			
			Keliling=2*(Alas+Tinggi);
			cout<<"Keliling Jajar Genjang = "<<Keliling<<endl;
			
			cout<<"Ketik Apa Pun"<<endl;
			cin>>End;
			return 0;
		}
	}
}
	
	
	

 
		
	
	

	


	
	

	
	
	

	


