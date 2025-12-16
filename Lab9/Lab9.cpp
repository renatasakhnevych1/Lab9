#include <iostream>
using namespace std;


//Zad1
//struct Struktura {
//	int x, y;
//};

//Zad2
//struct Prostokat {
//	double a, b;
//}obiekt1;
//
//double Pole(struct Prostokat) {
//	double pole;
//	pole = obiekt1.a * obiekt1.b;
//	return pole;
//}

//Zad3
struct trojkat {
	double a;
	double b;
	double c;
};
void Funkcja(struct trojkat trojkat_1, struct trojkat *trojkat_2) {
	*trojkat_2 = trojkat_1;
}



int main()
{
	////Zad1
	//Struktura obiekt1;
	//obiekt1 = { 34,57 };
	//cout << obiekt1.x<<", "<<obiekt1.y;

	trojkat t1;
	trojkat t2;
	t1 = { 4.5,7.0,8.5 };

	Funkcja(t1, &t2);
	


}
