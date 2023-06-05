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
    //DATA
    string username[10],password[10],noHp[10],address = "none",firstname[10],lastname[10],custid[10],status[10];
    long int penghasilan[10];

    // ALAMAT
    string namaJalan[10], kelurahan[10], kecamatan[10], rt[10], rw[10], noRumah[10];
    int i = 0;
    i++;

regist:
    judul();
    cout << "\t========REGISTRASI=========";
    cout << "\n\tUsername : ";
    getline(cin, username[i]); // meminta user untuk memasukan username
    cout << "\tPassword : ";
    getline(cin, password[i]); // meminta user untuk memasukan password
    cout << "\tEnter your no Hp : ";
    getline(cin, noHp[i]); // meminta user untuk memasukan no Hp
    cout << "\tEnter your first name : ";
    getline(cin, firstname[i]); // meminta user untuk memasukan firstname
    cout << "\tEnter your last name : ";
    getline(cin, lastname[i]); // meminta user untuk memasukan lastname
    cout << "\tEnter your NIK : ";
    getline(cin, custid[i]); // meminta user untuk memasukan custid
    cout << "\tEnter your status (single/family) : ";
    getline(cin, status[i]); // meminta user untuk memasukan status
    cout << "\tPenghasilan (Bulanan) : ";
    cin >> penghasilan[i]; // meminta user untuk memasukan penghasilan

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
    cout << "\nREGISTRASI SUCCSESSFULLY" << endl;
    system("pause");
    system("cls");

login:
    string u;
    string p;
    judul();
    cout << "\t=========LOGINPAGE=========" << endl;
    cout << "\n\tEnter your Username : ";
    cin >> u; // meminta user untuk memasukan username untuk login
    cout << "\tEnter Your Password : ";
    cin >> p; // meminta user untuk memasukan password untuk login

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
    if (u == username[i] && p == password[i]) // masuk ke beranda
    {
        cout << "succsess";
        int choices;
        cout << "\nLOGIN SUCCSESSFULLY" << endl;
        system("pause");
        system("cls");
    beranda:
        judul();
        cout << "\t=========BERANDA=========";
        cout << "\n\tHello Welcome " << firstname[i] << lastname[i] << endl;
        cout << "\n\t1.personal data";      // data pribadi
        cout << "\n\t2.Product";            // product
        cout << "\n\t3.logout";             // keluar
        cout << "\n\tEnter your choice : "; // pemilihan user
        cin >> choices;
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
        if (choices == 1) // melihat data user
        {
        data:
            int choice2;
            cout << "\t=========PERSONAL DATA=========";
            cout << "\n\t1. first name : " << firstname[i];
            cout << "\n\t2. Last name : " << lastname[i];
            cout << "\n\t3. Address : " << address;
            cout << "\n\t4. No Hp : " << noHp[i];
            cout << "\n\t5. NIK : " << custid[i];
            cout << "\n\t6. status : " << status[i];
            cout << "\n\t7. penghasilan : " << penghasilan[i];
            cout << "\n\t8. Username : " << username[i];
            cout << "\n\t9. Password : " << password[i];
            cout << "\n\t10. Beranda";
            cout << "\n\tedit your data 1/9 ? : ";
            cin >> choice2;
            system("pause");
            system("cls");
            if (choice2 == 1) // mengedit data user
            {
                cout << "\t=========EDIT DATA=========";
                cout << "\n\tfirst name = ";
                cin >> firstname[i];
                system("pause");
                system("cls");
                goto data;
            }
            if (choice2 == 2)
            {
                cout << "\t=========EDIT DATA=========";
                cout << "\n\tLast name : ";
                cin >> lastname[i];
                system("pause");
                system("cls");
                goto data;
            }
            if (choice2 == 3)
            {
            alamat:
                int choice3;
                address=namaJalan[i]+" "+rt[i]+" "+rw[i]+" "+noRumah[i]+" "+kelurahan[i]+" "+kecamatan[i];
                cout << "\t=========EDIT DATA=========";
                cout << "\n\t1. Nama Jalan : "<<namaJalan[i];
                cout << "\n\t2. RT : ";
                cout << "\n\t3. RW";
                cout << "\n\t4. Nomor Rumah";
                cout << "\n\t5. Kelurahan";
                cout << "\n\t6. Kecamatan";
                cout << "\n\t7. kembali";
                cout << "\n\tedit your data 1/6 ? : ";
                cin >> choice3;
                system("pause");
                system("cls");
                if (choice3 == 1)
                {
                    cout << "\n\t Nama Jalan : JL ";
                    cin >> namaJalan[i];
                    system("pause");
                    system("cls");
                    goto alamat;
                }
                if (choice3 == 2)
                {
                    cout << "\n\tRT : ";
                    cin >> rt[i];
                    system("pause");
                    system("cls");
                    goto alamat;
                }
                if (choice3 == 3)
                {
                    cout << "\n\tRW : ";
                    cin >> rw[i];
                    system("pause");
                    system("cls");
                    goto alamat;
                }
                if (choice3 == 4)
                {
                    cout << "\n\tNo rumah : ";
                    cin >> noRumah[i];
                    system("pause");
                    system("cls");
                    goto alamat;
                }
                if (choice3 == 5)
                {
                    cout << "\n\tKelurahan : ";
                    cin >> kelurahan[i];
                    system("pause");
                    system("cls");
                    goto alamat;
                }
                if (choice3 == 6)
                {
                    cout << "\n\tKecamatam : ";
                    cin >> kecamatan[i];
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
                cin >> noHp[i];
                for (int i = 0; i < 100; i++)
                    system("pause");
                system("cls");
                goto data;
            }
            if (choice2 == 5)
            {
                cout << "\t=========EDIT DATA=========";
                cout << "\n\tNIK : ";
                cin >> custid[i];
                goto data;
            }
            if (choice2 == 6)
            {
                cout << "\t=========EDIT DATA=========";
                cout << "\n\tStatus (single/family): ";
                cin >> status[i];
                system("pause");
                system("cls");
                goto data;
            }
            if (choice2 == 7)
            {
                cout << "\t=========EDIT DATA=========";
                cout << "\n\tpenghasilan : ";
                cin >> penghasilan[i];
                system("pause");
                system("cls");
                goto data;
            }
            if (choice2 == 8)
            {
                cout << "\t=========EDIT DATA=========";
                cout << "\n\tUsername : ";
                cin >> username[i];
                system("pause");
                system("cls");
                goto data;
            }
            if (choice2 == 9)
            {
                cout << "\t=========EDIT DATA=========";
                cout << "\n\tPassword : ";
                cin >> password[i];
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
        } else {
            goto login;
        }
    }
    else
    {
        cout << "Login failed" << endl;
        cout << "please try again" << endl;
        system("pause");
        system("cls");
        goto login;
    }
}