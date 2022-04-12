# C Cheatsheet
**Download PDF WIP**

## Indice dei Contenuti

- [Overview del Linguaggio](#overview) 
- [Setup Ambiente](#setup-ambiente)
- [Tipi Primitivi](#tipi-primitivi)
- [Operatori](#operatori)
  - [Aritmecici]()
  - [Logici e Relazionali]()
  - [Bit a Bit]()
- [Strutture di Controllo di Flusso](#strutture-di-controllo-di-flusso)
- [Q & A](#q--a)

---

### Overview

WIP

---

### Setup Ambiente

WIP

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

**void** - Represents the absence of type.

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

```c
while(condizione)
{
    ...
}
```

#### do-while

```c
do
{
    ...
}
while(codizione);
```

#### for

```c
for(int i = 0; i < contatore; i++)
{
    ...
}
```

---

### WIP

### Q & A
