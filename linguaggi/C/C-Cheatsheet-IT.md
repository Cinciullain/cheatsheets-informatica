# C Cheatsheet
**Download PDF: [WIP]()**

## [Esercizi](linguaggi/C/Esercizi/EserciziC.md)

## Indice dei Contenuti

- [Setup Ambiente di Sviluppo](#setup-ambiente-di-sviluppo)
- [Tipi Primitivi](#tipi-primitivi)
- [Operatori](#operatori)
  - [Aritmecici]()
  - [Logici e Relazionali]()
  - [Bit a Bit]()
- [Strutture di Controllo di Flusso](#strutture-di-controllo-di-flusso)
- [Funzioni](#funzioni)
  - [Ricorsione](#ricorsione)
- [Array](#array)
- [Puntatori](#puntatori)
- [Stringhe](#stringhe)
- [Strutture](#strutture)
- [Gestione dei File](#gestione-dei-file)
- [Allocazione Dinamica della Memoria](#allocazione-dinamica-della-memoria)
- [Formattazione del Testo](#formattazione-del-testo)
  - [Identificatori di Formato](#identificatori-di-formato)
  - [Sequenze di Escape](#sequenze-di-escape)
- [Q & A](#q--a)
- [Extra](#extra)

---

### Setup Ambiente di Sviluppo
Per poter eseguire codice in C è necessario un compilatore, così da poter eseguire e testare il codice.

- **Linux e MacOS:** serve eseguire alcuni comandi da terminale:
  - Installiamo i package fondamentali
    ```
    $ sudo apt-get install build essential
    ```
    
  - Installiamo il gcc, che compila ed esegue il codice
    ```
    % sudo apt install gcc
    ```

Aprendo il terminale nella cartella dove è presente il file .c ed eseguendo il seguente comando, si compila
            ```
            $ gcc -o output.o file.c
            ```.
            
Una volta compilato, proviamo il risultato con: ``` $ ./output.o```

- **Windows:** ha la necessità di installare alcuni packages, consiglio questa [guida](https://www.ics.uci.edu/~pattis/common/handouts/mingweclipse/mingw.html).

**NB:** Ogni OS compila in modo differente, quindi un codice compilato ed eseguito su Linux, può avere risultati differenti su MacOS e Windows.

Per approfondire il processo di compilazione ed esecuzione dei programmi in C, consiglio questo [libro](https://www.linuxlinks.com/wp-content/uploads/2019/07/An_Introduction_to_GCC-Brian_Gough.pdf).

---

### Tipi Primitivi

**char** - Memorizza un singolo carattere. Dimensione: 1 byte

```c
//Esempio di definizione
char variabile = 'a';
```

**int** - Memorizza un valore intero. Dimensione: 4 bytes

```c
//Esempio di definizione
int massimo = 2147483647;
int minimo = -2147483648;
```

**short** - Come un int, ma più piccolo. Dimensione: 2 bytes

```c
//Esempio di definizione
short massimo = 32767;
short minimo = -32768;
```

**float** - Memorizza un valore in virgola mobile con una precisione fino a 6 cifre. Dimensione: 4 bytes

```c
//Esempio di definizione
float lunghezza = 5.8;
```

**double** - Un float, ma più grande, con precisione fino a 14 cifre. Dimensione: 8 bytes.

```c
//Esempio di definizione
double variabile = 12.1531452;
```

**void** - Rappresente il tipo vuoto.

```c
//Esempio di definizione
void main(){
    //Non restituisce nulla.
}
```

---

### Operatori

#### Operatori Aritmetici

| Operatori | Esempio     | Significato        |
| --------- | :---------: | ------------------ |
| +         | a + b       | Addizione          |
| ++        | a++ o ++a   | Incrementa di 1    |
| -         | a - b       | Sottrazione        |
| --        | a-- o --a   | Decrementa di 1    |
| *         | a * b       | Moltiplicazione    |
| /         | a / b       | Divisione          |
| %         | a % b       | Modulo             |

#### Operatori Logici e Relazionali

| Operatori | Esempio     | Significato        |
| --------- | :---------: | ------------------ |
| <         | a < b       | Minore di          |
| <=        | a <= b      | Minore o uguale    |
| >         | a > b       | Maggiore di        |
| >=        | a >= b      | Maggiore o uguale  |
| &&        | a && b      | AND logico         |
| &#124;&#124; | a &#124;&#124; b | OR logico  |
| !            | a ! b o !a       | NOT logico |

#### Operatori Bit a Bit

| Operatori | Esempio     | Significato        |
| --------- | :---------: | ------------------ |
| <<        |             | Shift a sinistra   |
| >>        |             | Shift a destra     |
| &         | a & b       | AND                |
| ^         | a ^ b       | XOR                |
| &#124;    | a &#124; b  | OR                 | 
| ~         | ~ (a)       | C1                 |

---

### Strutture di Controllo di Flusso
In informatica le strutture di controllo sono dei costrutti per la gestione del flusso di esecuzione. In C, come in altri linguaggi, abbiamo le 5 principali, spiegate di seguito.

#### if-else
È un costutto base fondamentale, fondato sulle parole chiave *if* ed *else*, utilizzabili
singolarmente, annidati, o consecutivamente.

```c
if(condzione)
{
    ...
}
else if(altra_condizione)
{
    ...   
}
//Viene eseguito solo se i controlli precedenti non vengono attivati
else
{
    ...    
}
```

#### switch
Lo switch-case viene utilizzata come alernativa di utilizzo agli if-else, così da avere un codice
più ordinato e più facilmente manutentibile, oltre ad offrire in più il *default* case.

```c
switch(espressione)
{
    case decisione1:
        ...
        //Il break termina il pezzo di codice e di conseguenza lo switch
        break; 
        
    case decisione2:
        ...
        break;
    .
    .
    .
    case decisioneN:
        ...
        break;
        
    /*
    Il default è l'ultimo caso di uno switch, il blocco di codice al suo interno
    viene eseguito se nessuno dei casi precedenti è stato attivato.
    */
    default:
        //codice
}
```

#### while
Il while è una struttura di tipo iterativa, che svolge il codice finché la condizione viene rispettata.

```c
while(condizione)
{
    ...
}
```

#### do-while
Il do-while a differenza del while, svolge il codice al suo interno almeno una volta,
poi verrà ripetuto solo finché la condizione sarà rispettata.
```c
do
{
    ...
}
while(codizione);
```

#### for
Il ciclo for è indicato quando il modo più naturale per esprimere la condizione di permanenza 
in un ciclo consiste nello specificare quante volte debbano essere ripetuti l'istruzione o il blocco controllati dal ciclo.

```c
for(int i = 0; i < contatore; i++)
{
    ...
}
```

---

### Funzioni
Le funzioni sono utilizzate per dividere il codice ed evitare la ripetitività, rendendolo più facilmente mantenibile e modificabile, oltre a renderlo più ordinato.

```c
tipo_restituito nome_funzione(tipo_parametro nome_parametro)
{
    ...
    return risultato;
}
```

Un esempio può essere una funzione di addizione:

```c
int addizzione(int a, int b)
{
    return a + b;
}
```

#### Ricorsione
La ricorsione è una tecnica di programmazione molto potente, che sfrutta l'idea di suddividere un problema da risolvere in sottoproblemi simili a quello originale, ma più semplici.

```c
int fibonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    
    return (fibonacci(n - 1) + fibonacci(n - 2));
}
```
  
---

### Array
Sono una collezione di dati di tipo statico dello stesso tipo, come interi, double o char. La loro dichiarazione è come segue:

```c
tipo_variabile nome_array[grandezza];
```

Un esempio pratico di utilizzo può essere la rappresentazione di alcune lettere.

```c
//Dichiaro direttamente l'array con il contenuto, così lo crea con una grandezza di 3
char array = {a, b, c};
/*
Il printf è una funzione che stampa a schermo quello che gli indichiamo, in questo caso il %c
indica che verrà preso un carattere da una variabile, indicata dopo la virgola.
In questo caso la variabile che mostrerà sarà la a, perchè il primo elemento di un array
è sempre in posizione 0, mentre l'ultimo è sempre in posizione n - 1.
*/
printf("%c", array[0]);
```

---

### Puntatori
Sono un particolare tipo di variabile.
A loro sono associati due simboli fondamentali:
  - `*` Serve per dichiarare o avere il valore di un puntatore 
  - `&` Serve per avere l'indirizzo ed accedere al puntatore stesso

Sono versatili e sono fondamentali in C, e per esempio possiamo usarli assieme agli array.
```c
/*
Dichiaro un array e un puntatore. Poi il puntatore avrà come valore l'indirizzo della posizione 3 dell'array
*/
int array[3];
...
int *puntatore;
puntatore = &array[3];
```

<p align="center">
  <img src="https://publications.gbdirect.co.uk//c_book/figures/5.4.png" />
</p>

---

### Stringhe
Le stringhe non esistono come tipo in C, quindi vengono rappresentate con array di char, e l'ultimo elemento deve sempre essere quello terminale, ovvero `\0`.
Di seguito alcune delle funzioni più importanti per le operazioni sulle stringhe:
  - Lunghezza di una stringa 
  ```c 
  strlen(s); 
  ```
  
  - Comparare due stringhe
  ```c
  strcmp(s1, s2);
  ```
  
  - Copiare una stringa in un'altra
  ```c
  strcpy(s1, s2);
  ```
  
  - Concatena una stringa ad un'altra
  ```c
  strcat(s1, s2);
  ```

---

### Strutture
Con le strutture si possono creare tipi di dati, che magari contengono più tipi al loro interno.

```c
struct studente
{
    char nome[30];
    char cognome[20];
    int id;
    int eta;
}; 
```

---

### Gestione dei File
È fondamentale saper gestire ed utilizzare i file, di seguito le basi per poterli sfruttare.

- Creare un pointer per accedere al file
```c
FILE *fPtr;
```

- Aprire il file
```c
fPtr = fopen("path_file", condizione);
/*
La condizione può essere di 6 tipi:
    - r: Aprire il file in lettura; Deve esistere
    - r+: Apre il file in letture/scrittura; Deve esistere.
    - w: Crea un nuovo file in scrittura; Se esiste viene sovrascritto.
    - w+: Crea un nuovo file in scrittura/lettura; Se esiste viene sovrascritto.
    - a: Aggiunge (append) alla fine del file; Se non esiste viene creato.
    - a+: Aggiunge (append) e legge alla fine del file; Se non esiste viene creato.
*/ 
```

- Leggere il contenuto di un file
```c
fscanf(FILE *fPtr, formato, argomenti);

//Un esempio di utilizzo può essere
fscanf(fPtr, "%s %s %d", &nome, &cognome, &età);
```

- Scrivere su di un file
```c
fprintf(FILE *fPtr, formato, argomenti);
```

Un esempio di utilizzo dei file può essere il seguente:
```c
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    FILE *fPtr;
 
    if((fPtr = fopen("file.txt", "r")) == NULL)
    {
        printf("File non trovato");
        exit(1);
    }
 
 
    char string[100];
    while (fscanf(fPtr, "%s", string) != EOF)
    {
        printf("%s \n", string);
    }
 
    return 0;
}
```

---

### Allocazione Dinamica della Memoria
Nel caso non si sappia in anticipo la grandezza di un array, o di una struttura di dati, non si può allocare staticamente la memoria con `char nome[20]` ma bisogna utilizzare un costrutto più complesso, l'allocazione dinamica, rischioso però quando si hanno risorse limitate come su piccole board.

Se non sappiamo per esempio quanti caratteri arriveranno in ingresso, bisogna procedere come segue, per ogni char ricevuto:
```c
char *stringa;
stringa = (char*)malloc(sizeof(char));

/*
(char*): Questa prima parte è un cast esplicito, serve a far capire al compilatore che il comando successivo deve essere traspormato in una puntatore di char
malloc(): È il comando effettivo che alloca la memoria, l'argomento che sta nella parentesi è la grandezza in bytes che serve per quel tipo di variabile
sizeof(char): Per evitare di commettere errori indicando i byte necessari, questa funzione fa il lavoro per noi, indicando la grandezza esatta del tipo che ci serve
*/
```

Quando si utilizza questo tipo di allocazione in memoria, è imporante anche liberarla quando non più utilizzata, e lo si può fare con:
```c
free(&puntatore);
```

Altri due modi per sfruttare questo funzionamento sono anche:
- ```c
  *var = (tipo*)calloc(n, grandezza);
  ```

- ```c
  *var = realloc(*var2, n);
  ```

---

### Formattazione del Testo
In C è anche importante saper utilizzare i diversi print e scan in modo correto, utilizzandoli in modo completo e ordinato, così da tenere ordine nel proprio codice.

#### Identificatori di Formato

| Identificatore    | Tipo                |
| ----------------- | ------------------- |
| %c                | char                |
| %d                | int                 |
| %f                | float               |
| %lf               | double              |
| %l                | long                |
| %Lf               | long double         |
| %lld              | long long           |
| %o                | ottale              |
| %p                | pointer             |
| %s                | string              |
| %%                | stampa il %         |


#### Sequenze di Escape

| Sequenza           | Output                   |
| ------------------ | ------------------------ |
| \a                 | Produce un beep          |
| \b                 | Backspace                |
| \f                 | Form Feed                |
| \n                 | Nuova riga               |
| \t                 | Tab (4 spazi)            |
| \v                 | Tab verticale            |
| &#92;&#92;         | Backslash                |
| &#92;"             | Virgolette               |
| &#92;'             | Virgoletta               |
| &#92;?             | Punto di domanda         |

---

### Q & A
WIP

### Extra
- Libri open source di C
  - [The C book](https://publications.gbdirect.co.uk//c_book/)
  - [C Elements of Style](http://www.oualline.com/books.free/style/index.html)
