//#include <iostream>
//using namespace std;
//
//class Student
//{
//public:
//	//char nume[40];
//	char nume[40];
//private:
//	int matricol;
//protected:
//	float medie;
//public:
//
//	Student()
//	{
//		strcpy_s(nume, "Anonim");
//		matricol = 0;
//		medie = 0;
//		cout << "S-a apelat constructorul implicit" << endl;
//	}
//
//	Student(const char* n, int nr, float m)
//	{
//		strcpy_s(nume, n);
//		matricol = nr;
//		medie = m;
//		cout << "S-a apelat constructorul cu parametri" << endl;
//	}
//
//	// varianta in care contopim cei 2 constructori de mai sus
//	/*Student(const char* n, int nr, float m) : matricol(nr), medie(m)
//	{
//		strcpy_s(nume, n);
//		cout << "S-a apelat constructorul hibrid " << endl;
//	}*/
//
//	// constructorul de copiere
//	Student(const Student& s)
//	{
//		strcpy_s(this->nume, s.nume);
//		this->matricol = s.matricol;
//		this->medie = s.medie;
//		cout << "S-a apelat constructorul de copiere " << endl;
//	}
//
//	//DESTRUCTORUL
//	~Student()
//	{
//		cout << "S-a apelat destructorul " << endl;
//	}
//
//	void init(const char* n = "Anonim", int nr = 0, float m = 0)
//	{
//		strcpy_s(nume, n);
//		matricol = nr;
//		medie = m;
//	}
//
//	char* returneaza_nume()
//	{
//		return this->nume;
//	}
//
//	void modifica_nume(char* n)
//	{
//		strcpy_s(this->nume, n);
//	}
//
//	float get_medie()
//	{
//		if (this->medie > 9)
//		{
//			return this->medie;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//
//	void set_medie(float m)
//	{
//		this->medie = m;
//	}
//
//
//	void afiseaza_adresa();
//};
//
//void Student::afiseaza_adresa()
//{
//	cout << "Adresa obiectului curent este: " << this << endl; // prin this aici luam adresa
//}
//
//void main()
//{
//	Student s1;
//	Student s2("Andrei", 123, 10);
//	//s.init("Andrei", 123, 5);
//	cout << s1.nume<< endl; // afiseaza anonim
//	// s.afiseaza_adresa();
//	cout << s2.get_medie() << endl; // afiseaza 10
//
//	// pt a apela constructorul de copiere
//	//Student s3 = s2; // putem apela si asa
//	Student s3(s2); // putem apela si asa
//
//
//
//
//
//}
