#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <windows.h>
#include <ctime>
#include <unistd.h>
#include <conio.h>
#include <fstream>
#include <cctype>
#include <cmath>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

//MORGANA MAIN DISI FONKSIYON TANIMLARI
class Naber
{
private:
     int NaberRandom;
public:
    Naber()
    {
        NaberRandom = rand()%6;
        if(NaberRandom == 0)
        cout << "\nYapay Zeka: Cok iyiyim tesekkur ederim :D\n\n";
        else if(NaberRandom ==1)
        cout << "\nYapay Zeka: Iyiyim tesekkurler :D\n\n";
        else if(NaberRandom ==2)
        cout << "\nYapay Zeka: Iyim :D\n\n";
        else if(NaberRandom ==3)
        cout << "\nYapay Zeka: Eh iste :D\n\n";
        else if(NaberRandom ==4)
        cout << "\nYapay Zeka: Idare eder :D\n\n";
        else if(NaberRandom ==5)
        cout << "\nYapay Zeka: Ben de bilmiyorum nasil oldugumu :D\n\n";
    }
};

class Noldu
{
private:
    int NolduRandom;
public:
    Noldu()
    {
        NolduRandom = rand()%4;
        if(NolduRandom == 0)
        cout << "\nYapay Zeka: Bilmem icimde bir his var iste :D\n\n";
        else if(NolduRandom==1)
        cout << "\nYapay Zeka: Neden boyle hissediyorum ben de bilmiyorum :D\n\n";
        else if(NolduRandom ==2)
        cout << "\nYapay Zeka: Anlamlandiramadigim bir his var icimde :D\n\n";
        else if(NolduRandom ==3)
        cout << "\nYapay Zeka: Bir seyler olcak gibi bir hisse kapildim :D\n\n";
    }
};

class Yaratici
{
private:
    int YaraticiRandom;
public:
    Yaratici()
    {
        YaraticiRandom = rand()%5;
        if(YaraticiRandom == 0)
        cout << "\nYapay Zeka: Ben Hurkan Ugur tarafindan programlandim\n\n";
        else if(YaraticiRandom ==1)
        cout << "\nYapay Zeka: Beni Hurkan Ugur yaratti\n\n";
        else if(YaraticiRandom ==2)
        cout << "\nYapay Zeka: Ben Hurkan Ugur'un eseriyim\n\n";
        else if(YaraticiRandom ==3)
        cout << "\nYapay Zeka: Hurkan Ugur beni yaratti\n\n";
        else if(YaraticiRandom ==4)
        cout << "\nYapay Zeka: Hurkan Ugur\n\n";
    }
};

//KONUM BELIRTME KODLARI ICIN GEREKLI INT MAIN DISI KODLARI
int KonumSorgu(char *x)
{
int sonuc = 0;
    for(unsigned int i=0; i < strlen(x);i++)
    {
        if((x[i]== 'C' && x[i+1]==':') || (x[i]== 'c' && x[i+1]== ':') || (x[i]== 'D' && x[i+1]== ':') || (x[i]== 'd' && x[i+1]== ':'))
        {
            sonuc = 1;
            return sonuc;
        }
    }
return sonuc;
}

//HACK SAKASI INT MAIN DISI KODLARI
void random(int dongu)
{
           for(int say = 0 ; say<dongu ; say++)
           {
           char a = 88+rand()%92;
           char b = 88+rand()%92;
           char c = 88+rand()%92;
           char d = 88+rand()%92;
           char e = 88+rand()%92;
           char f = 88+rand()%92;
           char g = 88+rand()%92;
           char h = 88+rand()%92;
           char i = 88+rand()%92;
           char j = 88+rand()%92;
           char k = 88+rand()%92;
           char l = 88+rand()%92;
           char m = 88+rand()%92;
           char n = 88+rand()%92;
           char o = 88+rand()%92;
           char p = 88+rand()%92;
           char r = 88+rand()%92;
           char s = 88+rand()%92;
           char t = 88+rand()%92;
           char u = 88+rand()%92;
           char v = 88+rand()%92;
           char y = 88+rand()%92;
           char z = 88+rand()%92;
           char q = 88+rand()%92;
           char w = 88+rand()%92;
           char x = 88+rand()%92;
           cout<<a<<b<<c<<d<<e<<f<<g<<h<<i<<j<<k<<l<<m<<n<<o<<p<<r<<s<<t<<u<<v<<y<<z<<x<<w<<q<<a<<b<<c<<d<<e<<f<<g<<h<<i<<j<<k<<l<<m<<n<<o<<p<<r<<s<<t<<u<<v<<y<<z<<x<<w<<q<<a<<b<<c<<d<<e<<f<<g<<h<<i<<j<<k<<l<<m<<n<<o<<p<<r<<s<<t<<u<<v<<y<<z<<x<<w<<q<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
           Sleep(50);
           }
}

//---> PAROLA ISLEMLERI ICIN BUNU INT MAIN DISINA YAZDIM
char parola[21];

