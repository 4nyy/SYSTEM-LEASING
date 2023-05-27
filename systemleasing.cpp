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
    string username[10];
    string password[10];
    string noHp[10];
    string address[10];
    string firstname[10];
    string lastname[10];
    string custid[10];
    string status[10];
    long int penghasilan[10];
    int user = 0;
    int pass = 0;
    int noH = 0;
    int addr = 0;
    int firstn = 0;
    int lastn = 0;
    int cusid = 0;
    int stat = 0;
    int peng = 0;
    user++;
    pass++;
    noH++;
    addr++;
    firstn++;
    lastn++;
    cusid++;
    stat++;
    peng++;
    

regist:
    judul();
    cout << "\t========REGISTRASI=========";
    cout << "\n\tUsername : ";
    getline(cin, username[user]); // meminta user untuk memasukan username
    cout << "\tPassword : ";
    getline(cin, password[pass]); // meminta user untuk memasukan password
    cout << "\tEnter your no Hp : ";
    getline(cin, noHp[noH]); // meminta user untuk memasukan no Hp
    cout << "\tEnter your address : ";
    getline(cin, address[addr]); // meminta user untuk memasukan address
    cout << "\tEnter your first name : ";
    getline(cin, firstname[firstn]); // meminta user untuk memasukan firstname
    cout << "\tEnter your last name : ";
    getline(cin, lastname[lastn]); // meminta user untuk memasukan lastname
    cout << "\tEnter your NIK : ";
    getline(cin, custid[cusid]); // meminta user untuk memasukan custid
    cout << "\tEnter your status (single/family) : ";
    getline(cin, status[stat]); // meminta user untuk memasukan status
    cout << "\tPenghasilan (Bulanan) : ";
    cin >> penghasilan[peng]; // meminta user untuk memasukan penghasilan

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
        Sleep(20);               // waktu jeda sebelum menggambar frame berikutnya
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
        Sleep(20);               // waktu jeda sebelum menggambar frame berikutnya
    }
    if (u == username[user] && p == password[pass]) // masuk ke beranda
    {
        cout <<"succsess";
        int choices;
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
            Sleep(20);               // waktu jeda sebelum menggambar frame berikutnya
            system("cls");
        }
        if (choices == 1) // melihat data user
        {
            data :
            int choice2;
            string choice1;
            cout << "\t=========PERSONAL DATA=========";
            cout << "\n\t1. first name : " << firstname[firstn];
            cout << "\n\t2. Last name : " << lastname[lastn];
            cout << "\n\t3. Address : " << address[addr];
            cout << "\n\t4. No Hp : " << noHp[noH];
            cout << "\n\t5. NIK : " << custid[cusid];
            cout << "\n\t6. status : " << status[stat];
            cout << "\n\t7. penghasilan : " << penghasilan[peng];
            cout << "\n\t8. Username : " << username[user];
            cout << "\n\t9. Password : " << password[pass];
            cout << "\n\t10. Beranda";
            cout << "\n\tedit your data 1/10/N ? : ";
            cin >> choice2;
            system("pause");
            system("cls");
            if (choice2 == 1 || choice2 == 1) // mengedit data user
            {
                cout << "\t=========EDIT DATA=========";
                cout << "\n\tfirst name = ";
                cin >> firstname[firstn];
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
                    Sleep(20);               // waktu jeda sebelum menggambar frame berikutnya
                }
                cout<<"succsess";
                goto data;
            }
            if (choice2 == 2 || choice2 == 2)
            {
                cout << "\t=========EDIT DATA=========";
                cout << "\n\tLast name : ";
                cin >> lastname[lastn];
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
                    Sleep(20);               // waktu jeda sebelum menggambar frame berikutnya
                }
               cout<<"succsess";
                goto data;
            }
            if (choice2 == 3 || choice2 == 3)
            {
                cout << "\t=========EDIT DATA=========";
                cout << "\n\tAddress : ";
                getline(cin,address[addr]);
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
                    Sleep(20);               // waktu jeda sebelum menggambar frame berikutnya
                }
                cout<<"succsess";
                goto data;
            }
            if (choice2 == 4 || choice2 == 4)
            {
                cout << "\t=========EDIT DATA=========";
                cout << "\n\tNo Hp : ";
                cin >> noHp[noH];
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
                    Sleep(20);               // waktu jeda sebelum menggambar frame berikutnya
                }
                cout<<"succsess";
                goto data;
            }
            if (choice2 == 5 || choice2 == 5)
            {
                cout << "\t=========EDIT DATA=========";
                cout << "\n\tNIK : ";
                cin >> custid[cusid];
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
                    Sleep(20);               // waktu jeda sebelum menggambar frame berikutnya
                }
                cout<<"succsess";
                goto data;
            }
            if (choice2 == 6 || choice2 == 6)
            {
                cout << "\t=========EDIT DATA=========";
                cout << "\n\tStatus (single/family): ";
                cin >> status[stat];
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
                    Sleep(20);               // waktu jeda sebelum menggambar frame berikutnya
                }
                cout<<"succsess";
                goto data;
            }
            if (choice2 == 7 || choice2 == 7)
            {
                cout << "\t=========EDIT DATA=========";
                cout << "\n\tpenghasilan : ";
                cin >> penghasilan[peng];
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
                    Sleep(20);               // waktu jeda sebelum menggambar frame berikutnya
                }
                cout<<"succsess";
                goto data;
            }
            if (choice2 == 8 || choice2 == 8)
            {
                cout << "\t=========EDIT DATA=========";
                cout << "\n\tUsername : ";
                cin >> username[user];
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
                    Sleep(20);               // waktu jeda sebelum menggambar frame berikutnya
                }
                cout<<"succsess";
                goto data;
            }
            if (choice2 == 9 || choice2 == 9)
            {
                cout << "\t=========EDIT DATA=========";
                cout << "\n\tPassword : ";
                cin >> password[pass];
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
                    Sleep(20);               // waktu jeda sebelum menggambar frame berikutnya
                }
              cout<<"succsess";
                goto data;
            }else {
                goto beranda;
            }
        } 
        
        else if (choices == 1){

        }
    }else{
        cout << "Login failed" << endl;
        cout << "please try again" << endl;
        system("pause");
        system("cls");
        goto login;
    }
}