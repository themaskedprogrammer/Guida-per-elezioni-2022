#include <stdio.h>

int main(void) {

  int num1;
  int num2;

  printf("\n 1. Centrodestra");
  printf("\n 2. Centrosinistra");
  printf("\n 3. Centristi");
  printf("\n 4. Antisistema");
  printf("\n ");
  printf("\n Inserire numero orientamento politico: ");
  scanf("%d",&num1);

  if (num1 == 1)
  {
    printf("\n 1. Lega");
    printf("\n 2. Forza Italia");
    printf("\n 3. Fratelli d'Italia");
    printf("\n ");
    printf("\n Inserire numero partito per sapere informazioni: ");
    scanf("%d",&num2);
    if (num2 == 1)
    {
      printf("\n Lega \n");
      printf("\n Porti chiusi = Pro");
      printf("\n Adozioni gay = Contro");
      printf("\n Ius Scholae = Contro");
      printf("\n Nucleare = Pro");
      printf("\n Reddito di cittadinanza = Da riformare");
      printf("\n Eutanasia = Contro");
      printf("\n Aborto = Contro");
      printf("\n Legalizzazione della cannabis = Contro");
      printf("\n Salario minimo = Contro");
      printf("\n Uscire da UE = Contro");
      printf("\n Uscire da NATO = Contro");
      printf("\n ");
      printf("\n https://www.money.it/Programma-Lega-elezioni-politiche-2022-proposte-Salvini");
    }
    else
      if (num2 == 2)
      {  
      printf("\n Forza Italia \n");
      printf("\n Porti chiusi = Pro");
      printf("\n Adozioni gay = Contro");
      printf("\n Ius Scholae = Con condizioni");
      printf("\n Nucleare = Pro");
      printf("\n Reddito di cittadinanza = Da riformare");
      printf("\n Eutanasia = Non si sa");
      printf("\n Aborto = Contro");
      printf("\n Legalizzazione della cannabis = Contro");
      printf("\n Salario minimo = Contro");
      printf("\n Uscire da UE = Contro");
      printf("\n Uscire da NATO = Contro");
      printf("\n ");
      printf("\n Programma del partito: https://www.money.it/Programma-Forza-Italia-elezioni-2022-proposte-Berlusconi");
      }
      else
        if (num2 == 3)
        {  
      printf("\n Fratelli d'Italia \n");
      printf("\n Porti chiusi = Pro");
      printf("\n Adozioni gay = Contro");
      printf("\n Ius Scholae = Contro");
      printf("\n Nucleare = Pro");
      printf("\n Reddito di cittadinanza = Contro");
      printf("\n Eutanasia = Contro");
      printf("\n Aborto = Pro");
      printf("\n Legalizzazione della cannabis = Contro");
      printf("\n Salario minimo = Contro");
      printf("\n Uscire da UE = Contro");
      printf("\n Uscire da NATO = Contro");
      printf("\n ");
      printf("\n Programma del partito: https://www.money.it/Programma-meloni-fratelli-d-italia-elezioni-2022-pdf");
      }
  }
  else
    if (num1 == 2)
  {
    printf("\n 1. PD");
    printf("\n 2. Alleanza Verdi Sinistra");
    printf("\n 3. +Europa");
    printf("\n 4. Impegno civico");
    printf("\n 5. Unione popolare");
    printf("\n ");
    printf("\n Inserire numero partito per sapere informazioni: ");
    scanf("%d",&num2);
    if (num2 == 1)
    {
      printf("\n PD \n");
      printf("\n Porti chiusi = Contro");
      printf("\n Adozioni gay = Pro");
      printf("\n Ius Scholae = Pro");
      printf("\n Nucleare = Contro");
      printf("\n Reddito di cittadinanza = Pro");
      printf("\n Eutanasia = Pro");
      printf("\n Aborto = Pro");
      printf("\n Legalizzazione della cannabis = Pro");
      printf("\n Salario minimo = Pro");
      printf("\n Uscire da UE = Contro");
      printf("\n Uscire da NATO = Contro");
      printf("\n ");
      printf("\n Programma del partito: https://www.money.it/programma-elettorale-pd-elezioni-politiche-2022");
    }
    else
      if (num2 == 2)
      {  
      printf("\n Alleanza Verdi Sinistra \n");
      printf("\n Porti chiusi = Contro");
      printf("\n Adozioni gay = Pro");
      printf("\n Ius Scholae = Pro");
      printf("\n Nucleare = Contro");
      printf("\n Reddito di cittadinanza = Pro");
      printf("\n Eutanasia = Pro");
      printf("\n Aborto = Pro");
      printf("\n Legalizzazione della cannabis = Pro");
      printf("\n Salario minimo = Pro");
      printf("\n Uscire da UE = Contro");
      printf("\n Uscire da NATO = Contro");
      printf("\n ");
      printf("\n Programma del partito: https://www.money.it/programma-elettorale-verdi-sinistra-italiana-elezioni-2022");
      }
      else
        if (num2 == 3)
      {  
      printf("\n +Europa \n");
      printf("\n Porti chiusi = Contro");
      printf("\n Adozioni gay = Pro");
      printf("\n Ius Scholae = Pro");
      printf("\n Nucleare = Non si sa");
      printf("\n Reddito di cittadinanza = Da riformare");
      printf("\n Eutanasia = Pro");
      printf("\n Aborto = Pro");
      printf("\n Legalizzazione della cannabis = Pro");
      printf("\n Salario minimo = Pro");
      printf("\n Uscire da UE = Contro");
      printf("\n Uscire da NATO = Contro");
      printf("\n ");
      printf("\n Programma del partito: https://www.money.it/programma-elettorale-piu-europa-elezioni-politiche-2022");
      }
	  else
        if (num2 == 4)
      {
          printf("\n Impegno civico \n");
          printf("\n Porti chiusi = Contro");
          printf("\n Adozioni gay = Pro");
          printf("\n Ius Scholae = Pro");
          printf("\n Nucleare = Non si sa");
          printf("\n Reddito di cittadinanza = Da riformare");
          printf("\n Eutanasia = Pro");
          printf("\n Aborto = Pro");
          printf("\n Legalizzazione della cannabis = Non si sa");
          printf("\n Salario minimo = Pro");
          printf("\n Uscire da UE = Contro");
          printf("\n Uscire da NATO = Contro");
          printf("\n ");
          printf("\n Programma del partito: https://www.money.it/Impegno-Civico-programma-elettorale-elzioni-2022-Di-Maio");
        }
        else
        if (num2 == 5)
        {
          printf("\n Unione popolare \n");
          printf("\n Porti chiusi = Contro");
          printf("\n Adozioni gay = Pro");
          printf("\n Ius Scholae = Pro");
          printf("\n Nucleare = Contro");
          printf("\n Reddito di cittadinanza = Pro");
          printf("\n Eutanasia = Pro");
          printf("\n Aborto = Pro");
          printf("\n Legalizzazione della cannabis = Pro");
          printf("\n Salario minimo = Pro");
          printf("\n Uscire da UE = Contro");
          printf("\n Uscire da NATO = Contro");
          printf("\n ");
          printf("\n Programma del partito: https://www.money.it/Programma-elettorale-Unione-Popolare-elezioni-politiche-2022-De-Magistris");
        }
    }
        else
        if (num1 == 3)
        {
          printf("\n 1. Azione - Italia viva");
          printf("\n 2. Movimento 5 stelle");
          printf("\n 3. Noi moderati");
          printf("\n ");
          printf("\n Inserire numero partito per sapere informazioni: ");
          scanf("%d",&num2);
          if (num2 == 1)
          {
            printf("\n Azione - Italia viva \n");
            printf("\n Porti chiusi = Contro");
            printf("\n Adozioni gay = Pro");
            printf("\n Ius Scholae = Pro");
            printf("\n Nucleare = Pro");
            printf("\n Reddito di cittadinanza = Da riformare");
            printf("\n Eutanasia = Pro");
            printf("\n Aborto = Pro");
            printf("\n Legalizzazione della cannabis = Non si sa");
            printf("\n Salario minimo = Pro");
            printf("\n Uscire da UE = Contro");
            printf("\n Uscire da NATO = Contro");
            printf("\n ");
            printf("\n Programma del partito: https://www.money.it/Programma-Calenda-Renzi-elezioni-2022-Azione-Italia-Viva");
          }
          else
          if (num2 == 2)
          {
            printf("\n Movimento 5 stelle \n");
            printf("\n Porti chiusi = Contro");
            printf("\n Adozioni gay = Pro");
            printf("\n Ius Scholae = Pro");
            printf("\n Nucleare = Contro");
            printf("\n Reddito di cittadinanza = Pro");
            printf("\n Eutanasia = Pro");
            printf("\n Aborto = Pro");
            printf("\n Legalizzazione della cannabis = Non si sa");
            printf("\n Salario minimo = Pro");
            printf("\n Uscire da UE = Contro");
            printf("\n Uscire da NATO = Contro");
            printf("\n ");
            printf("\n Programma del partito: https://www.money.it/Movimento-5-Stelle-programma-elettorale-elezioni-politiche");
          }
          else
          if (num2 == 3)
          {
            printf("\n Noi moderati \n");
            printf("\n Porti chiusi = Non si sa");
            printf("\n Adozioni gay = Non si sa");
            printf("\n Ius Scholae = Con condizioni");
            printf("\n Nucleare = Pro");
            printf("\n Reddito di cittadinanza = Non si sa");
            printf("\n Eutanasia = Contro");
            printf("\n Aborto = Pro");
            printf("\n Legalizzazione della cannabis = Contro");
            printf("\n Salario minimo = Non si sa");
            printf("\n Uscire da UE = Contro");
            printf("\n Uscire da NATO = Contro");
            printf("\n ");
            printf("\n Programma del partito: https://www.money.it/noi-moderati-programma-elettorale-elezioni-politiche-2022");
          }
        }
        else
        if (num1 == 4)
        {
          printf("\n 1. Italexit");
          printf("\n 2. Italia sovrana e popolare");
          printf("\n ");
          printf("\n Inserire numero partito per sapere informazioni: ");
          scanf("%d",&num2);
          if (num2 == 1)
          {
            printf("\n Italexit \n");
            printf("\n Porti chiusi = Non si sa");
            printf("\n Adozioni gay = Non si sa");
            printf("\n Ius Scholae = Non si sa");
            printf("\n Nucleare = Pro");
            printf("\n Reddito di cittadinanza = Non si sa");
            printf("\n Eutanasia = Non si sa");
            printf("\n Aborto = Non si sa");
            printf("\n Legalizzazione della cannabis = Non si sa");
            printf("\n Salario minimo = Pro");
            printf("\n Uscire da UE = Pro");
            printf("\n Uscire da NATO = Pro");
            printf("\n ");
            printf("\n Programma del partito: https://www.money.it/Programma-Italexit-elezioni-2022-proposte-Paragone");
          }
          else
          if (num2 == 2)
          {
            printf("\n Italia sovrana e popolare \n");
            printf("\n Porti chiusi = Non si sa");
            printf("\n Adozioni gay = Non si sa");
            printf("\n Ius Scholae = Non si sa");
            printf("\n Nucleare = Pro");
            printf("\n Reddito di cittadinanza = Non si sa");
            printf("\n Eutanasia = Non si sa");
            printf("\n Aborto = Non si sa");
            printf("\n Legalizzazione della cannabis = Non si sa");
            printf("\n Salario minimo = Pro");
            printf("\n Uscire da UE = Pro");
            printf("\n Uscire da NATO = Pro");
            printf("\n ");
            printf("\n Programma del partito: https://www.money.it/Programma-elettorale-Italia-Sovrana-Popolare-Rizzo-elezioni-2022");
          }
        }
	return 0;
}