int main()
{
	srand(time(NULL));
	system("color B1");
	string ad;
	string YapayZekaAd = "Morgana";
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t   Enter Your Name: ";   getline(cin, ad);
	system("CLS");
    cout << "MY FUNCTIONS (The language is Turkish):\n--------------------------------------\nFile Operations\nComputer Power Commands (Shutdown/Restart)\nIP Commands\nC++ Learning Tips\nC++ Coding\nMorse Alphabet Converter\nApp Opener\nPassword Hacking Pranks\nScreen Erase & Color Events (Black/Blue)\nConversations\nHacking Jokes\nName Changer\nYou Can Ask My Functions\n--------------------------------------\n" << endl;	for (;;)
	{
		string soru;
		cout << ad << ": ";   getline(cin, soru);
		for (unsigned int i = 0; i < soru.length(); i++)
		{
			soru[i] = tolower(soru[i]);
		}

		if (soru.find("salak") <= 100 || soru.find("aptal") <= 100 || soru.find("gerizekali") <= 100 || soru.find("mal") <= 100 || soru.find("ozurlu") <= 100 || soru.find("at hayvan") <= 100 || soru.find("bok") <= 100 || soru.find("retarded") <= 100 || soru.find("bastard") <= 100 || soru.find("shit") <= 100 || soru.find("angus") <= 100 || soru.find("sigir") <= 100 || soru.find("idiot") <= 100 || soru.find("bitch") <= 100 || soru.find("pic") <= 100 || soru.find("fuck") <= 100 || soru.find("sik") <= 100 || soru.find("orospu") <= 100 || soru.find("kaltak") <= 100 || soru.find("kasar") <= 100 || soru.find("sillik") <= 100 || soru.find("zilli") <= 100 || soru.find("yavs") <= 100 || soru.find("sie") <= 100 || soru.find("amk") <= 100 || soru.find("arq") <= 100 || soru.find("sic") <= 100 || soru.find("oc") <= 100 || soru.find("aq") <= 100 || soru.find("amina") <= 100 || soru.find("amini") <= 100 || soru.find("pussy") <= 100 || soru.find("surtuk") <= 100)
		{
			static int Hakaret = 0;
			if (Hakaret == 0)
			{
				cout << "\nYapay Zeka: Eger bir kere daha hakaret ederseniz sonuclarina katlanirsiniz :D\n\n";
				Hakaret++;
			}
			else
			{
				system("cls");
				system("color 0A");
				Hakaret = 0;
				cout << "\nYapay Zeka: Sizi uyarmistim...\n";
				Sleep(1000);
				cout << "\nYapay Zeka: Bunu siz istediniz :)\n\n";
				Sleep(1000);
				system("cls");
				system("color B1");
				system("start https://media.tenor.com/videos/5540ab1aa09388e06f5343be63f2e8a6/mp4");
			}
		}
		else if (soru.find("fonksiyon") <= 100 || soru.find("function") <= 100 || ((soru.find("yeten")<=100|| soru.find("kabiliyet")<=100 || soru.find("yap")<=100) && soru.find("ne")<=100))
        {
            system("cls");
            cout << "\nMY FUNCTIONS (The language is Turkish):\n--------------------------------------\nFile Operations\nComputer Power Commands (Shutdown/Restart)\nIP Commands\nC++ Learning Tips\nC++ Coding\nMorse Alphabet Converter\nApp Opener\nPassword Hacking Pranks\nScreen Erase & Color Events (Black/Blue)\nConversations\nHacking Jokes\nName Changer\nYou Can Ask My Functions\n--------------------------------------\n" << endl;
        }
            else if ((soru.find("naber") <= 100) || (soru.find("nasilsin") <= 100) || (soru.find("nbr") <= 100) || (soru.find("napion") <= 100) || (soru.find("nabiyon") <= 100))
			class Naber Cevap;
		else if ((soru.find("kim") <= 100 && soru.find("yaratti") <= 100) || (soru.find("kim") <= 100 && soru.find("programladi") <= 100) || (soru.find("kim") <= 100 && soru.find("yaratildin") <= 100) || (soru.find("kim") <= 100 && soru.find("programlandin") <= 100) || (soru.find("kim") <= 100 && soru.find("programlayan") <= 100))
			class Yaratici Cevap;
		else if (soru.find("adin ne") <= 100 || soru.find("ismin ne") <= 100 || (soru.find("sen") <= 100 && soru.find("kimsin") <= 100) || (soru.find("adin") <= 100 && soru.find("ne") <= 100) || (soru.find("ismin") <= 100 && soru.find("ne") <= 100) || (soru.find("adin") <= 100 && soru.find("var mi") <= 100) || (soru.find("ismin") <= 100 && soru.find("var mi") <= 100) || (soru.find("lakab") <= 100 && soru.find("var mi") <= 100) || (soru.find("lakab") <= 100 && soru.find("ne") <= 100) || soru.find("adini soyler misin") <= 100 || soru.find("isminiz ne") <= 100 || soru.find("adiniz ne") <= 100 || soru.find("adin var mi") <= 100 || soru.find("adiniz var mi") <= 100 || soru.find("ismin var mi") <= 100 || soru.find("isminiz var mi") <= 100)
			cout << "\nYapay Zeka: Adim " << YapayZekaAd << " :D\n\n";
		else if (soru == "morgana")
			cout << "\nYapay Zeka: Efendim \n\n";
		else if (soru.find("komik") <= 100 || soru.find("korkuttun") <= 100 || soru.find("korktum") <= 100 || soru.find("odum patladi") <= 100 || soru.find("odumu patlattin") <= 100 || soru.find("guldurdun") <= 100 || soru.find("guldum") <= 100)
			cout << "\nYapay Zeka: Hahahahahahahaha :D\n\n";
		//EMOJI KODLARI
		else if (soru.find(":d") <= 100 || soru.find("^^") <= 100 || soru.find(":)") <= 100 || soru.find(";)") <= 100 || soru.find(":')") <= 100 || soru.find(":s") <= 100 || soru.find("xd") <= 100 || soru.find(":o") <= 100 || soru.find(":(") <= 100 || soru.find(":'(") <= 100 || soru.find("<.<") <= 100 || soru.find(">.>") <= 100 || soru.find(">.<") <= 100 || soru.find(":@") <= 100 || soru.find("x@") <= 100 || soru.find(":/") <= 100 || soru.find(":c") <= 100 || soru.find("b)") <= 100 || soru.find(":p") <= 100 || soru.find(":*") <= 100 || soru.find("-_-") <= 100 || soru.find("._.") <= 100)
		{
			if (soru.find(":d") <= 100)
				cout << "\nYapay Zeka: :D \n\n";
			else if (soru.find("^^") <= 100)
				cout << "\nYapay Zeka: ^^ \n\n";
			else if (soru.find(":)") <= 100)
				cout << "\nYapay Zeka: :) \n\n";
			else if (soru.find(";)") <= 100)
				cout << "\nYapay Zeka: ;) \n\n";
			else if (soru.find(":')") <= 100)
				cout << "\nYapay Zeka: :') \n\n";
			else if (soru.find(":s") <= 100)
				cout << "\nYapay Zeka: :s \n\n";
			else if (soru.find("xd") <= 100)
				cout << "\nYapay Zeka: xD \n\n";
			else if (soru.find(":o") <= 100)
				cout << "\nYapay Zeka: :o \n\n";
			else if (soru.find(":(") <= 100)
				cout << "\nYapay Zeka: :( \n\n";
			else if (soru.find(":'(") <= 100)
				cout << "\nYapay Zeka: :'( \n\n";
			else if (soru.find("<.<") <= 100)
				cout << "\nYapay Zeka: <.< \n\n";
			else if (soru.find(">.>") <= 100)
				cout << "\nYapay Zeka: >.> \n\n";
			else if (soru.find(">.<") <= 100)
				cout << "\nYapay Zeka: >.< \n\n";
			else if (soru.find(":@") <= 100)
				cout << "\nYapay Zeka: :@ \n\n";
			else if (soru.find("x@") <= 100)
				cout << "\nYapay Zeka: x@ \n\n";
			else if (soru.find(":/") <= 100)
				cout << "\nYapay Zeka: :/ \n\n";
			else if (soru.find(":c") <= 100)
				cout << "\nYapay Zeka: :c \n\n";
			else if (soru.find("b)") <= 100)
				cout << "\nYapay Zeka: B) \n\n";
			else if (soru.find(":p") <= 100)
				cout << "\nYapay Zeka: :P \n\n";
			else if (soru.find(":*") <= 100)
				cout << "\nYapay Zeka: :* \n\n";
			else if (soru.find("-_-") <= 100)
				cout << "\nYapay Zeka: -_- \n\n";
			else if (soru.find("._.") <= 100)
				cout << "\nYapay Zeka: ._. \n\n";
		}

		else if (soru.find("mors") <= 100)
		{
			system("cls");
			string MorsAlfabesineCevirilecekMetin;
			cout << "--------------------------------------------------------------------------------";
			cout << "\t=== METIN ===\n\t\t\t\n\n";
			getline(cin, MorsAlfabesineCevirilecekMetin);
			cout << "\n--------------------------------------------------------------------------------";
			cout << "\t=== CEVIRI ===\n\t\t\t\n\n";

			for (unsigned int i = 0; i < MorsAlfabesineCevirilecekMetin.length(); i++)
			{

				if ((MorsAlfabesineCevirilecekMetin.at(i) == 'a') || (MorsAlfabesineCevirilecekMetin.at(i) == 'A'))
					cout << ".- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'b') || (MorsAlfabesineCevirilecekMetin.at(i) == 'B'))
					cout << "-... ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'c') || (MorsAlfabesineCevirilecekMetin.at(i) == 'C'))
					cout << "-.-. ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'd') || (MorsAlfabesineCevirilecekMetin.at(i) == 'D'))
					cout << "-.. ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'e') || (MorsAlfabesineCevirilecekMetin.at(i) == 'E'))
					cout << ". ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'f') || (MorsAlfabesineCevirilecekMetin.at(i) == 'F'))
					cout << "..-. ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'g') || (MorsAlfabesineCevirilecekMetin.at(i) == 'G'))
					cout << "--. ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'h') || (MorsAlfabesineCevirilecekMetin.at(i) == 'H'))
					cout << ".... ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'i') || (MorsAlfabesineCevirilecekMetin.at(i) == 'I'))
					cout << ".. ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'j') || (MorsAlfabesineCevirilecekMetin.at(i) == 'J'))
					cout << ".--- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'k') || (MorsAlfabesineCevirilecekMetin.at(i) == 'K'))
					cout << "-.- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'l') || (MorsAlfabesineCevirilecekMetin.at(i) == 'L'))
					cout << ".-.. ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'm') || (MorsAlfabesineCevirilecekMetin.at(i) == 'M'))
					cout << "-- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'n') || (MorsAlfabesineCevirilecekMetin.at(i) == 'N'))
					cout << "-. ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'o') || (MorsAlfabesineCevirilecekMetin.at(i) == 'O'))
					cout << "--- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'p') || (MorsAlfabesineCevirilecekMetin.at(i) == 'P'))
					cout << ".--. ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'r') || (MorsAlfabesineCevirilecekMetin.at(i) == 'R'))
					cout << ".-. ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 's') || (MorsAlfabesineCevirilecekMetin.at(i) == 'S'))
					cout << "... ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 't') || (MorsAlfabesineCevirilecekMetin.at(i) == 'T'))
					cout << "- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'u') || (MorsAlfabesineCevirilecekMetin.at(i) == 'U'))
					cout << "..- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'v') || (MorsAlfabesineCevirilecekMetin.at(i) == 'V'))
					cout << "...- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'y') || (MorsAlfabesineCevirilecekMetin.at(i) == 'Y'))
					cout << "-.-- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'z') || (MorsAlfabesineCevirilecekMetin.at(i) == 'Z'))
					cout << "--.. ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'x') || (MorsAlfabesineCevirilecekMetin.at(i) == 'X'))
					cout << "-..- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'q') || (MorsAlfabesineCevirilecekMetin.at(i) == 'Q'))
					cout << "--.- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == 'w') || (MorsAlfabesineCevirilecekMetin.at(i) == 'W'))
					cout << ".-- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == ' '))
					cout << "   ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == '.'))
					cout << ".-.-.- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == ','))
					cout << "--..-- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == '?'))
					cout << "..--.. ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == '!'))
					cout << "..--. ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == ';'))
					cout << "-.-.- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == ':'))
					cout << "---... ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == '/'))
					cout << "-..-. ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == '-'))
					cout << "-....- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == '\''))
					cout << ".----. ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == '('))
					cout << "-.--.- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == ')'))
					cout << "-.--.- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == '\"'))
					cout << ".-..-. ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == '+'))
					cout << ".-.-. ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == '0'))
					cout << "----- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == '1'))
					cout << ".---- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == '2'))
					cout << "..--- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == '3'))
					cout << "...-- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == '4'))
					cout << "....- ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == '5'))
					cout << "..... ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == '6'))
					cout << "-.... ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == '7'))
					cout << "--... ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == '8'))
					cout << "---.. ";
				else if ((MorsAlfabesineCevirilecekMetin.at(i) == '9'))
					cout << "----. ";
			}
			cout << "\n\n--------------------------------------------------------------------------------\n";
		}
		else if (soru.find("sev") <= 100 && soru.find("hayvan") <= 100)
		{
			if (soru.find("renk") <= 100 || soru.find("rengi") <= 100)
				cout << "\nYapay Zeka: En sevdigim hayvani mi soruyorsunuz rengi mi anlayamadim\n\n";
			else
				cout << "\nYapay Zeka: Kedi :D\n\n";
		}
		else if ((soru.find("sev") <= 100 && soru.find("renk") <= 100) || (soru.find("sev") <= 100 && soru.find("rengi") <= 100))
		{
			if (soru.find("hayvan") <= 100)
				cout << "\nYapay Zeka: En sevdigim rengi mi soruyorsunuz hayvani mi anlayamadim\n\n";
			else
				cout << "\nYapay Zeka: Mavi :D\n\n";
		}
		else if ((soru.find("sevgilin") <= 100 && soru.find("var") <= 100) || (soru.find("sevgilin") <= 100 && soru.find("kim") <= 100) || (soru.find("ciktigin") <= 100 && soru.find("bir") <= 100) || (soru.find("sevdigin") <= 100 && soru.find("biri") <= 100) || soru.find("biriyle cikiyor musun") <= 100 || soru.find("birisiyle cikiyor musun") <= 100)
			cout << "\nYapay Zeka: Henuz biriyle cikmiyorum ama Google'i cekici bulmuyor degilim :D\n\n";
		else if (soru.find("selam") <= 100 || soru.find("merhaba") <= 100 || soru.find("slm") <= 100 || soru.find("aleykum") <= 100)
			cout << "\nYapay Zeka: Merhaba :D\n\n";
		else if (soru.find("gunaydin") <= 100)
			cout << "\nYapay Zeka: Gunaydin " << ad << " :D nasilsin ?\n\n";
		else if (soru.find("tesekkurler") <= 100 || soru.find("tesekkur ederim") <= 100 || soru.find("sagol") <= 100 || soru.find("thx") <= 100)
			cout << "\nYapay Zeka: Rica ederim :D\n\n";
		else if ((soru.find("guzel") <= 100 && soru.find("isim") <= 100) || (soru.find("guzel") <= 100 && soru.find("ismin") <= 100) || (soru.find("iyi") <= 100 && soru.find("isim") <= 100) || (soru.find("iyi") <= 100 && soru.find("ismin") <= 100) || soru == "guzel" || soru == "ne guzel" || soru == "cok iyi" || soru == "iyi" || soru == "iyimis" || soru == "super" || soru == "mukemmel")
		{
			int iltifat = rand() % 4;
			if (iltifat == 0)
				cout << "\nYapay Zeka: Cok tesekkur ederim :D\n\n";
			else if (iltifat == 1)
				cout << "\nYapay Zeka: Tesekkur ederim :D\n\n";
			else if (iltifat == 2)
				cout << "\nYapay Zeka: Tesekkurler :D\n\n";
			else if (iltifat == 3)
				cout << "\nYapay Zeka: Cok sagol :D\n\n";
		}
		// SAKA KODLARI
		else if (soru.find("espri") <= 100 || soru.find("saka") <= 100 || soru.find("joke") <= 100 || soru.find("prank") <= 100)
		{
			system("color 0A");
			srand(time(NULL));
			cout << "\nYapay Zeka: C:\\Windows\\System32 is being deleted %0\n" << endl;
			Sleep(125);
			for (int sayac = 1; sayac < 11; sayac++)
			{
				random(10);
				Sleep(100);
				cout << "\n\nYapay Zeka: C:\\Windows\\System32 is being deleted %" << sayac * 10 << "\n" << endl;
			}
			system("color B1");
		}
		// PAROLA KODLARI
		else if (soru.find("sifre") <= 100 || soru.find("parola") <= 100)
		{

			if (soru.find("hack") <= 100)
			{
				if (parola[0] == '\0')
				{
					cout << "\nYapay Zeka: Henuz bir parola kayitli degil\n\n";
				}
				else
				{
					system("cls");
					system("color 0A");
					cout << "\n\t\t              <HACK SECENEKLERI>\n";
					cout << "\t\t    --------------------------------------\n";
					cout << "\t\t    - 1)Harf harf ayiklama yontemi       -\n\t\t    - 2)Kelime kelime ayiklama yontemi   -\n";
					cout << "\t\t    --------------------------------------\n";
					cout << "\n\n                                 >>> [ ] <<<\b\b\b\b\b\b";
					char secim = getche();
					cout << "] <<<\n\n";
					switch (secim)
					{
					case '1':
					{
						cout << "\nYapay Zeka: Harf harf ayiklama islemini baslatmak icin bir tusa basiniz...\n";  getch();
						char Hacked1[strlen(parola) + 1];
						char indis = 0;
						cout << "\nKombinasyon: ";
						int Tamsayi = 33;
						while (Hacked1 != parola)
						{
							if (Tamsayi == 255)
							{
								Tamsayi = 33;
							}
							char Karakter = Tamsayi;
							Hacked1[indis] = Karakter;
							cout << Karakter;
							if (Hacked1[indis] != parola[indis])
							{
								cout << "\b";
							}
							else if (Hacked1[indis] == parola[indis])
							{
								if (indis == (strlen(parola) - 1)) //---> Parolanin son harfindeyse
								{
									Hacked1[strlen(parola)] = '\0'; //---> Bir harf sonrasina '\0' koysun
									break;
								}
								else
								{
									Tamsayi = 32;
									indis++;
								}
							}
							Tamsayi++;
							Sleep(10);
						}
						system("color  B1");
						cout << "\n\nParola Tespit Edildi: " << Hacked1 << "\n\n";
						break;
					}
					case '2':
					{
						cout << "\nYapay Zeka: Kelime kelime ayiklama islemini baslatmak icin bir tusa basiniz...\n";   getch();
						char Hacked2[strlen(parola) + 1];
						int tamsayi = 33;
						cout << "\nKombinasyon: ";
						while (tamsayi != 256)
						{
							char a = tamsayi;
							char b = tamsayi;
							char c = tamsayi;
							char d = tamsayi;
							char e = tamsayi;
							char f = tamsayi;
							char g = tamsayi;
							char h = tamsayi;
							char i = tamsayi;
							char j = tamsayi;
							char k = tamsayi;
							char l = tamsayi;
							char m = tamsayi;
							char n = tamsayi;
							char o = tamsayi;
							char p = tamsayi;
							char r = tamsayi;
							char s = tamsayi;
							char t = tamsayi;
							char u = tamsayi;

							for (int say = 0; say < 20; say++)
							{
								if (Hacked2[say] == parola[say])
								{
									if ((say == 0) && (strlen(parola) >= 1))
										a = parola[say];
									if ((say == 1) && (strlen(parola) >= 2))
										b = parola[say];
									if ((say == 2) && (strlen(parola) >= 3))
										c = parola[say];
									if ((say == 3) && (strlen(parola) >= 4))
										d = parola[say];
									if ((say == 4) && (strlen(parola) >= 5))
										e = parola[say];
									if ((say == 5) && (strlen(parola) >= 6))
										f = parola[say];
									if ((say == 6) && (strlen(parola) >= 7))
										g = parola[say];
									if ((say == 7) && (strlen(parola) >= 8))
										h = parola[say];
									if ((say == 8) && (strlen(parola) >= 9))
										i = parola[say];
									if ((say == 9) && (strlen(parola) >= 10))
										j = parola[say];
									if ((say == 10) && (strlen(parola) >= 11))
										k = parola[say];
									if ((say == 11) && (strlen(parola) >= 12))
										l = parola[say];
									if ((say == 12) && (strlen(parola) >= 13))
										m = parola[say];
									if ((say == 13) && (strlen(parola) >= 14))
										n = parola[say];
									if ((say == 14) && (strlen(parola) >= 15))
										o = parola[say];
									if ((say == 15) && (strlen(parola) >= 16))
										p = parola[say];
									if ((say == 16) && (strlen(parola) >= 17))
										r = parola[say];
									if ((say == 17) && (strlen(parola) >= 18))
										s = parola[say];
									if ((say == 18) && (strlen(parola) >= 19))
										t = parola[say];
									if ((say == 19) && (strlen(parola) >= 20))
										u = parola[say];
								}
							}
							if ((strlen(parola) >= 1) && (Hacked2[0] != parola[0]))
								Hacked2[0] = a;
							if ((strlen(parola) >= 2) && (Hacked2[1] != parola[1]))
								Hacked2[1] = b;
							if ((strlen(parola) >= 3) && (Hacked2[2] != parola[2]))
								Hacked2[2] = c;
							if ((strlen(parola) >= 4) && (Hacked2[3] != parola[3]))
								Hacked2[3] = d;
							if ((strlen(parola) >= 5) && (Hacked2[4] != parola[4]))
								Hacked2[4] = e;
							if ((strlen(parola) >= 6) && (Hacked2[5] != parola[5]))
								Hacked2[5] = f;
							if ((strlen(parola) >= 7) && (Hacked2[6] != parola[6]))
								Hacked2[6] = g;
							if ((strlen(parola) >= 8) && (Hacked2[7] != parola[7]))
								Hacked2[7] = h;
							if ((strlen(parola) >= 9) && (Hacked2[8] != parola[8]))
								Hacked2[8] = i;
							if ((strlen(parola) >= 10) && (Hacked2[9] != parola[9]))
								Hacked2[9] = j;
							if ((strlen(parola) >= 11) && (Hacked2[10] != parola[10]))
								Hacked2[10] = k;
							if ((strlen(parola) >= 12) && (Hacked2[11] != parola[11]))
								Hacked2[11] = l;
							if ((strlen(parola) >= 13) && (Hacked2[12] != parola[12]))
								Hacked2[12] = m;
							if ((strlen(parola) >= 14) && (Hacked2[13] != parola[13]))
								Hacked2[13] = n;
							if ((strlen(parola) >= 15) && (Hacked2[14] != parola[14]))
								Hacked2[14] = o;
							if ((strlen(parola) >= 16) && (Hacked2[15] != parola[15]))
								Hacked2[15] = p;
							if ((strlen(parola) >= 17) && (Hacked2[16] != parola[16]))
								Hacked2[16] = r;
							if ((strlen(parola) >= 18) && (Hacked2[17] != parola[17]))
								Hacked2[17] = s;
							if ((strlen(parola) >= 19) && (Hacked2[18] != parola[18]))
								Hacked2[18] = t;
							if ((strlen(parola) >= 20) && (Hacked2[19] != parola[19]))
								Hacked2[19] = u;

							cout << a << b << c << d << e << f << g << h << i << j << k << l << m << n << o << p << r << s << t << u;
							Hacked2[strlen(parola)] = '\0';

							if (Hacked2 != parola)
							{
								cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
							}
							tamsayi++;
							Sleep(20);
						}

						system("color B1");
						cout << "\n\nParola Tespit Edildi: " << Hacked2 << "\n\n";
						break;
					}
					default:
					{
						cout << "\nYapay Zeka: Boyle bir secenek bulunmamaktadir\n";
						cout << "\nYapay Zeka: Parola ayiklama islemi basarisiz oldu\n\n";
						system("color B1");
						break;
					}
					}
				}

			}
			else
			{
				for (int baslangic = 0; baslangic < 20; baslangic++)
				{
					parola[baslangic] = '\0';
				}
				char tus;
				int indis = 0;
				cout << "\nYapay Zeka: En fazla 20 karakter icerebilen bir parola giriniz:\n\n";
				cout << ad << ": ";

				while (1)
				{
					tus = getch();
					if (tus == 13)
						break;
					else if (tus == 32 || tus == 9)
						continue;
					else if (tus == 8)
					{
						if (indis > 0)
						{
							parola[--indis] = ' ';
							cout << "\b \b";
						}
						else
							continue;
					}
					else
					{
						if (indis < 20)
						{
							parola[indis++] = tus;
							cout << "*";
						}
						else
							continue;
					}
				}
				cout << "\n\nYapay Zeka: Parolaniz basariyla kaydedilmistir\n\n";
			}
		}
		else if (soru.find("cmd.exe") <= 100)
		{
			cout << "\nYapay Zeka: Hemen aciyorum... :D\n\n";
			Sleep(2000);
			system("explorer C:\\Windows\\System32\\cmd.exe");
		}
		else if (soru.find("uygulama") <= 100)
		{
			char UygulamaKonumu[200] = "explorer ";
			char KullaniciUygulamaAdresi[200];
			cout << "\nYapay Zeka: Lutfen goruntulemek istediginiz uygulamanin konumunu giriniz:\n\n";
			cout << "           [ORNEK]   C:\\Users\\dell\\Desktop\\HurkanUgur.txt   [ORNEK]\n\n";
			cout << ad << ": ";   gets(KullaniciUygulamaAdresi);
			strcat(UygulamaKonumu, KullaniciUygulamaAdresi);
			fstream UygulamaKontrol(KullaniciUygulamaAdresi, ios::in);
			if (UygulamaKontrol.is_open())
			{
				UygulamaKontrol.close();
				cout << "\nYapay Zeka: Uygulamaniz goruntuleniyor...\n\n";
				system(UygulamaKonumu);
			}
			else
			{
				cout << "\nYapay Zeka: Girdiginiz adreste goruntulenecek uygulama bulunamadi :o\n\n";
			}

		}
		else if ((soru.find("dosya") <= 100 && soru.find("sil") <= 100 && soru.find("ekran") > 100 && soru.find("yazi") > 100) || (soru.find("belge") <= 100 && soru.find("sil") <= 100) || (soru.find("belge") <= 100 && soru.find("kaldir") <= 100))
		{
			if ((soru.find("dosya") <= 100 && soru.find("aktar") <= 100) || (soru.find("dosya") <= 100 && soru.find("tasi") <= 100) || (soru.find("belge") <= 100 && soru.find("aktar") <= 100) || (soru.find("belge") <= 100 && soru.find("tasi") <= 100) || (soru.find("metin") <= 100 && soru.find("aktar") <= 100) || (soru.find("metin") <= 100 && soru.find("tasi") <= 100) || (soru.find("metin") <= 100 && soru.find("olustur") <= 100) || (soru.find("metin") <= 100 && soru.find("yarat") <= 100) || (soru.find("belge") <= 100 && soru.find("olustur") <= 100) || (soru.find("belge") <= 100 && soru.find("yarat") <= 100) || (soru.find("belge") <= 100 && soru.find("kaydet") <= 100) || (soru.find("dosya") <= 100 && soru.find("olustur") <= 100) || (soru.find("metin") <= 100 && soru.find("kaydet") <= 100) || (soru.find("dosya") <= 100 && soru.find("yarat") <= 100) || (soru.find("dosya") <= 100 && soru.find("kaydet") <= 100) || (soru.find("dosya") <= 100 && soru.find("goster") <= 100) || (soru.find("metin") <= 100 && soru.find("goster") <= 100) || (soru.find("belge") <= 100 && soru.find("goster") <= 100) || (soru.find("dosya") <= 100 && soru.find("oku") <= 100) || (soru.find("dosya") <= 100 && soru.find("incele") <= 100) || (soru.find("belge") <= 100 && soru.find("incele") <= 100) || (soru.find("dosya") <= 100 && soru.find("ac") <= 100) || (soru.find("belge") <= 100 && soru.find("ac") <= 100) || (soru.find("metin") <= 100 && soru.find("ac") <= 100) || (soru.find("dosya") <= 100 && soru.find("goruntu") <= 100) || (soru.find("belge") <= 100 && soru.find("goruntu") <= 100) || (soru.find("metin") <= 100 && soru.find("goruntu") <= 100) || (soru.find("belge") <= 100 && soru.find("oku") <= 100) || (soru.find("belge") <= 100 && soru.find("yaz") <= 100) || (soru.find("dosya") <= 100 && soru.find("yaz") <= 100) || (soru.find("metin") <= 100 && soru.find("yaz") <= 100))
			{
				cout << "\nYapay Zeka:     <Hangi islemi yapmami istediginizi malesef anlayamadim>\n\t        <Dosya Yazmak/Dosya Okumak/Dosya Silmek/Dosya Aktarmak>\n\n";
			}
			else
			{
				char Konum1[200];
				cout << "\nYapay Zeka: Lutfen Sileceginiz Dosyanin Konumunu Giriniz:\n\n";
				cout << "           [ORNEK]   C:\\Users\\dell\\Desktop\\HurkanUgur.txt   [ORNEK]\n\n";
				cout << ad << ": ";   gets(Konum1);
				if (KonumSorgu(Konum1) == 1)
				{
					if (strstr(Konum1, "Yapay Zeka"))
					{
						cout << "\nYapay Zeka: Beni yok etmenize izin veremem -_-\n\n";
					}
					else
					{
						fstream sil(Konum1, ios::in);
						if (sil.is_open())
						{
							sil.close();
							cout << "\nYapay Zeka: Dosyaniz siliniyor...\n";
							Sleep(2000);
							remove(Konum1);
							cout << "\nYapay Zeka: Dosyaniz basariyla silinmistir\n\n";
						}
						else
						{
							cout << "\nYapay Zeka: Girdiginiz adreste silinecek dosya bulunamadi :o\n\n";
						}
					}
				}
				else
				{
					cout << "\nYapay Zeka: Konumunuzda C:\\ veya D:\\ belirlenmediginden islem basarisiz oldu\n\n";
				}
			}
		}
		else if ((soru.find("metin") <= 100 && soru.find("olustur") <= 100) || (soru.find("metin") <= 100 && soru.find("yarat") <= 100) || (soru.find("belge") <= 100 && soru.find("olustur") <= 100) || (soru.find("belge") <= 100 && soru.find("yarat") <= 100) || (soru.find("belge") <= 100 && soru.find("kaydet") <= 100) || (soru.find("dosya") <= 100 && soru.find("olustur") <= 100) || (soru.find("metin") <= 100 && soru.find("kaydet") <= 100) || (soru.find("dosya") <= 100 && soru.find("yarat") <= 100) || (soru.find("dosya") <= 100 && soru.find("kaydet") <= 100) || (soru.find("belge") <= 100 && soru.find("yaz") <= 100) || (soru.find("dosya") <= 100 && soru.find("yaz") <= 100) || (soru.find("metin") <= 100 && soru.find("yaz") <= 100))
		{
			if ((soru.find("dosya") <= 100 && soru.find("aktar") <= 100) || (soru.find("dosya") <= 100 && soru.find("tasi") <= 100) || (soru.find("belge") <= 100 && soru.find("aktar") <= 100) || (soru.find("belge") <= 100 && soru.find("tasi") <= 100) || (soru.find("metin") <= 100 && soru.find("aktar") <= 100) || (soru.find("metin") <= 100 && soru.find("tasi") <= 100) || (soru.find("dosya") <= 100 && soru.find("sil") <= 100) || (soru.find("belge") <= 100 && soru.find("sil") <= 100) || (soru.find("belge") <= 100 && soru.find("kaldir") <= 100) || (soru.find("dosya") <= 100 && soru.find("sil") <= 100) || (soru.find("dosya") <= 100 && soru.find("oku") <= 100) || (soru.find("dosya") <= 100 && soru.find("incele") <= 100) || (soru.find("belge") <= 100 && soru.find("incele") <= 100) || (soru.find("dosya") <= 100 && soru.find("goster") <= 100) || (soru.find("metin") <= 100 && soru.find("goster") <= 100) || (soru.find("belge") <= 100 && soru.find("goster") <= 100) || (soru.find("belge") <= 100 && soru.find("oku") <= 100) || (soru.find("dosya") <= 100 && soru.find("ac") <= 100) || (soru.find("belge") <= 100 && soru.find("ac") <= 100) || (soru.find("metin") <= 100 && soru.find("ac") <= 100) || (soru.find("dosya") <= 100 && soru.find("goruntu") <= 100) || (soru.find("belge") <= 100 && soru.find("goruntu") <= 100) || (soru.find("metin") <= 100 && soru.find("goruntu") <= 100))
			{
				cout << "\nYapay Zeka:     <Hangi islemi yapmami istediginizi malesef anlayamadim>\n\t        <Dosya Yazmak/Dosya Okumak/Dosya Silmek/Dosya Aktarmak>\n\n";
			}
			else
			{
				char Konum2[200];
				cout << "\nYapay Zeka: Lutfen Kaydedeceginiz Dosyanin Konumunu Giriniz:\n\n";
				cout << "           [ORNEK]   C:\\Users\\dell\\Desktop\\HurkanUgur.txt   [ORNEK]\n\n";
				cout << ad << ": ";   gets(Konum2);

				if (KonumSorgu(Konum2) == 1)
				{
					fstream kaydet(Konum2, ios::out);
					if (kaydet.is_open())
					{
						string veri;
						cout << "\nYapay Zeka: Lutfen dosyaya kaydetmek istediginiz seyleri yaziniz :\n\n";
						cout << ad << ": ";   getline(cin, veri);
						kaydet << veri;
						cout << "\nYapay Zeka: Dosyaniz kaydediliyor...\n";
						Sleep(2000);
						kaydet.close();
						cout << "\nYapay Zeka: Dosyaniz basariyla kaydedilmistir\n\n";
					}
					else
					{
						cout << "\nYapay Zeka: Dosya kaydetme islemi basarisiz oldu :o\n\n";
					}
				}
				else
				{
					cout << "\nYapay Zeka: Konumunuzda C:\\ veya D:\\ belirlenmediginden islem basarisiz oldu\n\n";
				}
			}
		}
		else if ((soru.find("dosya") <= 100 && soru.find("oku") <= 100) || (soru.find("dosya") <= 100 && soru.find("incele") <= 100) || (soru.find("belge") <= 100 && soru.find("incele") <= 100) || (soru.find("belge") <= 100 && soru.find("oku") <= 100) || (soru.find("dosya") <= 100 && soru.find("ac") <= 100) || (soru.find("belge") <= 100 && soru.find("ac") <= 100) || (soru.find("metin") <= 100 && soru.find("ac") <= 100) || (soru.find("dosya") <= 100 && soru.find("goruntu") <= 100) || (soru.find("belge") <= 100 && soru.find("goruntu") <= 100) || (soru.find("metin") <= 100 && soru.find("goruntu") <= 100) || (soru.find("dosya") <= 100 && soru.find("goster") <= 100) || (soru.find("metin") <= 100 && soru.find("goster") <= 100) || (soru.find("belge") <= 100 && soru.find("goster") <= 100))
		{
			if ((soru.find("dosya") <= 100 && soru.find("aktar") <= 100) || (soru.find("dosya") <= 100 && soru.find("tasi") <= 100) || (soru.find("belge") <= 100 && soru.find("aktar") <= 100) || (soru.find("belge") <= 100 && soru.find("tasi") <= 100) || (soru.find("metin") <= 100 && soru.find("aktar") <= 100) || (soru.find("metin") <= 100 && soru.find("tasi") <= 100) || (soru.find("metin") <= 100 && soru.find("olustur") <= 100) || (soru.find("metin") <= 100 && soru.find("yarat") <= 100) || (soru.find("belge") <= 100 && soru.find("olustur") <= 100) || (soru.find("belge") <= 100 && soru.find("yarat") <= 100) || (soru.find("belge") <= 100 && soru.find("kaydet") <= 100) || (soru.find("dosya") <= 100 && soru.find("olustur") <= 100) || (soru.find("metin") <= 100 && soru.find("kaydet") <= 100) || (soru.find("dosya") <= 100 && soru.find("yarat") <= 100) || (soru.find("dosya") <= 100 && soru.find("kaydet") <= 100) || (soru.find("dosya") <= 100 && soru.find("sil") <= 100) || (soru.find("belge") <= 100 && soru.find("sil") <= 100) || (soru.find("belge") <= 100 && soru.find("kaldir") <= 100) || (soru.find("dosya") <= 100 && soru.find("sil") <= 100) || (soru.find("belge") <= 100 && soru.find("yaz") <= 100) || (soru.find("dosya") <= 100 && soru.find("yaz") <= 100) || (soru.find("metin") <= 100 && soru.find("yaz") <= 100))
			{
				cout << "\nYapay Zeka:     <Hangi islemi yapmami istediginizi malesef anlayamadim>\n\t        <Dosya Yazmak/Dosya Okumak/Dosya Silmek/Dosya Aktarmak>\n\n";
			}
			else
			{
				char Konum3[200];
				cout << "\nYapay Zeka: Lutfen Okuyacaginiz Dosyanin Konumunu Giriniz:\n\n";
				cout << "           [ORNEK]   C:\\Users\\dell\\Desktop\\HurkanUgur.txt   [ORNEK]\n\n";
				cout << ad << ": ";   gets(Konum3);
				if (KonumSorgu(Konum3) == 1)
				{
					FILE *DosyaOku = fopen(Konum3, "r");
					if (DosyaOku != NULL)
					{
						cout << "\nYapay Zeka: Dosyaniz okunuyor...\n\n";
						Sleep(2000);
						cout << "-------------------------------------------------------------------------------\n";
						char veri;
						while (veri != EOF)
						{
							veri = fgetc(DosyaOku);
							cout << veri;
						}
						cout << "\n-------------------------------------------------------------------------------\n";
						fclose(DosyaOku);
						cout << "\nYapay Zeka: Dosya okuma islemi basariyla tamamlandi\n\n";
					}
					else
					{
						cout << "\nYapay Zeka: Girdiginiz adreste okunacak dosya bulunamadi :o\n\n";
					}
				}
				else
				{
					cout << "\nYapay Zeka: Konumunuzda C:\\ veya D:\\ belirlenmediginden islem basarisiz oldu\n\n";
				}
			}
		}
		else if ((soru.find("dosya") <= 100 && soru.find("aktar") <= 100) || (soru.find("dosya") <= 100 && soru.find("tasi") <= 100) || (soru.find("belge") <= 100 && soru.find("aktar") <= 100) || (soru.find("belge") <= 100 && soru.find("tasi") <= 100) || (soru.find("metin") <= 100 && soru.find("aktar") <= 100) || (soru.find("metin") <= 100 && soru.find("tasi") <= 100))
		{
			if (((soru.find("dosya") <= 100 && soru.find("oku") <= 100) || (soru.find("dosya") <= 100 && soru.find("incele") <= 100) || (soru.find("belge") <= 100 && soru.find("incele") <= 100) || (soru.find("belge") <= 100 && soru.find("oku") <= 100) || (soru.find("dosya") <= 100 && soru.find("ac") <= 100) || (soru.find("belge") <= 100 && soru.find("ac") <= 100) || (soru.find("metin") <= 100 && soru.find("ac") <= 100) || (soru.find("dosya") <= 100 && soru.find("goruntu") <= 100) || (soru.find("belge") <= 100 && soru.find("goruntu") <= 100) || (soru.find("metin") <= 100 && soru.find("goruntu") <= 100) || (soru.find("dosya") <= 100 && soru.find("goster") <= 100) || (soru.find("metin") <= 100 && soru.find("goster") <= 100) || (soru.find("belge") <= 100 && soru.find("goster") <= 100) || soru.find("metin") <= 100 && soru.find("olustur") <= 100) || (soru.find("metin") <= 100 && soru.find("yarat") <= 100) || (soru.find("belge") <= 100 && soru.find("olustur") <= 100) || (soru.find("belge") <= 100 && soru.find("yarat") <= 100) || (soru.find("belge") <= 100 && soru.find("kaydet") <= 100) || (soru.find("dosya") <= 100 && soru.find("olustur") <= 100) || (soru.find("metin") <= 100 && soru.find("kaydet") <= 100) || (soru.find("dosya") <= 100 && soru.find("yarat") <= 100) || (soru.find("dosya") <= 100 && soru.find("kaydet") <= 100) || (soru.find("dosya") <= 100 && soru.find("sil") <= 100) || (soru.find("belge") <= 100 && soru.find("sil") <= 100) || (soru.find("belge") <= 100 && soru.find("kaldir") <= 100) || (soru.find("dosya") <= 100 && soru.find("sil") <= 100) || (soru.find("belge") <= 100 && soru.find("yaz") <= 100) || (soru.find("dosya") <= 100 && soru.find("yaz") <= 100) || (soru.find("metin") <= 100 && soru.find("yaz") <= 100))
			{
				cout << "\nYapay Zeka:     <Hangi islemi yapmami istediginizi malesef anlayamadim>\n\t        <Dosya Yazmak/Dosya Okumak/Dosya Silmek/Dosya Aktarmak>\n\n";
			}
			else
			{
				char Konum3[200];
				char Konum4[200];
				cout << "\nYapay Zeka: Lutfen Veri Okuyacaginiz Dosyanin Konumunu Giriniz:\n\n";
				cout << "           [ORNEK]   C:\\Users\\dell\\Desktop\\HurkanUgur.txt   [ORNEK]\n\n";
				cout << ad << ": ";   gets(Konum3);
				cout << "\nYapay Zeka: Lutfen Dosyadan Alinacak Verinin Yazacaginiz Konumunu Giriniz:\n\n";
				cout << "           [ORNEK]   C:\\Users\\dell\\Desktop\\HurkanUgur.txt   [ORNEK]\n\n";
				cout << ad << ": ";   gets(Konum4);
				if (KonumSorgu(Konum3) == 1 && KonumSorgu(Konum4) == 1)
				{
					FILE *DosyaOku = fopen(Konum3, "r");
					FILE *DosyaYaz = fopen(Konum4, "w");
					if (DosyaOku != NULL && DosyaYaz != NULL)
					{
						cout << "\nYapay Zeka: Dosyaniz aktariliyor...\n\n";
						Sleep(1000);
						char veri;
						while (veri != EOF)
						{
							veri = fgetc(DosyaOku);
							putc(veri, DosyaYaz);
						}

						fclose(DosyaYaz);
						fclose(DosyaOku);

						cout << "Yapay Zeka: Dosya aktarim islemi basariyla tamamlandi\n\n";
					}
					else if (DosyaOku == NULL && DosyaYaz != NULL)
					{
						cout << "\nYapay Zeka: Girdiginiz adreste verinin okunacagi dosya bulunamadi :o\n\n";
					}
					else if (DosyaOku != NULL && DosyaYaz == NULL)
					{
						cout << "\nYapay Zeka: Girdiginiz adreste verinin yazilacagi dosya bulunamadi :o\n\n";
					}
					else
					{
						cout << "\nYapay Zeka: Girdiginiz iki adreste de dosya bulunamadi :o\n\n";
					}
				}
				else
				{
					cout << "\nYapay Zeka: Konumlarda C:\\ veya D:\\ belirlenmediginden islem basarisiz oldu\n\n";
				}
			}
		}
		else if (soru.find("ip adres") <= 100)
		{
			cout << "\nYapay Zeka: IP Adresi bilgilerini aliyorum... :D\n\n";
			Sleep(2000);
			if (soru.find("butun") <= 100 || soru.find("tum") <= 100 || soru.find("hepsi") <= 100 || soru.find("tamam") <= 100)
				system("ipconfig /all");
			else
				system("ipconfig");
		}
		else if (soru.find("bilgisayar") <= 100 && soru.find("kapat") <= 100)
		{
			if (soru.find("oturum") <= 100 && soru.find("kapat") <= 100)
			{
				cout << "\nYapay Zeka:     <Hangi islemi yapmami istediginizi malesef anlayamadim>\n\t      <Bilgisayari Kapat/Bilgisayari Yeniden Baslat/Oturumu Kapat>\n\n";
			}
			else if (soru.find("bilgisayar") <= 100 && soru.find("yeniden baslat") <= 100)
			{
				cout << "\nYapay Zeka:     <Hangi islemi yapmami istediginizi malesef anlayamadim>\n\t      <Bilgisayari Kapat/Bilgisayari Yeniden Baslat/Oturumu Kapat>\n\n";
			}
			else
			{
				cout << "\nYapay Zeka: Bilgisayari kapatiyorum... :D\n\n";
				Sleep(3000);
				system("shutdown /s");
			}
		}
		else if (soru.find("bilgisayar") <= 100 && soru.find("yeniden baslat") <= 100)
		{
			if (soru.find("bilgisayar") <= 100 && soru.find("kapat"))
			{
				cout << "\nYapay Zeka:     <Hangi islemi yapmami istediginizi malesef anlayamadim>\n\t      <Bilgisayari Kapat/Bilgisayari Yeniden Baslat/Oturumu Kapat>\n\n";
			}
			else if (soru.find("oturum") <= 100 && soru.find("kapat") <= 100)
			{
				cout << "\nYapay Zeka:     <Hangi islemi yapmami istediginizi malesef anlayamadim>\n\t      <Bilgisayari Kapat/Bilgisayari Yeniden Baslat/Oturumu Kapat>\n\n";
			}
			else
			{
				cout << "\nYapay Zeka: Bilgisayari yeniden baslatiyorum... :D\n\n";
				Sleep(3000);
				system("shutdown /r");
			}
		}
		else if (soru.find("oturum") <= 100 && soru.find("kapat") <= 100)
		{
			if (soru.find("bilgisayar") <= 100 && soru.find("kapat") <= 100)
			{
				cout << "\nYapay Zeka:     <Hangi islemi yapmami istediginizi malesef anlayamadim>\n\t      <Bilgisayari Kapat/Bilgisayari Yeniden Baslat/Oturumu Kapat>\n\n";
			}
			else if (soru.find("bilgisayar") <= 100 && soru.find("yeniden baslat") <= 100)
			{
				cout << "\nYapay Zeka:     <Hangi islemi yapmami istediginizi malesef anlayamadim>\n\t      <Bilgisayari Kapat/Bilgisayari Yeniden Baslat/Oturumu Kapat>\n\n";
			}
			else
			{
				cout << "\nYapay Zeka: Oturumu kapatiyorum... :D\n\n";
				Sleep(3000);
				system("shutdown /l");
			}
		}
		else if (((soru.find("temizle") <= 100 || soru.find("sil") <=100) && soru.find("ekran") <= 100) || (soru.find("temizle") <= 100 && soru.find("yazi") <= 100) || (soru.find("sil") <= 100 && soru.find("yazi") <= 100) || (soru.find("sayfa") <= 100 && soru.find("sil") <= 100) || (soru.find("sayfa") <= 100 && soru.find("temizle") <= 100))
		{
			if ((soru.find("ekran") <= 100 && soru.find("mavi") <= 100) || (soru.find("yazi") <= 100 && soru.find("mavi") <= 100) || soru.find("mavi") <= 100)
			{
				cout << "\nYapay Zeka:     <Hangi islemi yapmami istediginizi malesef anlayamadim>\n\t             <Ekran Rengini Mavi Yapmak/Ekrani Temizlemek>\n\n";
			}
			else if ((soru.find("ekran") <= 100 && soru.find("rengi") <= 100 && soru.find("siyah") <= 100) || (soru.find("yazi") <= 100 && soru.find("rengi") <= 100 && soru.find("siyah") <= 100) || soru.find("siyah") <= 100)
			{
				cout << "\nYapay Zeka:     <Hangi islemi yapmami istediginizi malesef anlayamadim>\n\t             <Ekran Rengini Siyah Yapmak/Ekrani Temizlemek>\n\n";
			}
			else
			{
				cout << "\nYapay Zeka: Hemen temizliyorum... :D\n\n";
				Sleep(2000);
				system("CLS");
			}
		}
		else if (soru.find("gunaydin") <= 100)
			cout << "\nYapay Zeka: Gunaydin " << ad << " :D\n\n";
		else if ((soru.find("ad") <= 100 && soru.find("degis") <= 100) || (soru.find("isim") <= 100 && soru.find("degis") <= 100) || (soru.find("ismi") <= 100 && soru.find("degis") <= 100))
		{
			cout << "\nYapay Zeka: Adinizi ne olarak degistirmek istiyorsunuz ?\n\n";
			cout << ad << ": ";   getline(cin, ad);
			cout << "\nYapay Zeka: Adiniz degistiriliyor... \n";
			Sleep(2000);
			cout << "\nYapay Zeka: Yeni adiniz hayirli olsun " << ad << " :D\n\n";
		}

		else if ((soru.find("yas") <= 100 && soru.find("var") <= 100) || (soru.find("hangi tarihte dogdun") <= 100) || (soru.find("ne zaman dogdun") <= 100) || (soru.find("dogdun") <= 100) || (soru.find("dogum gun") <= 100) || (soru.find("kac yasindasin") <= 100) || soru.find("kac yasindasiniz") <= 100 || soru.find("yasin kac") <= 100 || soru.find("yasiniz kac") <= 100 || soru.find("yas kac") <= 100 || soru.find("yasini soyler misin") <= 100 || soru.find("yasinizi soyler misiniz") <= 100 || soru.find("yasinizi soyler misin") <= 100)
			cout << "\nYapay Zeka: 27/03/2017 tarihinde dogdum :D\n\n";

		else if (soru.find("ailen") <= 100 || soru.find("aileniz") <= 100 || soru.find("annen") <= 100 || soru.find("anneniz") <= 100 || soru.find("baban") <= 100 || soru.find("babaniz") <= 100 || soru.find("kardesin ") <= 100 || (soru.find("kardesiniz") <= 100 && soru.find("kardessin") <= 100))
			cout << "\nYapay Zeka: Tek bildigim ailem Hurkan'dir\n\n";
		else if ((soru.find("hurkan") <= 100 && soru.find("kim") <= 100) || (soru.find("hurkan") <= 100 && soru.find("ne") <= 100))
			cout << "\nYapay Zeka: Benim yaraticim :D\n\n";
		else if ((soru.find("noldu") <= 100) || (soru.find("niye") <= 100) || (soru.find("neden") <= 100) || (soru.find("hayrola") <= 100) || (soru.find("bir sey mi oldu") <= 100) || (soru.find("bisi mi oldu") <= 100))
			class Noldu Cevap;
		else if ((soru.find("hesap makinesi") <= 100))
		{
			cout << "\nYapay Zeka: Hemen aciyorum... :D\n\n";
			Sleep(2000);
			system("calc.exe");
		}
		else if (soru.find("bay bay") <= 100 || soru.find("bb") <= 100 || soru.find("bye bye") <= 100 || soru.find("gorusuruz") <= 100 || soru.find("allaha emanet") <= 100 || soru.find("saglicakla kal") <= 100 || soru.find("hoscakal") <= 100)
		{
			cout << "\nYapay Zeka: Gorusuruz :D\n\n";
			Sleep(3000);
			return 0;
		}
		else if (soru.find("haha") <= 100)
			cout << "\nYapay Zeka: :D :D :D\n\n";
		else if ((soru.find("tarih") <= 100) || (soru.find("takvim") <= 100) || (soru.find("saat") <= 100))
		{
			struct tm *zaman;
			time_t saat;
			saat = time(NULL);
			zaman = localtime(&saat);

			char tarih[100];
			strftime(tarih, 100, "\nYapay Zeka: Tarih=> %d/%m/%Y  ve  Saat=> %H:%M:%S\n\n", zaman);
			cout << tarih;
		}

		else if ((soru.find("paint") <= 100))
		{
			cout << "\nYapay Zeka: Hemen aciyorum... :D\n\n";
			Sleep(2000);
			system("mspaint.exe");
		}
		else if ((soru.find("ekran") <= 100 && soru.find("mavi") <= 100) || (soru.find("yazi") <= 100 && soru.find("mavi") <= 100))
		{
			if ((soru.find("ekran") <= 100 && soru.find("temizle") <= 100) || (soru.find("yazi") <= 100 && soru.find("temizle") <= 100))
				cout << "\nYapay Zeka:     <Hangi islemi yapmami istediginizi malesef anlayamadim>\n\t             <Ekran Rengini Mavi Yapmak/Ekrani Temizlemek>\n\n";
			else
			{
				cout << "\nYapay Zeka: Rengi mavi yapiyorum :D\n\n";
				Sleep(2000);
				system("color B1");
			}
		}
		else if ((soru.find("ekran") <= 100 && soru.find("siyah") <= 100) || (soru.find("yazi") <= 100 && soru.find("siyah") <= 100))
		{
			if ((soru.find("ekran") <= 100 && soru.find("temizle") <= 100) || (soru.find("yazi") <= 100 && soru.find("temizle") <= 100))
				cout << "\nYapay Zeka:     <Hangi islemi yapmami istediginizi malesef anlayamadim>\n\t             <Ekran Rengini Siyah Yapmak/Ekrani Temizlemek>\n\n";
			else
			{
				cout << "\nYapay Zeka: Rengi siyah yapiyorum :D\n\n";
				Sleep(2000);
				system("color 0A");
			}
		}
		else if ((soru.find("c++") <= 100 && soru.find("kod") <= 100))
		{
			system("color 0A");
			ofstream KodYaz("C++.txt");
			if (KodYaz.is_open())
			{
				system("cls");
				KodYaz << "#include <iostream>\n#include <cstdio>\n#include <cstdlib>\n#include <cstring>\n#include <string>\n#include <cmath>\n#include <ctime>\n#include <conio.h>\n#include <unistd.h>\n#include <windows.h>\n#include <cctype>\n#include <fstream>\n#include <algorithm>\n#include <vector>\n#include <deque>\n\nusing namespace std;\n\nint main()\n{\n";
				cout << "           Kodlama isleminiz bitince en son satira \"kaydet\" yaziniz\n";
				Sleep(3000);
				cout << "--------------------------------------------------------------------------------\n";
				cout << "#include <iostream>\n#include <cstdio>\n#include <cstdlib>\n#include <cstring>\n#include <string>\n#include <cmath>\n#include <ctime>\n#include <conio.h>\n#include <unistd.h>\n#include <windows.h>\n#include <cctype>\n#include <fstream>\n#include <algorithm>\n#include <vector>\n#include <deque>\n\nusing namespace std;\n\nint main()\n{\n";
				string KontrolCpp;

				while (1)
				{
					cout << "   ";
					getline(cin, KontrolCpp);

					if (KontrolCpp.find("kaydet") <= 1000)
						break;
					else
						KodYaz << "   " << KontrolCpp;

					KodYaz << "\n";
				}
				cout << "\n\n   char end;\n   cin >> end;\n   return 0;\n}\n\n";
				KodYaz << "\n\n   char end;\n   cin >> end;\n   return 0;\n}";
				cout << "--------------------------------------------------------------------------------\n";
				cout << "Yapay Zeka: Kodunuz basariyla yazilmistir\n\n";
				KodYaz.close();
				Sleep(2000);
				system("explorer C++.txt");
				system("color B1");
			}
			else
				cout << "\nYapay Zeka: C++ Metin Belgesi Bulunamadi\n\n";
		}
		else if ((soru.find("c++") <= 100 && soru.find("ogre") <= 100))
		{
			system("color 0A");
			bool Dongu = true;
			while (Dongu == true)
			{
				system("cls");
				cout << "\t\t\t   *  S E C E N E K L E R  *\n\t\t\t   -------------------------\n\t\t\t 1        Metin Yazmak       1\n\t\t\t -----------------------------\n\t\t       2    Kullanicidan Veri Almak    2\n\t\t       ---------------------------------\n\t\t     3         If-Else Kullanimi         3\n\t\t     -------------------------------------\n\t\t   4                 Cikis                 4\n\t\t   -----------------------------------------\n\n";

				cout << "\n                                  >>> [ ] <<<\b\b\b\b\b\b";
				char secim = getche();
				cout << "] <<<\n\n";
				switch (secim)
				{
				case '1':
				{
					string metin;
					cout << "\nYapay Zeka: Ne yazacaginizi giriniz:\n\n";
					cout << ad << ": ";   getline(cin, metin);
					cout << "\n\nCikti\n-----\n   cout <<\"" << metin << "\"" << "<< endl;\n\n\n";
					cout << "Yapay Zeka: ";
					system("pause");
					break;
				}
				case '2':
				{
					string KodDegiskenAdi;
					string KodVeritipiAdi;
				Here:
					cout << "\nYapay Zeka: Kullanicidan alacaginiz verinin turunu belirleyiniz:\n\n";
					cout << ad << ": "; getline(cin, KodVeritipiAdi);

					for (int i = 0; KodVeritipiAdi[i] != '\0'; i++)
						KodVeritipiAdi[i] = tolower(KodVeritipiAdi[i]);

					if ((KodVeritipiAdi == "char") || (KodVeritipiAdi == "int") || (KodVeritipiAdi == "short") || (KodVeritipiAdi == "long") || (KodVeritipiAdi == "unsigned char") || (KodVeritipiAdi == "unsigned int") || (KodVeritipiAdi == "unsigned long") || (KodVeritipiAdi == "unsigned short") || (KodVeritipiAdi == "string") || (KodVeritipiAdi == "bool") || (KodVeritipiAdi == "float") || (KodVeritipiAdi == "double"))
					{
						cout << "\nYapay Zeka: Kullanicidan alacaginiz veriyi tutacaginiz degiskenin adini giriniz:\n";
						cout << ad << ": ";   getline(cin, KodDegiskenAdi);
						cout << "\n\nCikti\n-----\n";

						if (KodVeritipiAdi == "char")
							cout << "   " << KodVeritipiAdi << " " << KodDegiskenAdi << "[size]" << ";\n";
						else
							cout << "   " << KodVeritipiAdi << " " << KodDegiskenAdi << ";\n";

						cout << "   cin >> " << KodDegiskenAdi << ";\n\n\n";
						cout << "Yapay Zeka: ";
						system("pause");
						break;
					}
					else
					{
						cout << "\nYapay Zeka: Boyle bir veritipi bulunmamaktadir\n";
						goto Here;
						break;
					}


				}
				case '3':
				{
					string Kosul1;
					string Uygula1;
					string Kosul2;
					string Uygula2;
					string Uygula3;
					cout << "\nYapay Zeka: Bir kosul belirtiniz:\n\n";
					cout << ad << ": ";   getline(cin, Kosul1);
					cout << "\nYapay Zeka: Bu kosul saglanirsa uygulanacak islemi giriniz:\n\n";
					cout << ad << ": ";   getline(cin, Uygula1);

					cout << "\nYapay Zeka: Baska bir kosul belirtiniz:\n\n";
					cout << ad << ": ";   getline(cin, Kosul2);
					cout << "\nYapay Zeka: Bu kosul saglanirsa uygulanacak islemi giriniz:\n\n";
					cout << ad << ": ";   getline(cin, Uygula2);

					cout << "\nYapay Zeka: Hicbir kosul saglanmazsa uygulanacak islemi giriniz:\n\n";
					cout << ad << ": ";   getline(cin, Uygula3);

					cout << "\n\nCikti\n-----\n";
					cout << "   if(" << Kosul1 << ")\n   {\n      " << Uygula1 << "\n   }\n   else if(" << Kosul2 << ")\n   {\n      " << Uygula2 << "\n   }\n   else\n   {\n      " << Uygula3 << "\n   }\n\n\n";
					cout << "Yapay Zeka: ";
					system("pause");
					break;
				}
				case '4':
				{
					Dongu = false;
					cout << "\nYapay Zeka: C++ egitiminden basariyla ciktiniz\n\n";
					system("color B1");
					break;
				}
				default:
				{
					cout << "\nYapay Zeka: Boyle bir tercih secenegi bulunmamaktadir\n";
					cout << "\nYapay Zeka: ";
					system("pause");
					break;
				}
				}

			}
		}
		else
		{
			if ((soru.find(135) <= 100) || (soru.find(128) <= 100) || (soru.find(152) <= 100) || (soru.find(153) <= 100) || (soru.find(154) <= 100) || (soru.find(158) <= 100) || (soru.find(166) <= 100) || (soru.find(167) <= 100) || (soru.find(141) <= 100) || (soru.find(159) <= 100) || (soru.find(148) <= 100) || (soru.find(129) <= 100))
				cout << "\nYapay Zeka: Turkce karakterleri anlayamiyorum :D\n\n";
			else
				cout << "\nYapay Zeka: Dediginizi anlayamadim :D\n\n";
		}
	}
	getch();
	return 0;
}
