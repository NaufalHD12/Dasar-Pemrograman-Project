#include <iostream> //library untuk input dan output
#include <fstream>  //untuk membaca dan menulis kedalam file txt

// Anggota : // M RIZA BUCCHARELLI (2207058)
// NAUFAL HADI DARMAWAN (2203011)
// SAEFUL RIZAL (2207056)
// SARAH NINDYA PRAMESTHI (2200013)

using namespace std;
char ulang;

void fitur1() // fungsi
{
    system("cls");    // berfungsi untuk membersihkan layar program
    float bb, tb, bi; // type data bisa untuk bilangan yang ber koma ,
    int input;

    cout << "  Menghitung Berat dan Tingi Badan Ideal Anda \n";
    cout << "=========================================" << endl;
    cout << "  Pilih yang akan dihitung\n";
    cout << "  [1] Berat Badan   \n";
    cout << "  [2] Tinggi Badan  \n";
    cout << "=========================================" << endl;
    cout << "  Pilih Program yang Digunakan [1]/[2] ? ";
    cin >> input;
    system("cls");
    if (input == 1) // jika input angka 1 akan tampil  seperti dibawah ini
    {
        float bb, tb, bi; // type data bisa untuk bilangan yang ber koma ,
        int masuk;
        cout << "  Apakah Jenis Kelamin Anda "
             << " ." << endl;
        cout << "=========================================" << endl;
        cout << "   [3] Pria\n";
        cout << "   [4] Wanita\n";
        cout << "=========================================" << endl;
        cout << "   Pilih [3]/[4] ? \n";
        cout << "=========================================\n"
             << endl;
        cin >> masuk;

        if (masuk == 3) // jika input angka 3 akan tampil  seperti dibawah ini
        {
            cout << " Berat Ideal "
                 << " (Pria)\n";
            cout << "=========================================\n"
                 << endl;
            cout << " Masukan Tinggi Badan (cm)= ";
            cin >> tb;
            bi = (tb - 100) - (0.1 * (tb - 100));
            cout << "\nJadi, Berat Badan Ideal Anda =  ";
            cout << bi << "Kg";
            cout << "\n Ingin kembali ke menu? (y/n)\n";
            cin >> ulang;
        }
        else
        {
            if (masuk == 4) // jika input angka 4 akan tampil  seperti dibawah ini
            {
                cout << "   Berat Badan Ideal  "
                     << " (Wanita) \n";
                cout << "=========================================\n"
                     << endl;
                cout << "   Masukan Tinggi Badan Anda (cm)= ";
                cin >> tb;
                bi = (tb - 100) - (0.15 * (tb - 100));
                cout << "\n Jadi, Berat Badan Ideal Anda = ";
                cout << bi;
                cout << "Kg ";

                cout << "\n Ingin kembali ke menu? (y/n)\n"; // kemnbali kehalaman main (pertama)
                cin >> ulang;
            }
            else // bila salah input maka akan tampil sperti ini
            {
                cout << "inputan salah" << endl;
                cout << "Ingin kembali ke menu? (y/n)" << endl;
                cin >> ulang;
                system("cls");
            }
        }
    }
    else
    {
        if (input == 2) // jika input angka 2 akan tampil  seperti dibawah ini
        {
            cout << "=========================================\n"
                 << endl;
            cout << "   Menghitung Tinggi Badan\n";
            cout << "=========================================\n"
                 << endl;
            float bb, tb, bi;
            int masuk;
            cout << "    [3] PRIA\n";
            cout << "    [4] WANITA\n";
            cout << "=========================================\n"
                 << endl;
            cout << "    Pilih [3]/[4] ?";
            cin >> masuk;

            if (masuk == 3) // jika input angka 3 akan tampil  seperti dibawah ini
            {
                cout << "=========================================\n"
                     << endl;
                cout << "   Tinggi Ideal Pria\n";

                cout << "   Masukan Berat Badan (kg)= ";
                cin >> bb;
                bi = (bb + 100) + (0.1 * (tb + 100));
                cout << "\n Jadi, Tinggi Badan Ideal Anda = ";
                cout << bi;
                cout << " CM" << endl;
                cout << "=========================================\n"
                     << endl;
                cout << "\n Ingin kembali ke menu? (y/n)\n";
                cin >> ulang;
            }
            else
            {
                if (masuk == 4) // jika input angka 4 akan tampil  seperti dibawah ini
                {
                    cout << "=========================================\n"
                         << endl;
                    cout << "  Tinggi Ideal Wanita\n";

                    cout << "  Masukan Berat Badan (kg)= ";
                    cin >> tb;
                    bi = (tb + 100) + (0.15 * (tb + 100));
                    cout << "\nJadi, Tinggi Badan Ideal Anda= ";
                    cout << bi;
                    cout << " CM" << endl;
                    cout << "=========================================\n"
                         << endl;
                    cout << "\n Ingin kembali ke menu? (y/n)\n";
                    cin >> ulang;
                }
                else // jika salah input tampil sperti ini
                {
                    cout << "inputan salah" << endl;
                    cout << "Ingin kembali ke menu? (y/n)" << endl;
                    cin >> ulang; // kembali ke menu main
                    system("cls");
                }
            }
        }
    }
}
void fitur2()
{                              // fungsi pilihan 2
    system("cls");             // membersihkan layar program seperti reset
    float bb1, tba1, tb1, imt; // tipe data
    cout << "=========================================" << endl;
    cout << "Mengetahui Indeks Dan Keadaan tubuh	" << endl;
    cout << "========================================= " << endl;
    cout << "Masukkan Berat Badan dalam satuan (kg) :  ";
    cin >> bb1;
    cout << "Masukkan Tinggi Badan dalam satuan (cm) :  ";
    cin >> tb1;

    tba1 = tb1 / 100;
    imt = bb1 / (tba1 * tba1);
    cout << "=========================================\n"
         << endl;
    cout << "Indeks masa tubuh anda \n"
         << imt << endl;
    cout << "Keadaan tubuh:  ";
    if (imt > 27)
    {
        cout << "obesitas";
    }
    else if (imt > 25 && imt <= 27)
    {
        cout << "gemuk" << endl;
    }
    else if (imt >= 18 && imt <= 25)
    {
        cout << "normal" << endl;
    }
    else if (imt >= 17 && imt < 18)
    {
        cout << "kurus" << endl;
    }
    else
    {
        cout << "sangat kurus";
    }
    cout << " \n Kembali Ke Menu ?? (y/n) ";
    cin >> ulang; // kembali ke menu utama
}

