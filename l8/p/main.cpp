#include "StudentAC.h"
#include "StudentMaster.h"

int main()
{
	PersoanaAC p1("1234567890123", "Ana", "Iasi");
	p1.afisareProfil();
	StudentAC s2;
	s2.afisareProfil();
	StudentAC s1("1234567890122", "Ion", "Vaslui", 2, 10);
	s1.schimbareAdresa("Bucuresti");
	s1.inscriereAnStudiu(3);
	s1.afisareProfil();


	StudentMaster StM1("685256959", "Remus", "Iasi", 4, 8, "Lucrare disertatie");
	StudentMaster StM2("562387459", "Monica", "Neamt", 2, 5, "Lucrare disertatie");
	StudentMaster StM3("642339536", "Elena", "Cluj", 2, 8, "Lucrare disertatie");
	StudentMaster StM4("897564236", "Cosmin", "Satu Mare", 3, 10, "Lucrare disertatie");
	StudentMaster StM5("457824695", "Faustina", "Brasov",2, 9, "Lucrare disertatie");

	StudentMaster StMvect[7] = { StM1,StM2,StM3,StM4,StM5 };

	StudentAC stNotaMax = StMvect[1];
	for (int i = 0; i <= 4; i++)
	{
		stNotaMax = *(stNotaMax.compararaNote(StMvect[i]));
	}
	stNotaMax.afisareProfil();

	system("PAUSE");

	return 0;
}