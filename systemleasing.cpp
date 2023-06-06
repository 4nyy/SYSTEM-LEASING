#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void judul()
{
    cout << "========================================WELCOME SYSTEM LEASING=======================================" << endl;
    cout << "========================================KELOMPOK 2 SABTU PAGII=======================================" << endl;
}

int main()
{
    // DATA
    string username, password, noHp, address = "none", firstname, lastname, custid, status;
    long int penghasilan;

    // ALAMAT
    string namaJalan, kelurahan, kecamatan, rt, rw, noRumah;

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
    int inputLog;
    string p;
    judul();
    cout << "\t=========LOGINPAGE=========" << endl;
    cout << "\n\t1. Login ";
    cout << "\n\t2. Lupa Password ";
    cout << "\n\tMasukan Pilihan anda : ";
    cin >> inputLog;
    system("pause");
    system("cls");
    if (inputLog == 1)
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
            int choices;
            cout << "\nLOGIN BERHASIL" << endl;
            system("pause");
            system("cls");
        beranda:
            judul();
            cout << "\t=========BERANDA=========";
            cout << "\n\tHallo Selamat Datang " << firstname << lastname << endl;
            cout << "\n\t1. Data pribadi ";        // data pribadi
            cout << "\n\t2. Produk";               // product
            cout << "\n\t3. logout";               // keluar
            cout << "\n\tMasukan pilihan anda : "; // pemilihan user
            cin >> choices;
            if (choices == 1) // melihat data user
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
                int choice2;
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
                cin >> choice2;
                system("pause");
                system("cls");
                if (choice2 == 1) // mengedit data user
                {
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tNama depan : ";
                    cin >> firstname;
                    system("pause");
                    system("cls");
                    goto data;
                }
                if (choice2 == 2)
                {
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tNama Belakang : ";
                    cin >> lastname;
                    system("pause");
                    system("cls");
                    goto data;
                }
                if (choice2 == 3)
                {
                alamat:
                    int choice3;
                    address = namaJalan + " " + rt + " " + rw + " " + noRumah + " " + kelurahan + " " + kecamatan;
                    cout << "\t=========ALAMAT=========";
                    cout << "\n\t1. Nama Jalan : " << namaJalan;
                    cout << "\n\t2. RT : "<<rt;
                    cout << "\n\t3. RW : "<<rw;
                    cout << "\n\t4. Nomor Rumah : "<<noRumah;
                    cout << "\n\t5. Kelurahan : "<<kelurahan;
                    cout << "\n\t6. Kecamatan : "<<kecamatan;
                    cout << "\n\t7. kembali";
                    cout << "\n\tMau mengedit alamat kamu ? (1/6) : ";
                    cin >> choice3;
                    system("pause");
                    system("cls");
                    if (choice3 == 1)
                    {
                        cout << "\n\t Nama Jalan : JL ";
                        cin >> namaJalan;
                        system("pause");
                        system("cls");
                        goto alamat;
                    }
                    if (choice3 == 2)
                    {
                        cout << "\n\tRT : ";
                        cin >> rt;
                        system("pause");
                        system("cls");
                        goto alamat;
                    }
                    if (choice3 == 3)
                    {
                        cout << "\n\tRW : ";
                        cin >> rw;
                        system("pause");
                        system("cls");
                        goto alamat;
                    }
                    if (choice3 == 4)
                    {
                        cout << "\n\tNo rumah : ";
                        cin >> noRumah;
                        system("pause");
                        system("cls");
                        goto alamat;
                    }
                    if (choice3 == 5)
                    {
                        cout << "\n\tKelurahan : ";
                        cin >> kelurahan;
                        system("pause");
                        system("cls");
                        goto alamat;
                    }
                    if (choice3 == 6)
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
                if (choice2 == 4)
                {
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tNo Hp : ";
                    cin >> noHp;
                    for (int i = 0; i < 100; i++)
                        system("pause");
                    system("cls");
                    goto data;
                }
                if (choice2 == 5)
                {
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tNIK : ";
                    cin >> custid;
                    goto data;
                }
                if (choice2 == 6)
                {
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tStatus (single/family): ";
                    cin >> status;
                    system("pause");
                    system("cls");
                    goto data;
                }
                if (choice2 == 7)
                {
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tPenghasilan : Rp.";
                    cin >> penghasilan;
                    system("pause");
                    system("cls");
                    goto data;
                }
                if (choice2 == 8)
                {
                    cout << "\t=========EDIT DATA=========";
                    cout << "\n\tUsername : ";
                    cin >> username;
                    system("pause");
                    system("cls");
                    goto data;
                }
                if (choice2 == 9)
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

            else if (choices == 2)
            {
                cout << "Product";
                system("pause");
                system("cls");
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
    if (inputLog == 2)
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
