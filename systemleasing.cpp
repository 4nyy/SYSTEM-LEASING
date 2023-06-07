#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void judul()
{
    cout << "========================================WELCOME SYSTEM LEASING=======================================" << endl;
    cout << "========================================KELOMPOK 2 SABTU PAGII=======================================" << endl;
}

class motor
{
public:
    long int bulan;
    long int dp;
    long int harga;
};

int main()
{
    // DATA
    string username, password, noHp, address = "none", firstname, lastname, custid, status;
    long int penghasilan;

    // ALAMAT
    string namaJalan, kelurahan, kecamatan, rt, rw, noRumah;

    // PRODUCT
    bool beli = false, dataBeli = false;
    string type = "none";
    long int dp = 0, bulan = 0, belumBayar = 0, bayar = 0, sudahBayar = 0, harga = 0;
    // HONDA
    motor beat;
    beat.dp = 3000000;
    beat.bulan = 500000;
    beat.harga = 15000000;
    motor vario;
    vario.dp = 5000000;
    vario.bulan = 625000;
    vario.harga = 20000000;
    // choices
    int choicesInt;
    string choiceStr;
regist:
    judul();
    cout << "\t========REGISTRASI=========";
    cout << "\n\tUsername : ";
    cin >> username; // meminta user untuk memasukan username
    cout << "\tPassword : ";
    cin >> password; // meminta user untuk memasukan password
    cout << "\tMasukan nomor hp anda : ";
    cin >> noHp; // meminta user untuk memasukan no Hp
    cout << "\tMasukan nama depan anda : ";
    cin >> firstname; // meminta user untuk memasukan firstname
    cout << "\tMasukan nama belakang anda : ";
    cin >> lastname; // meminta user untuk memasukan lastname
    cout << "\tMasukan NIK anda : ";
    cin >> custid; // meminta user untuk memasukan custid
    cout << "\tMasukan status anda (single/family) : ";
    cin >> status; // meminta user untuk memasukan status
    cout << "\tPenghasilan (Bulanan) : Rp.";
    cin >> penghasilan; // meminta user untuk memasukan penghasilan

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
    string u, forgotId, forgotNohp;
    string p;
    judul();
    cout << "\t=========LOGINPAGE=========" << endl;
    cout << "\n\t1. Login ";
    cout << "\n\t2. Lupa Password ";
    cout << "\n\tMasukan Pilihan anda : ";
    cin >> choicesInt;
    system("pause");
    system("cls");
    if (choicesInt == 1)
    {
        cout << "\t=========LOGINPAGE=========" << endl;
        cout << "\n\tUsername : ";
        cin >> u; // meminta user untuk memasukan username untuk login
        cout << "\tPassword : ";
        cin >> p; // meminta user untuk memasukan password untuk login
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
        if (u == username && p == password) // masuk ke beranda
        {
            cout << "\nLOGIN BERHASIL" << endl;
            system("pause");
            system("cls");
        beranda:
            judul();
            cout << "\t=========BERANDA=========";
            cout << "\n\tHallo Selamat Datang " << firstname << lastname << endl;
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
                // Menggambar animasi loading
                for (int i = 0; i < 100; i++)
                {
                    cout << "\rMemuat Data : ["; // kursor mundur ke awal baris
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
                    system("cls");
                }
            data:
                cout << "\t=========PERSONAL DATA=========";
                cout << "\n\t1. Nama depan : " << firstname;
                cout << "\n\t2. Nama Belakang : " << lastname;
                cout << "\n\t3. Alamat : " << address;
                cout << "\n\t4. No Hp : " << noHp;
                cout << "\n\t5. NIK : " << custid;
                cout << "\n\t6. status : " << status;
                cout << "\n\t7. penghasilan : Rp." << penghasilan;
                cout << "\n\t8. Username : " << username;
                cout << "\n\t9. Password : " << password;
                cout << "\n\t10. Beranda";
                cout << "\n\tMau mengedit data kamu ? (1/9) : ";
                cin >> choicesInt;
                system("cls");
                if (choicesInt == 1) // mengedit data user
                {
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tNama depan : ";
                    cin >> firstname;
                    system("pause");
                    system("cls");
                    goto data;
                }
                if (choicesInt == 2)
                {
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tNama Belakang : ";
                    cin >> lastname;
                    system("pause");
                    system("cls");
                    goto data;
                }
                if (choicesInt == 3)
                {
                alamat:
                    address = namaJalan + " " + rt + " " + rw + " " + noRumah + " " + kelurahan + " " + kecamatan;
                    cout << "\t=========ALAMAT=========";
                    cout << "\n\t1. Nama Jalan : " << namaJalan;
                    cout << "\n\t2. RT : " << rt;
                    cout << "\n\t3. RW : " << rw;
                    cout << "\n\t4. Nomor Rumah : " << noRumah;
                    cout << "\n\t5. Kelurahan : " << kelurahan;
                    cout << "\n\t6. Kecamatan : " << kecamatan;
                    cout << "\n\t7. kembali";
                    cout << "\n\tMau mengedit alamat kamu ? (1/6) : ";
                    cin >> choicesInt;
                    system("pause");
                    system("cls");
                    if (choicesInt == 1)
                    {
                        cout << "\n\t Nama Jalan : JL ";
                        cin >> namaJalan;
                        system("pause");
                        system("cls");
                        goto alamat;
                    }
                    if (choicesInt == 2)
                    {
                        cout << "\n\tRT : ";
                        cin >> rt;
                        system("pause");
                        system("cls");
                        goto alamat;
                    }
                    if (choicesInt == 3)
                    {
                        cout << "\n\tRW : ";
                        cin >> rw;
                        system("pause");
                        system("cls");
                        goto alamat;
                    }
                    if (choicesInt == 4)
                    {
                        cout << "\n\tNo rumah : ";
                        cin >> noRumah;
                        system("pause");
                        system("cls");
                        goto alamat;
                    }
                    if (choicesInt == 5)
                    {
                        cout << "\n\tKelurahan : ";
                        cin >> kelurahan;
                        system("pause");
                        system("cls");
                        goto alamat;
                    }
                    if (choicesInt == 6)
                    {
                        cout << "\n\tKecamatam : ";
                        cin >> kecamatan;
                        system("pause");
                        system("cls");
                        goto alamat;
                    }
                    else
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
                        system("pause");
                        system("cls");
                        goto data;
                    }
                    system("pause");
                    system("cls");
                    goto data;
                }
                if (choicesInt == 4)
                {
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tNo Hp : ";
                    cin >> noHp;
                    for (int i = 0; i < 100; i++)
                        system("pause");
                    system("cls");
                    goto data;
                }
                if (choicesInt == 5)
                {
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tNIK : ";
                    cin >> custid;
                    goto data;
                }
                if (choicesInt == 6)
                {
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tStatus (single/family): ";
                    cin >> status;
                    system("pause");
                    system("cls");
                    goto data;
                }
                if (choicesInt == 7)
                {
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tPenghasilan : Rp.";
                    cin >> penghasilan;
                    system("pause");
                    system("cls");
                    goto data;
                }
                if (choicesInt == 8)
                {
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tUsername : ";
                    cin >> username;
                    system("pause");
                    system("cls");
                    goto data;
                }
                if (choicesInt == 9)
                {
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tPassword : ";
                    cin >> password;
                    system("pause");
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
                    if (status == "single" || status == "SINGLE" || status == "Single")
                    {
                    }
                    if (status == "family" || status == "FAMILY" || status == "Family")
                    {
                        cout << "\t=========PRODUCT=========";
                        cout << "\n\t1. Honda";
                        cout << "\n\t2. Yamaha";
                        cout << "\n\t3. Suzuki";
                        cout << "\n\t4. Kembali";
                        cout << "\n\tMasukan pilihan Anda (1/4): ";
                        cin >> choicesInt;
                        system("pause");
                        system("cls");
                        if (choicesInt == 1)
                        {
                            cout << "\t=========HONDA=========";
                            cout << "\n\t1. Honda Beat Angsuran 24 kali";
                            cout << "\n\t2. Honda Vario Angsuran 24 kali";
                            cout << "\n\tMasukan Pilihan Anda : ";
                            cin >> choicesInt;
                            system("pause");
                            system("cls");
                            if (choicesInt == 1)
                            {

                                cout << "\t=========HONDA=========";
                                cout << "\n\tAnda memilih Honda Beat Angsuran 24 kali";
                                cout << "\n\tHarga Honda Beat : Rp." << beat.harga;
                                cout << "\n\tDP Honda Beat : Rp." << beat.dp;
                                cout << "\n\tPerbulan : Rp." << beat.bulan;
                                cout << "\n\tApakah mau lanjut (Y/N) : ";
                                cin >> choiceStr;
                                system("pause");
                                system("cls");
                                if (choiceStr == "y" || choiceStr == "Y")
                                {
                                    dataBeli = true;
                                    beli = true;
                                    type = "Honda Beat";
                                    dp = beat.dp;
                                    bulan = beat.bulan;
                                    harga = beat.harga;
                                    belumBayar = harga - dp;
                                    goto pembayaran;
                                }
                                else
                                {
                                    goto product;
                                }
                            }
                        }
                        else
                        {
                            goto beranda;
                        }
                    }
                } else{
                    cout << "\t=========PRODUCT=========";
                    cout << "\n\tAnda sudah membeli product";
                    cout<<endl;
                    system("pause");
                    system("cls");
                    goto beranda;
                }
            }

            // end Product
            if (choicesInt == 3)
            {
            pembayaran:
                if (beli == true)
                {
                    if (sudahBayar == harga)
                    {
                        cout << "\t=========PEMBAYARAN=========";
                        cout << "\n\tAnda memilih Type : " << type;
                        cout << "\n\tDp : Rp." << dp;
                        cout << "\n\tCicilan perbulan dari Rp." << bulan << " sampai Rp." << harga;
                        cout << "\n\tJumlah yang sudah dibayar anda " << bayar << " Yang belum anda bayar: Rp." << belumBayar;
                        cout << "\n\tLUNAS";
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
                        cout << "\n\tAnda memilih Type : " << type;
                        cout << "\n\tDp : Rp." << dp;
                        cout << "\n\tCicilan perbulan dari Rp." << bulan << "sampai Rp." << harga;
                        cout << "\n\tJumlah yang belum anda bayar: Rp." << belumBayar;
                        cout << "\n\tApakah anda mau bayar (Y/N): ";
                        cin >> choiceStr;
                        system("cls");
                        if (choiceStr == "y" || choiceStr == "Y")
                        {
                            cout << "\t=========PEMBAYARAN=========";
                            cout << "\n\tAnda membayar : Rp." << bulan;
                            bayar += bulan;
                            sudahBayar = bayar + dp;
                            belumBayar = harga - sudahBayar;
                            cout<<endl;
                            system("pause");
                            system("cls");
                            if (sudahBayar == harga)
                            {
                                goto beranda;
                            }
                            else
                            {
                                goto pembayaran;
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
                    system("pause");
                    system("cls");
                    goto beranda;
                }
            }
            if (choicesInt == 4)
            {
            struck:
                cout << "\t=========STRUCK=========";
            }
            else
            {
                goto login;
            }
        }
        else
        {
            cout << "Login gagal" << endl;
            cout << "Silakan coba lagi" << endl;
            system("pause");
            system("cls");
            goto login;
        }
    }
    if (choicesInt == 2)
    {
        cout << "\n\tMasukan NIK kamu : ";
        cin >> forgotId;
        cout << "\tMasukan no hp kamu : ";
        cin >> forgotNohp;
        system("cls");
        if (forgotId == custid && forgotNohp == noHp)
        {
            cout << "\n\tUsername kamu : " << username;
            cout << "\n\tPassword kamu : " << password;
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
