#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

namespace Umlaut
{
	const unsigned char AE = static_cast<unsigned char>(142);
	const unsigned char ae = static_cast<unsigned char>(132);
	const unsigned char OE = static_cast<unsigned char>(153);
	const unsigned char oe = static_cast<unsigned char>(148);
	const unsigned char UE = static_cast<unsigned char>(154);
	const unsigned char ue = static_cast<unsigned char>(129);
	const unsigned char ss = static_cast<unsigned char>(225);
}



int main()
{
	int Auswahl = 5;
	char eingabe;
	double  number1, number2, resultlog;
	char invoice;
	bool quit = false;




		cout << "\t\t\t Dry's Taschenrechner\n";
		cout << "\t\t\t\tv0.1.1\n";

		cout << "\n\n\n\t Menu\n";
		cout << "\t------\n\n";
		cout << "1.) Taschenrechner\n\n";
		cout << "2.) " << Umlaut::ue << "ber Domi aka Dry infos her holen\n\n";
		cout << "4.) EXIT\n\n";

		cin >> Auswahl;
		system("CLS");
		if (Auswahl == 1) 
		{
			cout << "> Es gibt folgende Rechenaufgaben, (  +  -  *  /  %  )<\n\n";
			cout << "> Geben Sie eine Rechenaufgabe ein:  <\n\n"; // Eingabeaufforderung ausgeben
			cin >> number1 >> invoice >> number2;

			switch (invoice) {
			case '+': resultlog = number1 + number2; break;
			case '-': resultlog = number1 - number2; break;
			case '*': resultlog = number1 * number2; break;
			case '/': resultlog = number1 / number2; break;
			case '%': resultlog = number1 / number2; break;
			default: cout << "unknown invoice...\n"; break; return 2;
			}
			cout << "> Dein Ergebnis ist : \n\n" << number1 << ' ' << invoice << ' ' << number2 << "\n = " << resultlog << '\n';
			cout << "" << endl;
			cout << "" << endl;
			system("PAUSE");
	    }
		else if (Auswahl == 2)
		{

			cout << "\t\t\t\n\n\n";
			cout << "\t\t\t\Dominik S, 30 Jahre alt\n";
			cout << "\t\t\tBin urspr"<<Umlaut::ue<<"glich aus Datteln,\n";
			cout << "\t\t\tWohne derzeit aber in M" << Umlaut::oe << "chengladbach\n";
			cout << "\t\t\tHabe drei Kinder\n";
			cout << "\t\t\tLebe aber seit einem Jahr getrennt\n";
			cout << "\t\t\tBin auf der Suche nach einem Quereinsteiger Job\n";
			cout << "\t\t\tin Richtung C# / C++ (evtl auch Game-Programmierer)\n";
			cout << "\t\t\tda ich definitiv nicht aufgebe, bis es funktioniert!\n";
			cout << "\t\t\tIch bin da recht offen, weil ich defintiv Spa" << Umlaut::ss << " daran habe\n";
			cout << "\t\t\tmit den ganzen Programmen zu Arbeiten!\n\n\n\n";
			system("PAUSE");
		}
		else if (Auswahl == 4)
		{
			cout << "Danke das du die Console ausprobiert hast, ich w" << Umlaut::ue << "nsche Dir noch einen sch" << Umlaut::oe << "nen Tag\n";
			cout << ">>> Console wird geschlossen, . . . <<<\n\n";
			system("EXIT"); quit = true; return 0;
		}
		else
		{
			cout << "Ung" << Umlaut::ue << "ltiger Eintrag<\n\n";
		}
		return 0;
	
}


