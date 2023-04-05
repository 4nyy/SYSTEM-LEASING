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
    string username[100];
    string password[100];
    string noHp[100];
    string address[100];
    string firstname[100];
    string lastname[100];
    string custid[100];
    int user = 0;
    int pass = 0;
    int noH = 0;
    int addr = 0;
    int firstn = 0;
    int lastn = 0;
    int cusid = 0;
    user++;
    pass++;
    noH++;
    addr++;
    firstn++;
    lastn++;
    cusid++;

regist:
    judul();
    cout << "\t========REGISTRASI=========";
    cout << "\n\tUsername : ";
    cin >> username[user]; // meminta user untuk memasukan username
    cout << "\tPassword : ";
    cin >> password[pass]; // meminta user untuk memasukan password
    cout << "\tEnter your no Hp : ";
    cin >> noHp[noH]; // meminta user untuk memasukan no Hp
    cout << "\tEnter your address : ";
    cin >> address[addr]; // meminta user untuk memasukan address
    cout << "\tEnter your first name : ";
    cin >> firstname[firstn]; // meminta user untuk memasukan firstname
    cout << "\tEnter your last name : ";
    cin >> lastname[lastn]; // meminta user untuk memasukan lastname
    cout << "\tEnter your custid : ";
    cin >> custid[cusid]; // meminta user untuk memasukan custid

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
        Sleep(100);               // waktu jeda sebelum menggambar frame berikutnya
    }
    if (username[user], password[pass], noHp[noH], address[addr], firstname[firstn], lastname[lastn], custid[cusid] == "")
    {
        cout << "\n\teverything is required" << endl;
        system("pause");
        system("cls");
        goto regist;
    } // apabila  ada salah satu yang tidak di isi akan kembali lagi

    cout << "\nREGISTRASI SUCCSESSFULLY" << endl;
    system("pause");
    system("cls");

login:
    judul();
    cout << "\t=========LOGINPAGE=========" << endl;
    cout << "\n\tEnter your Username : ";
    cin >> username[user]; // meminta user untuk memasukan username untuk login
    cout << "\tEnter Your Password : ";
    cin >> password[pass]; // meminta user untuk memasukan password untuk login

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
        Sleep(100);               // waktu jeda sebelum menggambar frame berikutnya
    }
    if (username[user] == username[user] && password[user] == password[pass]) // masuk ke beranda
    {
        int choice1;
        cout << "\nLOGIN SUCCSESSFULLY" << endl;
        system("pause");
        system("cls");
    beranda:
        judul();
        cout << "\t=========BERANDA=========";
        cout << "\n\tHello Welcome " << firstname[firstn] << lastname[lastn] << endl;
        cout << "\n\t1.personal data";      // data pribadi
        cout << "\n\t2.Product";            // product
        cout << "\n\t3.logout";             // keluar
        cout << "\n\tEnter your choice : "; // pemilihan user
        cin >> choice1;
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
            Sleep(100);               // waktu jeda sebelum menggambar frame berikutnya
            system("cls");
        }
        if (choice1 == 1) // melihat data user
        {
            string choice2;
            cout << "\t=========PERSONAL DATA=========";
            cout << "\n\tfirst name : " << firstname[firstn];
            cout << "\n\tLast name : " << lastname[lastn];
            cout << "\n\tAddress : " << address[addr];
            cout << "\n\tNo Hp : " << noHp[noH];
            cout << "\n\tCustid : " << custid[cusid];
            cout << "\n\tUsername : " << username[user];
            cout << "\n\tPassword : " << password[pass];
            cout << "\n\tedit your data ? (Y/N) : ";
            cin >> choice2;
            if (choice2 == "Y" || choice2 == "y") // mengedit data user
            {
                cout << "\t=========EDIT DATA=========";
                cout << "\n\tfirst name = ";
                cin >> firstname[firstn];
                cout << "\tLast name : ";
                cin >> lastname[lastn];
                cout << "\tAddress : ";
                cin >> address[addr];
                cout << "\tNo Hp : ";
                cin >> noHp[noH];
                cout << "\tCustid : ";
                cin >> custid[cusid];
                cout << "\tUsername : ";
                cin >> username[user];
                cout << "\tPassword : ";
                cin >> password[pass];
                cout << "\tBack to beranda? (y/n) ?";
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
                    Sleep(100);               // waktu jeda sebelum menggambar frame berikutnya
                }
                cout << "EDIT DATA SUCCSESSFULLY;";
                if (choice2 == "y" || "Y") // kembali ke beranda
                {
                    goto beranda;
                }
            }
            else // kembali ke beranda
            {
                goto beranda;
            }
        }
        else if (choice1 == 2) // product leasing
        {
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