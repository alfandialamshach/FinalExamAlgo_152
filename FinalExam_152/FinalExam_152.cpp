#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int JumlahProduk;
	string NamaProduk, TipeProduk;
	Node* next;
	Node* prev;
};
class ManajemenProduk {
private:
	Node* head;
public:
	ManajemenProduk() {
		head = NULL;
	}
	void tambahProduk() {
		string nama;
		int jumlah;
		string tipe;
		Node* nodeBaru = new Node();
		cout << "========== TAMBAH PRODUK ==========" << endl;
		cout << "Nama Produk : ";
		getline(cin, nama);
		cout << "Jumlah Produk : ";
		cin >> jumlah;
		cin.ignore(); // Membersihkan buffer input
		cout << "Tipe Produk : ";
		getline(cin, tipe);
		nodeBaru->NamaProduk = nama;
		nodeBaru->JumlahProduk = jumlah;
		nodeBaru->TipeProduk = tipe;

		Node* current = head;				//Step 1.a
		Node* previous = NULL;	
		while (current->next != NULL) {//Step 1.b
			previous = current;	//1.d
			current = current->next;		//1.e
		}
		nodeBaru->next = current->next; //Step 4
		nodeBaru->prev = current;	//Step 5
		if (current->next != NULL)
			current->next->prev = nodeBaru;	//Step 6
		current->next = nodeBaru;	//step 7
		cout << "Produk berhasil ditambahkan!" << endl;
	}
	void tampilkanSemuaProduk() {
		cout << "========== SEMUA DATA PRODUK ==========" << endl;
		if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan." << endl;
		}
		else {
			Node* current = head;
			while (current != NULL) {
				cout << "" << endl;
				Node* currentNode = head;
				while (currentNode != NULL) {
					cout << "Nama Produk: " << currentNode->NamaProduk << ",Tipe Produk: " << endl;
					currentNode = currentNode->next;
				}
			}
		}
	}
	void cariProdukByNama() {
		cout << "========== CARI PRODUK BERDASARKAN NAMA ==========" << endl;
		if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan." << endl;
		}
		else {
			string targetNama;
			cout << "Nama Produk yang dicari: ";
			getline(cin, targetNama);
			Node* current = head;
			int posisi = 0;
			while (current != NULL) {
				posisi++;
				//isi disini
			}
			if (current == NULL) {
				cout << "Nama produk " << targetNama << " TIDAK DITEMUKAN" <<
					endl;
			}
		}
	}
	void algorithmaSortByJumlahProduk() {
		if (head == NULL || head->next == NULL) {
			return; // Tidak perlu sorting jika hanya terdapat 0 atau 1 node
		}
		Node* current;
		Node* last = NULL;
		current = head;
		//isi disini
	}
};
int main() {
	ManajemenProduk manajemenProduk;
	int pilihan;
	do {
		cout << "========== APLIKASI MANAJEMEN DATA PRODUK ==========" << endl;
		cout << "1. Tambah Produk" << endl;
		cout << "2. Tampilkan Semua Produk" << endl;
		cout << "3. Cari Produk berdasarkan Nama" << endl;
		cout << "4. Urutkan Produk berdasarkan Jumlah" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			manajemenProduk.tambahProduk();
			break;
		case 2:
			manajemenProduk.tampilkanSemuaProduk();
			break;
		case 3:
			manajemenProduk.cariProdukByNama();
			break;
		case 4:
			manajemenProduk.algorithmaSortByJumlahProduk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}/*2. Linkledlist doubleLinkedlist/*3. Insert QUEUE di array :
1.If the queue is empty :
	//a.Set FRONT = 0.
	//b.Increment REAR by 1.
2. Masukan element dalam index terakhir ke dalam array.
Delete QUEUE di array :
	1.	Retrieve the element at index FRONT.
	2.	Increment FRONT by 1*/

/*4. Stack adalah struktur data yang memungkinkan elemen disisipkan dan dihapus hanya di bagian atas. (LIFO) terakhir masuk terakhir keluar
Stack digunakan pada untuk pemanggilan fungsi, membatalkan daftar, dan pemeriksaan tanda kurung. */

/*5. a. 5
	 b. Preorder (50, 48, 30, 20, 15,25, 32,31,35,70,65,90,*/
