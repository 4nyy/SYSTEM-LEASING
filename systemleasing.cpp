#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>
using namespace std;

void judul()
{
    cout << "========================================WELCOME SYSTEM LEASING=======================================" << endl;
    cout << "========================================KELOMPOK 2 SABTU PAGII=======================================" << endl;
}

class motor
{
public:
    long double bulan;
    long double dp;
    long double harga;
};

typedef struct
{
    char namaJalan[20], kelurahan[20], kecamatan[20], rt[20], rw[20], noRumah[20], username[20], password[20], noHp[20], firstname[20], lastname[20], custid[20], kota[20];
} data;

int main()
{
    // DATA
    long int penghasilan = 0;

    // ALAMAT
    string username1, forgotId, forgotNohp, address, status;
    string password1;
    data regist;
    // PRODUCT
    bool beli = false, dataBeli = false;
    string type = "none";
    long double dp = 0, bulan = 0, belumBayar = 0, bayar = 0, harga = 0;
    // FAMILY
    // double bunga = (10/100)/12;
    int durasi = 0;
    double bunga = 8;
    double bungaPerbulan = (bunga / 100) / 12.0;

    //  HONDA
    motor beat;
    beat.dp = 3000000;
    beat.harga = 15000000;
    beat.bulan = (beat.harga - beat.dp);
    motor vario;
    vario.dp = 5000000;
    vario.harga = 20000000;
    vario.bulan = (vario.harga - vario.dp);
    // YAMAHA
    motor fazzio;
    fazzio.dp = 5000000;
    fazzio.harga = 23000000;
    fazzio.bulan = (fazzio.harga - fazzio.dp);
    motor nmax;
    nmax.harga = 31000000;
    nmax.dp = 7000000;
    nmax.bulan = (nmax.harga - nmax.dp);
    // SUZUKI
    motor nex;
    nex.dp = 4000000;
    nex.harga = 19000000;
    nex.bulan = (nex.harga - nex.dp);
    motor gsx;
    gsx.dp = 8000000;
    gsx.harga = 35000000;
    gsx.bulan = (gsx.harga - gsx.dp);
    // choices
    int choicesInt;
    string choiceStr;
regist:
    judul();
    cout << "\t========REGISTRASI=========";
    cout << "\n\tUsername               : ";
    cin.getline(regist.username, 20); // meminta user untuk memasukan username
    cout << "\tPassword               : ";
    cin.getline(regist.password, 20); // meminta user untuk memasukan password
    system("cls");
    judul();
    cout << "\t========REGISTRASI=========";
    cout << "\n\tDATA DIRI";
    cout << "\n\tNama depan             : ";
    cin.getline(regist.firstname, 20); // meminta user untuk memasukan firstname
    cout << "\tNama belakang          : ";
    cin.getline(regist.lastname, 20); // meminta user untuk memasukan lastname
    cout << "\tNomor hp               : ";
    cin.getline(regist.noHp, 20); // meminta user untuk memasukan no Hp
    cout << "\tNIK                    : ";
    cin.getline(regist.custid, 20); // meminta user untuk memasukan custid
    cout << "\tStatus (single/family) : ";
    cin >> status; // meminta user untuk memasukan status
    cout << "\tPenghasilan            : ";
    cin >> penghasilan;
    system("cls");
    judul();
    cout << "\t========REGISTRASI=========";
    cout << "\n\tALAMAT";
    cin.ignore();
    cout << "\n\tNama Jalan             : ";
    cin.getline(regist.namaJalan, 20);
    cout << "\tRT                     : ";
    cin.getline(regist.rt, 20);
    cout << "\tRW                     : ";
    cin.getline(regist.rw, 20);
    cout << "\tNomor Rumah            : ";
    cin.getline(regist.noRumah, 20);
    cout << "\tKelurahan              : ";
    cin.getline(regist.kelurahan, 20);
    cout << "\tKecamatan              : ";
    cin.getline(regist.kecamatan, 20);
    cout << "\tKota                   : ";
    cin.getline(regist.kota, 20);

    // Mengatur ukuran kursor dan menghilangkan tampilan kursor pada layar
    CONSOLE_CURSOR_INFO cursor_info = {100, false};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);

    // Menggambar animasi loading
    for (int i = 0; i < 100; i++)
    {
        cout << "\rProgress : ["; // kursor mundur ke awal baris
        for (int j = 0; j < i / 5; j++)
        {
            cout << "=";
        }
        for (int j = i / 5; j < 20; j++)
        {
            cout << " ";
        }
        cout << "] " << i << "%"; // persentase loading
        Sleep(10);                // waktu jeda sebelum menggambar frame berikutnya
    }
    cout << "\nPENDAFTARAN BERHASIL" << endl;
    system("pause");
    system("cls");

