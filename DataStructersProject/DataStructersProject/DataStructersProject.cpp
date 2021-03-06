#include <iostream>
#include <iostream>
#include <stdlib.h>
#include <malloc.h>
#include <iomanip>
#include <ctype.h>
#include <string>
#include<chrono>
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

int elemansayisi;

int main()
{
	/*LinkedList* linkedList = new LinkedList();
	linkedList->olustur();
	int size = 10000;
	elemansayisi = size;
	for (int i = 0; i < size; i++) {
		linkedList->ekle(i, i);
	}
	cout << endl << endl << endl;
	auto begin1 = std::chrono::high_resolution_clock::now();			//LİNKEDLİST EKLEME BÖLÜMÜ
	linkedList->guncelle(142, 0);
	auto end1 = std::chrono::high_resolution_clock::now();
	cout << endl;
	cout << endl;
	cout << "10 bin elemanlı bir listede" << endl;
	cout << endl;
	auto elapsed1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end1 - begin1);
	cout << "Liste ile gerçeklemede ekleme süresi => " << elapsed1.count() << " nano-saniye" << endl;*/

	//-----------------------------------------------------------------------------------------

	/*ArrayList* arrayList = new ArrayList();
	arrayList->olustur();
	int size = 10000;
	elemansayisi = size;
	for (int i = 0; i < size; i++) {
		arrayList->ekle(i, i);
	}
	cout << endl << endl << endl;
	auto begin1 = std::chrono::high_resolution_clock::now();			//ARRAYLİST EKLEME BÖLÜMÜ
	arrayList->ekle(65, 10000);
	auto end1 = std::chrono::high_resolution_clock::now();
	cout << endl;
	cout << endl;
	cout << "10 bin elemanlı bir listede" << endl;
	cout << endl;
	auto elapsed1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end1 - begin1);
	cout << "Dizi ile gerçeklemede ekleme süresi => " << elapsed1.count() << " nano-saniye" << endl;*/

	//-----------------------------------------------------------------------------------------
	/*LinkedList* linkedList = new LinkedList();
	linkedList->olustur();
	int size = 10000;
	elemansayisi = size;
	for (int i = 0; i < size; i++) {
		linkedList->ekle(i, i);
	}
	cout << endl << endl << endl;
	auto begin1 = std::chrono::high_resolution_clock::now();			//LİNKEDLİST GÜNCELLEME BÖLÜMÜ
	linkedList->guncelle(142, 10000);
	auto end1 = std::chrono::high_resolution_clock::now();
	cout << endl;
	cout << endl;
	cout << "10 bin elemanlı bir listede" << endl;
	cout << endl;
	auto elapsed1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end1 - begin1);
	cout << "Liste ile gerçeklemede güncelleme süresi => " << elapsed1.count() << " nano-saniye" << endl;*/
	//-----------------------------------------------------------------------------------------

	/*ArrayList* arrayList = new ArrayList();
	arrayList->olustur();
	int size = 10000;
	elemansayisi = size;
	for (int i = 0; i < size; i++) {
		arrayList->ekle(i, i);
	}
	cout << endl << endl << endl;
	auto begin1 = std::chrono::high_resolution_clock::now();			//ARRAYLİST GÜNCELLEME BÖLÜMÜ
	arrayList->guncelle(654, 10000);
	auto end1 = std::chrono::high_resolution_clock::now();
	cout << endl;
	cout << endl;
	cout << "10 bin elemanlı bir listede" << endl;
	cout << endl;
	auto elapsed1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end1 - begin1);
	cout << "Dizi ile gerçeklemede güncelleme süresi => " << elapsed1.count() << " nano-saniye" << endl;*/
	//-----------------------------------------------------------------------------------------

	/*LinkedList* linkedList = new LinkedList();
	linkedList->olustur();
	int size = 10000;
	elemansayisi = size;
	for (int i = 0; i < size; i++) {
		linkedList->ekle(i, i);
	}
	cout << endl << endl << endl;
	auto begin1 = std::chrono::high_resolution_clock::now();			//LİNKEDLİST SİLME BÖLÜMÜ
	linkedList->sil(142);
	auto end1 = std::chrono::high_resolution_clock::now();
	cout << endl;
	cout << endl;
	cout << "10 bin elemanlı bir listede" << endl;
	cout << endl;
	auto elapsed1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end1 - begin1);
	cout << "Liste ile gerçeklemede güncelleme süresi => " << elapsed1.count() << " nano-saniye" << endl;*/
	//-----------------------------------------------------------------------------------------

	/*ArrayList* arrayList = new ArrayList();
	arrayList->olustur();
	int size = 10000;
	elemansayisi = size;
	for (int i = 0; i < size; i++) {
		arrayList->ekle(i, i);
	}
	cout << endl << endl << endl;
	auto begin1 = std::chrono::high_resolution_clock::now();			//ARRAYLİST SİLME BÖLÜMÜ
	arrayList->guncelle(65, 9333);
	auto end1 = std::chrono::high_resolution_clock::now();
	cout << endl;
	cout << endl;
	cout << "10 bin elemanlı bir listede" << endl;
	cout << endl;
	auto elapsed1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end1 - begin1);
	cout << "Dizi ile gerçeklemede güncelleme süresi => " << elapsed1.count() << " nano-saniye" << endl; */
	//-----------------------------------------------------------------------------------------

}




