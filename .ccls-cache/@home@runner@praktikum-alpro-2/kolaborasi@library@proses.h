using namespace std;

class Proses {
public:
  void getData(){
      ambildata.open("../pra_data/input.txt");
      sementara=0;
      while(!ambildata.eof()){
        switch(sementara){
          case 0:
            ambildata>>bnyk_aymGr;
            sementara++;
            break;
          case 1:
            ambildata>>bnyk_aymBk;
            sementara++;
            break;
          case 2:
            ambildata>>bnyk_cmGr;
            sementara++;
            break;
          case 3:
            ambildata>>bnyk_ugGr;
            sementara++;
            break;
          case 4:
            ambildata>>bnyk_aymgp;
            sementara++;
            break;
        }
      }
      ambildata.close();
    }
    

  void toFile() {
    int total = (hrg_aymGr * bnyk_aymGr) + (hrg_aymBk * bnyk_aymBk) + (hrg_ugGr * bnyk_ugGr) + (hrg_cmGr * bnyk_cmGr) + (hrg_aymgp * bnyk_aymgp);
    float batas = 150000;
    float t2 = float(total);
    float diskon = t2 * 0.35;

    if (total >= batas)
      t2 = t2 - diskon;

    tulis_data.open("../pra_data/proses.txt");
    tulis_data << total << endl;
    tulis_data << diskon << endl;
    tulis_data << t2 << endl;
    tulis_data << bnyk_aymGr << endl;
    tulis_data << bnyk_aymBk << endl;
    tulis_data << bnyk_cmGr << endl;
    tulis_data << bnyk_ugGr << endl;
    tulis_data << bnyk_aymgp;
    tulis_data.close();
  }

private:
  ifstream ambildata;
  ofstream tulis_data;
  int bnyk_aymGr, bnyk_aymBk, bnyk_cmGr, bnyk_ugGr, bnyk_aymgp;
  int hrg_aymGr = 17000, hrg_aymBk = 21000, hrg_cmGr=21000, hrg_ugGr=21000, hrg_aymgp=25000;
  int sementara;
};