#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
int main (){
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

}
