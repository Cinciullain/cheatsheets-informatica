# C Cheatsheet
**Download PDF: [WIP]()**

## Indice dei Contenuti

- [Overview del Linguaggio](#overview) 
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
- [](#)
- [Q & A](#q--a)

---

### Overview

WIP

---

### Setup Ambiente di Sviluppo
Per poter eseguire codice in C è necessario un compilatore, così da poter eseguire e testare il codice.

- **Linux e MacOS:** basta aprire il terminale nella cartella dove è presente il file .c ed eseguire il seguente comando
            ```
            $ gcc -o output.o file.c
            ```
- **Windows:** ha la necessità di installare alcuni packages, consiglio questa [guida](https://www.ics.uci.edu/~pattis/common/handouts/mingweclipse/mingw.html).

**NB:** Ogni OS compila in modo differente, quindi un codice compilato ed eseguito su Linux, può avere risultati differenti su MacOS e Windows.

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
short minimo = -32767;
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
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
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
Sono un particolare tipo di variabile

---

### Q & A
