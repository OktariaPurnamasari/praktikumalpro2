using namespace std;

class Input {
	public :
	 void cetak(){
	 	cout << "Aplikasi penjualan ayam \n";
    cout << "Menu yang tersedia : \n";
    cout << "1) Ayam goreng Rp. 17000 \n\n";
    cout << "2) Ayam bakar Rp. 21000 \n\n";
    cout << "3) Udang Goreng Rp. 21000 \n\n";
    cout << "4) Cumi Goreng Rp. 20000 \n\n";
    cout << "5) Ayam Geprek Rp. 25000 \n\n";
    cout << "Pesan Ayam Goreng -> "; cin >> bnyk_aymGr;
    cout << "Pesan Ayam Bakar -> "; cin >> bnyk_aymBk;
    cout << "Pesan Udang Goreng -> "; cin >> bnyk_udaGr;
    cout << "Pesan Cumi Goreng -> "; cin >> bnyk_cuMi;
    cout << "Pesan Ayam Geprek -> "; cin >> bnyk_aymGprk;
    cout << endl;   
	 }

   void toFile(){
     tulis_data.open("../pra_data/input.txt");
     tulis_data << bnyk_aymGr << endl;
     tulis_data << bnyk_aymBk << endl;
     tulis_data << bnyk_udaGr << endl;
     tulis_data << bnyk_cuMi << endl;
     tulis_data << bnyk_aymGprk;
     tulis_data.close();
   }

  private :
      ofstream tulis_data;
      int bnyk_aymGr, bnyk_aymBk, bnyk_udaGr, bnyk_cuMi, bnyk_aymGprk;
};