void fitur3()
{
    system("cls");

    // tipe data string dan int
    int fud, kal1, kal2, kal3, kal4, kal5, hasil;
    string kan1, kan2, kan3, kan4, kan5;
    ofstream myfile; // stream untuk menulis file

    // membuka file,
    // jika file tidak ditemukan maka file akan otomatis dibuat
    myfile.open("Makanan.txt", ios::app);
    cout << "====================================" << endl;
    cout << " Catatan Makanan Yang Di makan Sehari Hari anda  " << endl;
    cout << " Ketikan - " << endl;
    cout << " Ketikan 0  " << endl;
    cout << " Bila Makanan Yang dimakan kelebihan" << endl;
    cout << "====================================" << endl;

    cout << " 1. Input Nama Makanan Yang telah dimakan : ";
    cin >> kan1;
    cout << "    Input Jumlah Kalori Makanan tersebut :  ";
    cin >> kal1;
    cout << " 2. Input Nama Makanan Yang telah dimakan : ";
    cin >> kan2;
    cout << "    Input Jumlah Kalori Makanan tersebut :  ";
    cin >> kal2;
    cout << " 3. Input Nama Makanan Yang telah dimakan : ";
    cin >> kan3;
    cout << "    Input Jumlah Kalori Makanan tersebut :  ";
    cin >> kal3;
    cout << " 4. Input Nama Makanan Yang telah dimakan : ";
    cin >> kan4;
    cout << "    Input Jumlah Kalori Makanan tersebut :  ";
    cin >> kal4;
    cout << " 5. Input Nama Makanan Yang telah dimakan : ";
    cin >> kan5;
    cout << "    Input Jumlah Kalori Makanan tersebut :  ";
    cin >> kal5;
    hasil = kal1 + kal2 + kal3 + kal4 + kal5;

    if (!myfile.eof()) // EOF (End of File) : Tanda yang menyatakan bahwa pembacaan telah sampai pada record terakhir dari sebuah file.
    {
        // menulis ke dalam file
        myfile << endl;
        myfile << "===========================================" << endl;
        myfile << " Daftar Makanan Dan Kalorinya " << endl;
        myfile << "===========================================" << endl;
        myfile << "Makanan  : " << kan1 << endl;
        myfile << "Kalori   : " << kal1 << " Kalori" << endl;
        myfile << "Makanan  : " << kan2 << endl;
        myfile << "Kalori   : " << kal2 << " Kalori" << endl;
        myfile << "Makanan  : " << kan3 << endl;
        myfile << "Kalori   : " << kal3 << " Kalori" << endl;
        myfile << "Makanan  : " << kan4 << endl;
        myfile << "Kalori   : " << kal4 << " Kalori" << endl;
        myfile << "Makanan  : " << kan5 << endl;
        myfile << "Kalori   : " << kal5 << " Kalori \n"
               << endl;
        myfile << "==================================================" << endl;
        myfile << " Total Kalori Makanan di Makan Yaitu :  " << hasil << " Kalori" << endl;
        myfile << "================================================== \n \n"
               << endl;
        myfile.close(); // menutup file
        cout << "===========================================" << endl;
        cout << " Daftar makanan telah ditulis ke dalam File" << endl;
        cout << "==========================================" << endl;
    }
    else
    {
        cout << "File tidak ditemukan" << endl;
    }
    cout << " Kembali Ke Menu ?? (y/n) ";
    cin >> ulang;
}

