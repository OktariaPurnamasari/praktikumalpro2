using namespace std;

class Output{
	public : 
		void cetak(){
			cout << "Struk pembelian Makanan" << endl;
			cout << "Yang dibeli : ";
			cout << " Ayam goreng -> " << data_file[0] << endl;
			cout << " Ayam bakar  -> " << data_file[1] << endl; 
      cout << " Udang Goreng -> " << data_file[2] << endl;
      cout << " Cumi Goreng -> " << data_file[3] <<endl;
      cout << " Ayam Geprek -> " <<data_file[4] <<endl;
			// cout << "Harga total Rp" << data_file[0] << endl;
			// cout << "Diskon      Rp" << data_file[1] << endl;
			// cout << "Harga bayar Rp" << data_file[2] << endl; 
		}

		void getData(){
			ambil_data.open("../pra_data/proses.txt");
			while(!ambil_data.eof()){
				ambil_data >> data_file[index];
        index += 1;
			}
			ambil_data.close();
		}

		private :
		  ifstream ambil_data;
		  string data_file[100];
		  int index = 0;
};