login:

    judul();
    cout << "\t=========LOGINPAGE=========" << endl;
    cout << "\n\t1. Login ";
    cout << "\n\t2. Lupa Password ";
    cout << "\n\tMasukan Pilihan anda : ";
    cin >> choicesInt;
    system("cls");
    if (choicesInt == 1)
    {
        cout << "\t=========LOGINPAGE=========" << endl;
        cout << "\n\tUsername   : ";
        cin >> username1; // meminta user untuk memasukan username untuk login
        cout << "\tPassword   : ";
        cin >> password1; // meminta user untuk memasukan password untuk login
        system("cls");
        // Menggambar animasi loading
        for (int i = 0; i < 100; i++)
        {
            cout << "\rProgress : ["; // kursor mundur ke awal baris
            for (int j = 0; j < i / 5; j++)
            {
                cout << "=";
            }
            for (int j = i / 5; j < 20; j++)
            {
                cout << " ";
            }
            cout << "] " << i << "%"; // persentase loading
            Sleep(10);                // waktu jeda sebelum menggambar frame berikutnya
        }
        if (username1 == regist.username && password1 == regist.password) // masuk ke beranda
        {
            cout << "\nLOGIN BERHASIL" << endl;
            system("pause");
            system("cls");
        beranda:
            judul();
            cout << "\t=========BERANDA=========";
            cout << "\n\tHallo Selamat Datang " << regist.firstname << " " << regist.lastname << endl;
            cout << "\n\t1. Data pribadi ";        // data pribadi
            cout << "\n\t2. Produk";               // product
            cout << "\n\t3. Pembayaran";           // bayar
            cout << "\n\t4. Struck";               // Struck
            cout << "\n\t5. logout";               // keluar
            cout << "\n\tMasukan pilihan anda : "; // pemilihan user
            cin >> choicesInt;
            system("cls");
            if (choicesInt == 1) // melihat data user
            {
                for (int i = 0; i < 100; i++)
                {
                    cout << "\rProgress : ["; // kursor mundur ke awal baris
                    for (int j = 0; j < i / 5; j++)
                    {
                        cout << "=";
                    }
                    for (int j = i / 5; j < 20; j++)
                    {
                        cout << " ";
                    }
                    cout << "] " << i << "%"; // persentase loading
                    Sleep(10);                // waktu jeda sebelum menggambar frame berikutnya
                }
                system("cls");
            data:
                cout << "\t=========PERSONAL DATA=========";
                cout << "\n\t7. Username      : " << regist.username;
                cout << "\n\t8. Password      : " << regist.password;
                cout << "\n\t1. Nama depan    : " << regist.firstname;
                cout << "\n\t2. Nama Belakang : " << regist.lastname;
                cout << "\n\t3. No Hp         : " << regist.noHp;
                cout << "\n\t4. NIK           : " << regist.custid;
                cout << "\n\t5. status        : " << status;
                cout << "\n\t6. penghasilan   : Rp." << penghasilan;
                cout << "\n\t9. Nama Jalan    : " << regist.namaJalan;
                cout << "\n\t10. RT           : " << regist.rt;
                cout << "\n\t11. RW           : " << regist.rw;
                cout << "\n\t12. Nomor Rumah  : " << regist.noRumah;
                cout << "\n\t13. Kelurahan    : " << regist.kelurahan;
                cout << "\n\t14. Kecamatan    : " << regist.kecamatan;
                cout << "\n\t15. Kota         : " << regist.kota;
                cout << "\n\t0. Beranda";
                cout << "\n\tMau mengedit data kamu ? (1/14) : ";
                cin >> choicesInt;
                system("cls");
                if (choicesInt == 1) // mengedit data user
                {
                    cin.ignore();
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tNama depan          : ";
                    cin.getline(regist.firstname, 20);
                    system("cls");
                    goto data;
                }
                if (choicesInt == 2)
                {
                    cin.ignore();
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tNama Belakang       : ";
                    cin.getline(regist.lastname, 20);
                    system("cls");
                    goto data;
                }
                if (choicesInt == 3)
                {
                    cin.ignore();
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tNo Hp               : ";
                    cin.getline(regist.noHp, 20);
                    system("cls");
                    goto data;
                }
                if (choicesInt == 4)
                {
                    cin.ignore();
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tNIK                   : ";
                    cin.getline(regist.custid, 20);
                    system("cls");
                    goto data;
                }
                if (choicesInt == 5)
                {
                    cin.ignore();
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tStatus (single/family): ";
                    cin >> status;
                    system("cls");
                    goto data;
                }
                if (choicesInt == 6)
                {
                    cin.ignore();
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tPenghasilan          : Rp.";
                    cin >> penghasilan;
                    system("cls");
                    goto data;
                }
                if (choicesInt == 7)
                {
                    cin.ignore();
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tUsername             : ";
                    cin.getline(regist.username, 20);
                    system("cls");
                    goto data;
                }
                if (choicesInt == 8)
                {
                    cin.ignore();
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tPassword             : ";
                    cin.getline(regist.password, 20);
                    system("cls");
                    goto data;
                }
                if (choicesInt == 9)
                {
                    cin.ignore();
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\t Nama Jalan          : JL ";
                    cin.getline(regist.namaJalan, 20);
                    system("cls");
                    goto data;
                }
                if (choicesInt == 10)
                {
                    cin.ignore();
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tRT                   : ";
                    cin.getline(regist.rt, 20);
                    system("cls");
                    goto data;
                }
                if (choicesInt == 11)
                {
                    cin.ignore();
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tRW                   : ";
                    cin.getline(regist.rw, 20);
                    system("cls");
                    goto data;
                }
                if (choicesInt == 12)
                {
                    cin.ignore();
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tNo rumah             : ";
                    cin.getline(regist.noRumah, 20);
                    system("cls");
                    goto data;
                }
                if (choicesInt == 13)
                {
                    cin.ignore();
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tKelurahan            : ";
                    cin.getline(regist.kelurahan, 20);
                    system("cls");
                    goto data;
                }
                if (choicesInt == 14)
                {
                    cin.ignore();
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tKecamatan            : ";
                    cin.getline(regist.kecamatan, 20);
                    system("cls");
                    goto data;
                }
                if (choicesInt == 15)
                {
                    cin.ignore();
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tKota                 : ";
                    cin.getline(regist.kota, 20);
                    system("cls");
                    goto data;
                }
                else
                {
                    goto beranda;
                }
            }

            // start product

            else if (choicesInt == 2)
            {
                if (dataBeli == false)
                {
                product:
                    if (status == "single" && penghasilan >= 4000000)
                    {
                        durasi = 12;
                        cout << "\t=========PRODUCT=========";
                        cout << "\n\t1. Honda";
                        cout << "\n\t2. Yamaha";
                        cout << "\n\t3. Suzuki";
                        cout << "\n\t4. Kembali";
                        cout << "\n\tMasukan pilihan Anda (1/4): ";
                        cin >> choicesInt;
                        system("cls");

                        // HONDA START
                        // HONDA START
                        // HONDA START
                        // HONDA START
                        if (choicesInt == 1)
                        {
                            cout << "\t=========HONDA=========";
                            cout << "\n\t1. Honda Beat Angsuran 12 kali";
                            cout << "\n\t2. Honda Vario Angsuran 12 kali";
                            cout << "\n\tMasukan Pilihan Anda : ";
                            cin >> choicesInt;
                            system("cls");
                            // BEAT START
                            // BEAT START
                            // BEAT START
                            if (choicesInt == 1)
                            {
                                harga = beat.harga;
                                type = "Honda Beat";
                                dp = beat.dp;
                                bulan = (beat.bulan / durasi) + (beat.bulan * bungaPerbulan);
                                belumBayar = ((beat.bulan / durasi) + (beat.bulan * bungaPerbulan)) * durasi; // pinjaman
                                cout << "\t=========HONDA=========";
                                cout << "\n\tAnda memilih " << type << " Angsuran " << durasi << " kali";
                                cout << "\n\tHarga : Rp." << fixed << setprecision(0) << beat.harga;
                                cout << "\n\tTotal Pinjaman : Rp." << fixed << setprecision(0) << belumBayar;
                                cout << "\n\tDP : Rp." << fixed << setprecision(0) << beat.dp;
                                cout << "\n\tPerbulan : Rp." << fixed << setprecision(0) << bulan;
                                cout << "\n\tbunga pertahun :" << bunga << " %";
                                cout << "\n\tApakah mau lanjut (Y/N) : ";
                                cin >> choiceStr;
                                system("cls");
                                if (choiceStr == "y" || choiceStr == "Y")
                                {
                                    dataBeli = true;
                                    beli = true;
                                    goto pembayaran;
                                }
                                else
                                {
                                    goto product;
                                }
                            }
                            // BEAT END
                            // BEAT END
                            // BEAT END

                            // VARIO START
                            // VARIO START
                            // VARIO START
                            if (choicesInt == 2)
                            {
                                harga = vario.harga;
                                type = "Honda Vario";
                                dp = vario.dp;
                                bulan = (vario.bulan / durasi) + (vario.bulan * bungaPerbulan);
                                belumBayar = ((vario.bulan / durasi) + (vario.bulan * bungaPerbulan)) * durasi; // pinjaman
                                cout << "\t=========HONDA=========";
                                cout << "\n\tAnda memilih " << type << " Angsuran " << durasi << " kali";
                                cout << "\n\tHarga : Rp." << fixed << setprecision(0) << vario.harga;
                                cout << "\n\tTotal Pinjaman : Rp." << fixed << setprecision(0) << belumBayar;
                                cout << "\n\tDP : Rp." << fixed << setprecision(0) << vario.dp;
                                cout << "\n\tPerbulan : Rp." << fixed << setprecision(0) << bulan;
                                cout << "\n\tbunga pertahun :" << bunga << " %";
                                cout << "\n\tApakah mau lanjut (Y/N) : ";
                                cin >> choiceStr;
                                system("cls");
                                if (choiceStr == "y" || choiceStr == "Y")
                                {
                                    dataBeli = true;
                                    beli = true;
                                    goto pembayaran;
                                }
                                else
                                {
                                    goto product;
                                }
                            }
                            // VARIO END
                            // VARIO END
                            // VARIO END
                        }
                        // HONDA END
                        // HONDA END
                        // HONDA END

                        // YAMAHA START
                        // YAMAHA START
                        // YAMAHA START
                        if (choicesInt == 2)
                        {
                            cout << "\t=========YAMAHA=========";
                            cout << "\n\t1. YAMAHA Fazzio Angsuran 12 kali";
                            cout << "\n\t2. YAMAHA Nmax Angsuran 12 kali";
                            cout << "\n\tMasukan Pilihan Anda : ";
                            cin >> choicesInt;
                            system("cls");
                            // FAZZIO START
                            // FAZZIO START
                            // FAZZIO START
                            if (choicesInt == 1)
                            {
                                harga = fazzio.harga;
                                type = "Yamaha Fazzio";
                                dp = fazzio.dp;
                                bulan = (fazzio.bulan / durasi) + (fazzio.bulan * bungaPerbulan);
                                belumBayar = ((fazzio.bulan / durasi) + (fazzio.bulan * bungaPerbulan)) * durasi; // pinjaman
                                cout << "\t=========Yamaha=========";
                                cout << "\n\tAnda memilih " << type << " Angsuran " << durasi << " kali";
                                cout << "\n\tHarga : Rp." << fixed << setprecision(0) << fazzio.harga;
                                cout << "\n\tTotal Pinjaman : Rp." << fixed << setprecision(0) << belumBayar;
                                cout << "\n\tDP : Rp." << fixed << setprecision(0) << fazzio.dp;
                                cout << "\n\tPerbulan : Rp." << fixed << setprecision(0) << bulan;
                                cout << "\n\tbunga pertahun :" << bunga << " %";
                                cout << "\n\tApakah mau lanjut (Y/N) : ";
                                cin >> choiceStr;
                                system("cls");
                                if (choiceStr == "y" || choiceStr == "Y")
                                {
                                    dataBeli = true;
                                    beli = true;
                                    goto pembayaran;
                                }
                                else
                                {
                                    goto product;
                                }
                            }
                            // FAZZIO END
                            // FAZZIO END
                            // FAZZIO END

                            // NMAX START
                            // NMAX START
                            // NMAX START
                            if (choicesInt == 2)
                            {
                                harga = nmax.harga;
                                type = "Yamaha Nmax";
                                dp = nmax.dp;
                                bulan = (nmax.bulan / durasi) + (nmax.bulan * bungaPerbulan);
                                belumBayar = ((nmax.bulan / durasi) + (nmax.bulan * bungaPerbulan)) * durasi; // pinjaman
                                cout << "\t=========YAMAHA=========";
                                cout << "\n\tAnda memilih " << type << " Angsuran " << durasi << " kali";
                                cout << "\n\tHarga : Rp." << fixed << setprecision(0) << nmax.harga;
                                cout << "\n\tTotal Pinjaman : Rp." << fixed << setprecision(0) << belumBayar;
                                cout << "\n\tDP : Rp." << fixed << setprecision(0) << nmax.dp;
                                cout << "\n\tPerbulan : Rp." << fixed << setprecision(0) << bulan;
                                cout << "\n\tbunga pertahun : " << bunga << "%";
                                cout << "\n\tApakah mau lanjut (Y/N) : ";
                                cin >> choiceStr;
                                system("cls");
                                if (choiceStr == "y" || choiceStr == "Y")
                                {
                                    dataBeli = true;
                                    beli = true;
                                    goto pembayaran;
                                }
                                else
                                {
                                    goto product;
                                }
                            }
                            // NMAX END
                            // NMAX END
                            // NMAX END
                        }
                        // YAMAHA END
                        // YAMAHA END
                        // YAMAHA END

                        // SUZUKI START
                        // SUZUKI START
                        // SUZUKI START
                        if (choicesInt == 3)
                        {
                            cout << "\t=========YAMAHA=========";
                            cout << "\n\t1. Suzuki Nex Angsuran 12 kali";
                            cout << "\n\t2. Suzuki Gsx Angsuran 12 kali";
                            cout << "\n\tMasukan Pilihan Anda : ";
                            cin >> choicesInt;
                            system("cls");
                            // NEX START
                            // NEX START
                            // NEX START
                            if (choicesInt == 1)
                            {
                                harga = nex.harga;
                                type = "Suzuki Nex";
                                dp = nex.dp;
                                bulan = (nex.bulan / durasi) + (nex.bulan * bungaPerbulan);
                                belumBayar = ((nex.bulan / durasi) + (nex.bulan * bungaPerbulan)) * durasi; // pinjaman
                                cout << "\t=========Yamaha=========";
                                cout << "\n\tAnda memilih " << type << " Angsuran " << durasi << " kali";
                                cout << "\n\tHarga : Rp." << fixed << setprecision(0) << nex.harga;
                                cout << "\n\tTotal Pinjaman : Rp." << fixed << setprecision(0) << belumBayar;
                                cout << "\n\tDP : Rp." << fixed << setprecision(0) << nex.dp;
                                cout << "\n\tPerbulan : Rp." << fixed << setprecision(0) << bulan;
                                cout << "\n\tbunga pertahun :" << bunga << " %";
                                cout << "\n\tApakah mau lanjut (Y/N) : ";
                                cin >> choiceStr;
                                system("cls");
                                if (choiceStr == "y" || choiceStr == "Y")
                                {
                                    dataBeli = true;
                                    beli = true;
                                    goto pembayaran;
                                }
                                else
                                {
                                    goto product;
                                }
                            }
                            // FAZZIO END
                            // FAZZIO END
                            // FAZZIO END

                            // GSX START
                            // GSX START
                            // GSX START
                            if (choicesInt == 2)
                            {
                                harga = gsx.harga;
                                type = "Suzuki Gsx";
                                dp = gsx.dp;
                                bulan = (gsx.bulan / durasi) + (gsx.bulan * bungaPerbulan);
                                belumBayar = ((gsx.bulan / durasi) + (gsx.bulan * bungaPerbulan)) * durasi; // pinjaman
                                cout << "\t=========YAMAHA=========";
                                cout << "\n\tAnda memilih " << type << " Angsuran " << durasi << " kali";
                                cout << "\n\tHarga : Rp." << fixed << setprecision(0) << gsx.harga;
                                cout << "\n\tTotal Pinjaman : Rp." << fixed << setprecision(0) << belumBayar;
                                cout << "\n\tDP : Rp." << fixed << setprecision(0) << gsx.dp;
                                cout << "\n\tPerbulan : Rp." << fixed << setprecision(0) << bulan;
                                cout << "\n\tbunga pertahun : " << bunga << "%";
                                cout << "\n\tApakah mau lanjut (Y/N) : ";
                                cin >> choiceStr;
                                system("cls");
                                if (choiceStr == "y" || choiceStr == "Y")
                                {
                                    dataBeli = true;
                                    beli = true;
                                    goto pembayaran;
                                }
                                else
                                {
                                    goto product;
                                }
                            }
                            // GSX END
                            // GSX END
                            // GSX END
                        }
                        // SUZUKI END
                        // SUZUKI END
                        // SUZUKI END
                        else
                        {
                            goto beranda;
                        }
                    }
                    // SINGLE END
                    // SINGLE END
                    // SINGLE END

                    // FAMILY START
                    // FAMILY START
                    // FAMILYSTART
                    if (status == "family" && penghasilan >= 5000000)
                    {
                        durasi = 24;
                        cout << "\t=========PRODUCT=========";
                        cout << "\n\t1. Honda";
                        cout << "\n\t2. Yamaha";
                        cout << "\n\t3. Suzuki";
                        cout << "\n\t4. Kembali";
                        cout << "\n\tMasukan pilihan Anda (1/4): ";
                        cin >> choicesInt;
                        system("cls");

                        // HONDA START
                        // HONDA START
                        // HONDA START
                        // HONDA START
                        if (choicesInt == 1)
                        {
                            cout << "\t=========HONDA=========";
                            cout << "\n\t1. Honda Beat Angsuran 24 kali";
                            cout << "\n\t2. Honda Vario Angsuran 24 kali";
                            cout << "\n\tMasukan Pilihan Anda : ";
                            cin >> choicesInt;
                            system("cls");
                            // BEAT START
                            // BEAT START
                            // BEAT START
                            if (choicesInt == 1)
                            {
                                type = "Honda Beat";
                                dp = beat.dp;
                                bulan = (beat.bulan / durasi) + (beat.bulan * bungaPerbulan);
                                belumBayar = ((beat.bulan / durasi) + (beat.bulan * bungaPerbulan)) * durasi; // pinjaman
                                cout << "\t=========HONDA=========";
                                cout << "\n\tAnda memilih " << type << " Angsuran " << durasi << " kali";
                                cout << "\n\tHarga : Rp." << fixed << setprecision(0) << beat.harga;
                                cout << "\n\tTotal Pinjaman : Rp." << fixed << setprecision(0) << belumBayar;
                                cout << "\n\tDP : Rp." << fixed << setprecision(0) << beat.dp;
                                cout << "\n\tPerbulan : Rp." << fixed << setprecision(0) << bulan;
                                cout << "\n\tbunga pertahun :" << bunga << " %";
                                cout << "\n\tApakah mau lanjut (Y/N) : ";
                                cin >> choiceStr;
                                system("cls");
                                if (choiceStr == "y" || choiceStr == "Y")
                                {
                                    dataBeli = true;
                                    beli = true;
                                    goto pembayaran;
                                }
                                else
                                {
                                    goto product;
                                }
                            }
                            // BEAT END
                            // BEAT END
                            // BEAT END

                            // VARIO START
                            // VARIO START
                            // VARIO START
                            if (choicesInt == 2)
                            {
                                harga = vario.harga;
                                type = "Honda Vario";
                                dp = vario.dp;
                                bulan = (vario.bulan / durasi) + (vario.bulan * bungaPerbulan);
                                belumBayar = ((vario.bulan / durasi) + (vario.bulan * bungaPerbulan)) * durasi; // pinjaman
                                cout << "\t=========HONDA=========";
                                cout << "\n\tAnda memilih " << type << " Angsuran " << durasi << " kali";
                                cout << "\n\tHarga : Rp." << fixed << setprecision(0) << vario.harga;
                                cout << "\n\tTotal Pinjaman : Rp." << fixed << setprecision(0) << belumBayar;
                                cout << "\n\tDP : Rp." << fixed << setprecision(0) << vario.dp;
                                cout << "\n\tPerbulan : Rp." << fixed << setprecision(0) << bulan;
                                cout << "\n\tbunga pertahun :" << bunga << " %";
                                cout << "\n\tApakah mau lanjut (Y/N) : ";
                                cin >> choiceStr;
                                system("cls");
                                if (choiceStr == "y" || choiceStr == "Y")
                                {
                                    dataBeli = true;
                                    beli = true;
                                    goto pembayaran;
                                }
                                else
                                {
                                    goto product;
                                }
                            }
                            // VARIO END
                            // VARIO END
                            // VARIO END
                        }
                        // HONDA END
                        // HONDA END
                        // HONDA END

                        // YAMAHA START
                        // YAMAHA START
                        // YAMAHA START
                        if (choicesInt == 2)
                        {
                            cout << "\t=========YAMAHA=========";
                            cout << "\n\t1. YAMAHA Fazzio Angsuran 24 kali";
                            cout << "\n\t2. YAMAHA Nmax Angsuran 24 kali";
                            cout << "\n\tMasukan Pilihan Anda : ";
                            cin >> choicesInt;
                            system("cls");
                            // FAZZIO START
                            // FAZZIO START
                            // FAZZIO START
                            if (choicesInt == 1)
                            {
                                harga = fazzio.harga;
                                type = "Yamaha Fazzio";
                                dp = fazzio.dp;
                                bulan = (fazzio.bulan / durasi) + (fazzio.bulan * bungaPerbulan);
                                belumBayar = ((fazzio.bulan / durasi) + (fazzio.bulan * bungaPerbulan)) * durasi; // pinjaman
                                cout << "\t=========Yamaha=========";
                                cout << "\n\tAnda memilih " << type << " Angsuran " << durasi << " kali";
                                cout << "\n\tHarga : Rp." << fixed << setprecision(0) << fazzio.harga;
                                cout << "\n\tTotal Pinjaman : Rp." << fixed << setprecision(0) << belumBayar;
                                cout << "\n\tDP : Rp." << fixed << setprecision(0) << fazzio.dp;
                                cout << "\n\tPerbulan : Rp." << fixed << setprecision(0) << bulan;
                                cout << "\n\tbunga pertahun :" << bunga << " %";
                                cout << "\n\tApakah mau lanjut (Y/N) : ";
                                cin >> choiceStr;
                                system("cls");
                                if (choiceStr == "y" || choiceStr == "Y")
                                {
                                    dataBeli = true;
                                    beli = true;
                                    goto pembayaran;
                                }
                                else
                                {
                                    goto product;
                                }
                            }
                            // FAZZIO END
                            // FAZZIO END
                            // FAZZIO END

                            // NMAX START
                            // NMAX START
                            // NMAX START
                            if (choicesInt == 2)
                            {
                                harga = nmax.harga;
                                type = "Yamaha Nmax";
                                dp = nmax.dp;
                                bulan = (nmax.bulan / durasi) + (nmax.bulan * bungaPerbulan);
                                belumBayar = ((nmax.bulan / durasi) + (nmax.bulan * bungaPerbulan)) * durasi; // pinjaman
                                cout << "\t=========YAMAHA=========";
                                cout << "\n\tAnda memilih " << type << " Angsuran " << durasi << " kali";
                                cout << "\n\tHarga : Rp." << fixed << setprecision(0) << nmax.harga;
                                cout << "\n\tTotal Pinjaman : Rp." << fixed << setprecision(0) << belumBayar;
                                cout << "\n\tDP : Rp." << fixed << setprecision(0) << nmax.dp;
                                cout << "\n\tPerbulan : Rp." << fixed << setprecision(0) << bulan;
                                cout << "\n\tbunga pertahun : " << bunga << "%";
                                cout << "\n\tApakah mau lanjut (Y/N) : ";
                                cin >> choiceStr;
                                system("cls");
                                if (choiceStr == "y" || choiceStr == "Y")
                                {
                                    dataBeli = true;
                                    beli = true;
                                    goto pembayaran;
                                }
                                else
                                {
                                    goto product;
                                }
                            }
                            // NMAX END
                            // NMAX END
                            // NMAX END
                        }
                        // YAMAHA END
                        // YAMAHA END
                        // YAMAHA END

                        // SUZUKI START
                        // SUZUKI START
                        // SUZUKI START
                        if (choicesInt == 3)
                        {
                            cout << "\t=========YAMAHA=========";
                            cout << "\n\t1. Suzuki Nex Angsuran 24 kali";
                            cout << "\n\t2. Suzuki Gsx Angsuran 24 kali";
                            cout << "\n\tMasukan Pilihan Anda : ";
                            cin >> choicesInt;
                            system("cls");
                            // NEX START
                            // NEX START
                            // NEX START
                            if (choicesInt == 1)
                            {
                                harga = nex.harga;
                                type = "Suzuki Nex";
                                dp = nex.dp;
                                bulan = (nex.bulan / durasi) + (nex.bulan * bungaPerbulan);
                                belumBayar = ((nex.bulan / durasi) + (nex.bulan * bungaPerbulan)) * durasi; // pinjaman
                                cout << "\t=========Yamaha=========";
                                cout << "\n\tAnda memilih " << type << " Angsuran " << durasi << " kali";
                                cout << "\n\tHarga : Rp." << fixed << setprecision(0) << nex.harga;
                                cout << "\n\tTotal Pinjaman : Rp." << fixed << setprecision(0) << belumBayar;
                                cout << "\n\tDP : Rp." << fixed << setprecision(0) << nex.dp;
                                cout << "\n\tPerbulan : Rp." << fixed << setprecision(0) << bulan;
                                cout << "\n\tbunga pertahun :" << bunga << " %";
                                cout << "\n\tApakah mau lanjut (Y/N) : ";
                                cin >> choiceStr;
                                system("cls");
                                if (choiceStr == "y" || choiceStr == "Y")
                                {
                                    dataBeli = true;
                                    beli = true;
                                    goto pembayaran;
                                }
                                else
                                {
                                    goto product;
                                }
                            }
                            // FAZZIO END
                            // FAZZIO END
                            // FAZZIO END

                            // GSX START
                            // GSX START
                            // GSX START
                            if (choicesInt == 2)
                            {
                                harga = gsx.harga;
                                type = "Suzuki Gsx";
                                dp = gsx.dp;
                                bulan = (gsx.bulan / durasi) + (gsx.bulan * bungaPerbulan);
                                belumBayar = ((gsx.bulan / durasi) + (gsx.bulan * bungaPerbulan)) * durasi; // pinjaman
                                cout << "\t=========YAMAHA=========";
                                cout << "\n\tAnda memilih " << type << " Angsuran " << durasi << " kali";
                                cout << "\n\tHarga : Rp." << fixed << setprecision(0) << gsx.harga;
                                cout << "\n\tTotal Pinjaman : Rp." << fixed << setprecision(0) << belumBayar;
                                cout << "\n\tDP : Rp." << fixed << setprecision(0) << gsx.dp;
                                cout << "\n\tPerbulan : Rp." << fixed << setprecision(0) << bulan;
                                cout << "\n\tbunga pertahun : " << bunga << "%";
                                cout << "\n\tApakah mau lanjut (Y/N) : ";
                                cin >> choiceStr;
                                system("cls");
                                if (choiceStr == "y" || choiceStr == "Y")
                                {
                                    dataBeli = true;
                                    beli = true;
                                    goto pembayaran;
                                }
                                else
                                {
                                    goto product;
                                }
                            }
                            // GSX END
                            // GSX END
                            // GSX END
                        }
                        // SUZUKI END
                        // SUZUKI END
                        // SUZUKI END
                        else
                        {
                            goto beranda;
                        }
                    }
                    else
                    {
                        cout << "\t=========PRODUCT=========";
                        cout << "\n\tPenghasilan Family minimal : Rp.5000000  ";
                        cout << "\n\tPenghasilan Single minimal : Rp.4000000 ";
                        cout << "\n\tPastikan status anda sudah benar";
                        cout << endl;
                        system("pause");
                        system("cls");
                        goto beranda;
                    }
                }
                else
                {
                    cout << "\t=========PRODUCT=========";
                    cout << "\n\tAnda sudah membeli product";
                    cout << endl;
                    system("pause");
                    system("cls");
                    goto beranda;
                }
            }

            // end Product
            if (choicesInt == 3)
            {
            pembayaran:
                for (int i = 0; i < 100; i++)
                {
                    cout << "\rProgress : ["; // kursor mundur ke awal baris
                    for (int j = 0; j < i / 5; j++)
                    {
                        cout << "=";
                    }
                    for (int j = i / 5; j < 20; j++)
                    {
                        cout << " ";
                    }
                    cout << "] " << i << "%"; // persentase loading
                    Sleep(10);                // waktu jeda sebelum menggambar frame berikutnya
                }
                system("cls");
                loop:
                if (beli == true)
                {
                    if (belumBayar <= 1)
                    {
                        cout << "\t=========PEMBAYARAN=========";
                        cout << "\n\tType Motor: " << type;
                        cout << "\n\tJumlah yang sudah dibayar anda " << fixed << setprecision(0) << bayar << " SUDAH LUNAS";
                        cout << "\n\tApakah anda mau melihat struck (Y/N): ";
                        cin >> choiceStr;
                        system("cls");
                        if (choiceStr == "y" || choiceStr == "Y")
                        {
                            goto struck;
                        }
                        else
                        {
                            goto beranda;
                        }
                        system("cls");
                    }
                    else
                    {
                        cout << "\t=========PEMBAYARAN=========";
                        cout << "\n\tAnda memilih Type            : " << type;
                        cout << "\n\tDp                           : Rp." << fixed << setprecision(0) << dp;
                        cout << "\n\tCicilan perbulan             : Rp." << fixed << setprecision(0) << bulan;
                        cout << "\n\tJumlah yang belum anda bayar : Rp." << fixed << setprecision(0) << belumBayar;
                        cout << "\n\tApakah anda mau bayar (Y/N): ";
                        cin >> choiceStr;
                        system("cls");
                        if (choiceStr == "y" || choiceStr == "Y")
                        {
                            cout << "\t=========PEMBAYARAN=========";
                            cout << "\n\tAnda membayar            : Rp." << fixed << setprecision(0) << bulan;
                            cout << endl;
                            bayar += bulan;
                            belumBayar -= bulan;
                            cout << endl;
                            system("pause");
                            system("cls");
                            if (belumBayar <= 1)
                            {
                                cout << "LUNAS" << endl;
                                system("pause");
                                system("cls");
                                goto struck;
                            }
                            else
                            {
                                goto loop;
                            }
                        }
                        else
                        {
                            goto beranda;
                        }
                    }
                }
                else
                {
                    cout << "\t=========PEMBAYARAN=========";
                    cout << "\n\tAnda belum membeli product";
                    cout << endl;
                    system("pause");
                    system("cls");
                    goto beranda;
                }
            }
            if (choicesInt == 4)
            {
            struck:
                if (belumBayar <= 1)
                {
                    cout << "\t====================================" << endl;
                    cout << "\t           STRUK PEMBELIAN           " << endl;
                    cout << "\t====================================" << endl;
                    cout << "\tNama Motor       : " << type << endl;
                    cout << "\tHarga Motor      : Rp " << harga << endl;
                    cout << "\tUang Muka        : Rp " << dp << endl;
                    cout << "\tPinjaman         : Rp " << bayar << endl;
                    cout << "\tCicilan per Bulan: Rp " << bulan << endl;
                    cout << "\tDurasi Kredit    : " << durasi << " bulan" << endl;
                    cout << "\t====================================" << endl;
                    system("pause");
                    system("cls");
                    goto beranda;
                }
                else
                {
                    cout << "\t=========STRUCK=========";
                    cout << "\n\tKamu belum mempunyai motor";
                    system("pause");
                    system("cls");
                    goto beranda;
                }
            }
            else
            {
                goto login;
            }
        }
        else
        {
            cout << "\nLOGIN GAGAL" << endl;
            cout << "Silakan coba lagi" << endl;
            system("pause");
            system("cls");
            goto login;
        }
    }
    if (choicesInt == 2)
    {
        cout << "\n\tMasukan NIK kamu   : ";
        cin >> forgotId;
        cout << "\tMasukan no hp kamu : ";
        cin >> forgotNohp;
        system("cls");
        if (forgotId == regist.custid && forgotNohp == regist.noHp)
        {
            cout << "\n\tUsername kamu : " << regist.username;
            cout << "\n\tPassword kamu : " << regist.password;
            cout << endl;
            system("pause");
            system("cls");
            goto login;
        }
        else
        {
            cout << "\n\tNIK / No hp kamu salah";
            cout << endl;
            system("pause");
            system("cls");
            goto login;
        }
    }
    else
    {
        system("pause");
        system("cls");
        goto login;
    }
}