//ArrayList elements
void ArrayList::olustur()
{
	//dizi olusturma ve bas degerini atama
	bas = new int[10000];
}

void ArrayList::ekle(int _deger, int sira)
{
	//degerleri diziye ekleme
	if (sira == _deger) {
		bas[sira] = _deger;
	}

	//basa eleman ekleme
	else if (sira == 0) {
		for (int i = elemansayisi; i > 0; i--)
		{
			bas[elemansayisi];
			bas[i] = bas[i - 1];
		}
		bas[sira] = _deger;
	}

	//araya eleman ekleme
	if (sira != 0 && sira != _deger) {
		for (int i = elemansayisi; i >= sira; i--)
		{
			bas[elemansayisi];
			bas[i] = bas[i - 1];
		}
		bas[sira - 1] = _deger;
	}

	//sona eleman ekleme
	if (sira == elemansayisi) {
		bas[elemansayisi];
		bas[sira] = _deger;
	}

}

void ArrayList::guncelle(int _deger, int sira)
{
	if (sira == 0) {
		bas[sira] = _deger;
	}
	if (sira != 0) {
		bas[sira] = _deger;
	}
	if (sira == elemansayisi) {
		bas[sira - 1] = _deger;
	}
}

void ArrayList::sil(int sira)
{

	for (int i = elemansayisi; sira < elemansayisi; i--)
	{
		bas[i] = bas[i - 1];
	}
	elemansayisi--;
	bas[elemansayisi];

	return;
}

void ArrayList::yazdir()
{
	for (int i = 0; i < elemansayisi; i++)
	{
		cout << *(bas + i) << "   ";
	}
}

void ArrayList::bosalt()
{
	delete bas;
}

//LinkedList elements
void LinkedList::olustur()
{
	bas = NULL;
	sayac = 0;
}

void LinkedList::ekle(int _deger, int sira)
{
	Node* yeni = new Node();
	yeni->deger = _deger;
	//değer ekleme
	if (sira == _deger || sira == 0) {
		if (bas == NULL) {
			bas = yeni;
			return;
		}
		//basa ekleme;
		else
		{
			yeni->sonraki = bas;
			bas = yeni;
		}
	}

	//Ortaya ekleme
	if (sira != _deger && sira < elemansayisi) {
		if (bas == NULL) {
			bas = yeni;
			return;
		}
		sayac = sira;
		Node* tara;
		tara = bas;
		while (tara)
		{
			sayac++;
			tara = tara->sonraki;
		}
		tara = bas;
		for (int i = 0; i < sira - 1; i++)
		{
			tara = tara->sonraki;
		}
		yeni->sonraki = tara->sonraki;
		tara->sonraki = yeni;
	}

	//sona ekleme
	if (sira == elemansayisi) {
		if (bas == NULL) {
			bas = yeni;
			return;
		}
		Node* tara;
		tara = bas;
		while (tara->sonraki)
		{
			tara = tara->sonraki;
		}
		tara->sonraki = yeni;

		sira++;
	}

}

void LinkedList::guncelle(int _deger, int sira)
{
	Node* yeni = new Node();
	Node* tara;
	int sayac = 1;
	tara = bas;
	while (tara && (sayac < sira)) {
		sayac++;
		tara = tara->sonraki;
	}
	if (tara) {
		yeni->sonraki = tara->sonraki;
		tara->deger = _deger;
	}
}

void LinkedList::sil(int sira)
{
	Node* tara, * arka;
	int sayacDegeri = 1;
	tara = bas;
	if (sira <= 0) {
		cout << "Hatalı sıra numarası lütfen 0'dan buyuk deger giriniz" << endl;
		return;
	}
	if (sira == 1) {
		bas = bas->sonraki;
		delete tara;
		sayac--;
		return;
	}
	while (tara != NULL && (sayacDegeri < sira))
	{
		arka = tara;
		tara = tara->sonraki;
		sayacDegeri++;
	}
	if (sayacDegeri < sira) {
		cout << "Silinecek Değer bulunamadı" << endl;
	}
	else
	{
		arka->sonraki = tara->sonraki;
		delete tara;
		sayac--;
	}
}


void LinkedList::yazdir()
{
	Node* tara;
	tara = bas;
	if (!tara) {
		cout << "Liste Boş!!!!!!" << endl;
	}
	while (tara) {
		cout << tara->deger << " ";
		tara = tara->sonraki;

	}
	cout << endl;
}

void LinkedList::bosalt()
{
	Node* bosalt;
	while (bas) {
		bosalt = bas;
		bas = bas->sonraki;
		delete bosalt;
	}
	sayac = 0;
}
