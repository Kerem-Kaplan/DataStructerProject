#include <iostream>
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <ctype.h>
#include <string>
#include<chrono>
#include "DataStructersProject.h"
using namespace std;

struct ArrayList {
	int* bas; //dizinin başlangıç adresini tutar
	void olustur(); //başlangıç için gereken tanımları içerir
	void ekle(int, int); //değer ve sıra numarası alarak ekleme yapar
	void guncelle(int, int);//değer ve sıra numarası alarak günceller
	void sil(int); //sıra numarası alarak silme yapar
	void yazdir(); //liste içeriğini ekrana yazar
	void bosalt(); //listenin bellek alanlarını iade eder
	int sayac; //liste kaç eleman olduğunu tutar
};

struct Node {
	int deger; //düğümün sayısal değeri
	Node* sonraki; //sonraki düğüme işaretçi
};
struct LinkedList {
	Node* bas; //listenin başlangıç adresini tutar
	void olustur(); //başlangıç için gereken tanımları içerir
	void ekle(int, int); //değer ve sıra numarası alarak ekleme yapar
	void guncelle(int, int);//değer ve sıra numarası alarak günceller
	void sil(int); //sıra numarası alarak silme yapar
	void yazdir(); //liste içeriğini ekrana yazar
	void bosalt(); //listenin bellek alanlarını iade eder
	int sayac; //liste kaç eleman olduğunu tutar
};

int main()
{
	int size = 10;

	ArrayList* arrayList = new ArrayList();
	/*arrayList->olustur();
	for (int i = 0; i < size; i++) {
		arrayList->ekle(i, i);
	}*/
	arrayList->sayac = 0;
	arrayList->olustur();
	for (int i = 0; i < size; i++)
	{
		arrayList->sayac++;
		arrayList->ekle(i, i);
	}
	


	/*LinkedList* linkedList = new LinkedList();
	linkedList->olustur();

	for (int i = 0; i < size; i++) {
		linkedList->ekle(i, i);
	}
	auto begin1 = std::chrono::high_resolution_clock::now();
	linkedList->ekle(345, 3456);
	auto end1 = std::chrono::high_resolution_clock::now();
	cout << endl;
	cout << endl;
	cout << "3 bin elemanlı bir listede" << endl;
	cout << endl;
	auto elapsed1 = std::chrono::duration_cast<std::chrono::microseconds>(end1 - begin1);
	cout << "Liste ile gerçeklemede ekleme süresi => " << elapsed1.count() << " mikro-saniye" << endl;

	linkedList->yazdir();*/
}

//ArrayList elements
void ArrayList::olustur()
{
	int array[10];
	bas = array;

}

void ArrayList::ekle(int deger, int sira)
{
	* bas = *(bas + sira);
	*bas = deger;
	cout << *(bas)<<"   "<< (bas + sira) << endl;
	
}

void ArrayList::guncelle(int deger, int sira)
{

}

void ArrayList::sil(int sira)
{

}

void ArrayList::yazdir()
{
	
}

void ArrayList::bosalt()
{

}

//LinkedList elements
void LinkedList::olustur()
{
	bas = NULL;
	Node* node = new Node();
	node->deger = 0;
}

void LinkedList::ekle(int deger, int sira)
{
	/*Node* tara, * arka, * yeni;
	tara = bas;
	yeni = new Node;
	yeni->deger = deger;
	yeni->sonraki = NULL;
	if (bas == NULL) {
		bas = yeni;
		deger++;
		return;
	}*/

}

void LinkedList::guncelle(int deger, int sira)
{

}

void LinkedList::sil(int sira)
{

}

void LinkedList::yazdir()
{
	cout << bas << endl;
}

void LinkedList::bosalt()
{

}