void fitur4() // fungsi pilihan menu 4
{

    system("cls");                                            //// berfungsi untuk membersihkan layar program
    string sertifikat[3] = {"vaksin1", "vaksin2", "vaksin3"}; // array  yang berisi 3 nama
    string vak1, apa, vak, name, belakang, nik;
    string hasi, hasil;
    cout << "==========================================" << endl;
    cout << "Menampilkan Sertifikat Vaksin \n"
         << endl;
    cout << "==========================================" << endl;

    cout << "Masukan Nama Depan Anda : ";
    cin >> name;
    cout << "Masukan Nama Belakang Anda : ";
    cin >> belakang;
    cout << "Masukan NIK Anda : ";
    cin >> nik;
    cout << "=========================================\n";
    cout << "Apakah " << name << " Sudah di vaksin (sudah/belom)?";
    cin >> apa;

    if (apa == "sudah")
    { // jika sudah vaksin maka tampoil seperti ini

        cout << " Contoh : vaksin1 , vaksin2 , vaksin3" << endl;
        cout << "input Sertifikat Vaksin Yang Anda Butuhkan: ";
        cin >> vak;
        cout << " Input Lokasi Vaksin  : ";
        cin >> vak1;

        for (int a = 0; a < 3; a++)
        {

            if (vak == sertifikat[a]) // jika vak adalah array sertifikat  (vaksin1,2,3) maka tampil begini
            {
                system("cls");
                cout << "=========================================================== " << endl;
                cout << " \t\t Sertifikat " << vak << endl;
                cout << "==========================================================" << endl;
                cout << "\t Halo " << name << " " << belakang << " Kamu Telah di " << vak << endl;
                cout << "\t\t  NIK : " << nik << endl;
                cout << "\t Telah di " << vak << " di" << vak1 << endl;
                cout << "===========================================================" << endl;
                cout << "\t\t Jaga Kesehatan Tubuh Anda " << endl;

                hasi = sertifikat[a];
            }
        }
        if (hasil == hasi)
        {
            // bila vak bukan sertifikat ( vaksin1,2,3 ) selain dari ini maka akan muncul ini
            cout << "\t\t Sertifikat " << hasil << " tidak ditemukan\n " << endl;
        }
        else
            cout << "\t\t Sertifikat " << hasil << " ditemukan \n " << endl;
    }
    else
    { // jika belom vaksin maka akan begini
        cout << "=========================================================" << endl;
        cout << " Ayokkk Vaksin Dulu Agar Tubuh Mu Kuat  Dari segala virus" << endl;
        cout << "========================================================= \n \n"
             << endl;
    }

    cout << " Kembali Ke Menu ?? (y/n) ";
    cin >> ulang; // kembali ke menu utama main
}

int main() // menu main utama
{

    int i;
    string pass, user, nama;
    string username = "kelompok8"; // username
    string password = "sehat";     // password
    string login = "block";        // block perulangan
    i = 1;

    do
    {
        system("cls");
        cout << "====================================" << endl;
        cout << "| Program Kesehatan Tubuh          |" << endl;
        cout << "|==================================|" << endl;
        cout << "| Silahkan Login Terlebih dahulu   |" << endl;
        cout << "|----------------------------------|" << endl;
        cout << "| Masukkan Usernama Anda  : ";
        cin >> user;
        cout << "| Masukkan Password Anda  : ";
        cin >> pass;
        cout << "|==================================|" << endl;
        if (user == username && pass == password) // jika user sama dengan username dan pass samadengan password maka muncull seperti ini
        {
            system("cls");
            int pil;
            i = 4;
            login = "berhasil";

            do
            {
                system("cls");

                cout << "=================================" << endl;
                cout << "Selamat Datang Di Program Kesehatan Tubuh " << endl;
                cout << "=================================" << endl;
                cout << "1. Menghitung Tinggi dan berat Badan Ideal Anda " << endl;
                cout << "2. Mengetahui Indeks dan Keadaan Tubuh Anda " << endl;
                cout << "3. Input Makanan Yang dimakan" << endl;
                cout << "4. Sertifikat Vaksin" << endl;
                cout << "5. Logout  " << endl;
                cout << "=================================" << endl;
                cout << "Masukan pilihan  1-5 = ";
                cin >> pil;

                switch (pil)
                {

                case 1: // memanggil fitur 1
                    system("cls");
                    fitur1();
                    break; // berhenti atau penutup
                case 2:    // memanggil fitur 2
                    system("cls");
                    fitur2();
                    break; // berhenti atau penutup
                case 3:    // memanggil fitur 3
                    system("cls");
                    fitur3();
                    break; // berhenti atau penutup
                case 4:    // memanggil fitur 4
                    system("cls");
                    fitur4();
                    break;  // berhenti atau penutup
                case 5:     // memanggil fitur 5
                    main(); // kwmbali ke menu main
                    break;  // berhenti atau penutup
                default:
                    cout << "Salah Input ";
                }
                system("cls");
            } while (ulang == 'y'); // condition
            system("cls");
        }
        else
        { // jika 3 kali salah mengisi pass dan user maka tampil seperti ini
            cout << "Username / Password Salah! (" << i << "x)\n";
            i = i + 1;
        }
    } while (i <= 3); // condition  i kurang dari 3

    return 0; // bahwa kode telah selesai
}
