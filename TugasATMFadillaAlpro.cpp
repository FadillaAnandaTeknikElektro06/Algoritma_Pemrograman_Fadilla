#include <iostream>
#include <string>

using namespace std;

int main()
{
    string pin = "0601"; // Masukkan Pin Anda
    double balance = 6000.00; // Saldo Awal Anda
    int choice;
    double amount;

    cout << "Selamat Datang di ATM Fadilla\n" << endl;

    // Meminta Anda Untuk Masukkan PIN
    cout << "Silahkan Masukkan PIN Anda: ";
    string input_pin;
    cin >> input_pin;

    // Memeriksa PIN 
    if (input_pin == pin)
    {
        cout << "PIN Benar\n" << endl;

        // Tampilan Menu Transaksi
        cout << "Silahkan Pilih Transaksi Yang Anda Inginkan:" << endl;
        cout << "1. Cek Saldo" << endl;
        cout << "2. Tarik Tunai" << endl;
        cout << "3. Setor Tunai" << endl;
        cout << "4. Transfer" << endl;
        cout << "5. Top Up" << endl;
        cout << "6. Keluar" << endl;
        
        cout << "\nPilihan Anda: ";
        cin >> choice;

        // Memproses Pilihan Anda
        switch (choice)
        {
            case 1:
                cout << "saldo anda saat ini adalah Rp " << balance << endl;
                break;
            case 2:
                cout << "silahkan masukkan jumlah yang ingin ditarik: ";
                cin >> amount;
                if (amount > balance)
                {
                    cout << "maaf, saldo anda tidak mencukupi" << endl;
                }
                else
                {
                    balance -= amount;
                    cout << "anda telah menarik saldo sejumlah Rp " << amount << endl;
                    cout << "\nsaldo anda saat ini adalah Rp " << balance << endl;
                }
                break;
            case 3:
                cout << "silahkan masukkan jumlah yang ingin anda setor: ";
                cin >> amount;
                balance += amount;
                cout << "anda telah menyetor sejumlah Rp " << amount << endl;
                cout << "\nsaldo anda saat ini adalah Rp " << balance << endl;
                break;
            case 4:
            	cout << "silahkan masukkan no rekening tujuan anda: ";
            	cin >> amount;
                balance += amount;
                cout << "silahkan masukkan jumlah yang ingin anda transfer: ";
                cin >> amount;
                balance -= amount;
                cout << "berhasil mentransfer sejumlah Rp " << amount << endl;
                cout << "\nsaldo anda saat ini berjumlah Rp " << balance << endl;
                break;
            case 5:
            	cout << "silahkan pilih transaksi yang anda inginkan:" << endl;
        		cout << "1. Dana" << endl;
       			cout << "2. ShopeePay" << endl;
        		cout << "3. GoPay" << endl;
        		cout << "4. Ovo" << endl;
        		cout << "5. PLN" << endl;
        		
				cout << "\nPilihan Anda: ";
      			cin >> choice;

    			cout << "silahkan masukkan jumlah yang ingin anda top up: ";
                cin >> amount;
                balance -= amount;
                cout << "anda telah berhasil top up sejumlah Rp " << amount << endl;
                cout << "\nsaldo anda saat ini adalah Rp " << balance << endl;
                break;
            case 6:
                cout << "Terima Kasih Telah Mempercayai ATM Fadilla" << endl;
                
				break;
            default:
                cout << "Maaf,pilihan tidak valid" << endl;
                break;
        }
    }
    else
    {
        cout << "Maaf PIN yang anda masukkan salah" << endl;
    }

    return 0;
}

