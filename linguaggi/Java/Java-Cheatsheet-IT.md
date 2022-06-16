# Java Cheatsheet
**Download PDF: [WIP]()**

## [Esercizi](Esercizi/EserciziJava.md)

## Indice dei Contenuti

- [Setup Ambiente di Sviluppo](#setup-ambiente-di-sviluppo)
- [Tipi Primitivi](#tipi-primitivi)
- [Operatori](#operatori)
  - [Aritmecici]()
  - [Logici e Relazionali]()
  - [Bit a Bit]()
- [Strutture di Controllo di Flusso](#strutture-di-controllo-di-flusso)
- [Array](#array)
- [Funzioni](#funzioni)
  - [Ricorsione](#ricorsione)
- [Stringhe](#stringhe)
- [Modificatori di Accesso e Non](#modificatori-di-accesso-e-non)
- [Eccezioni](#eccezioni)
- [Classi](#classi)
- [Gestione dei File](#gestione-dei-file)
- [Formattazione del Testo](#formattazione-del-testo)
  - [Identificatori di Formato](#identificatori-di-formato)
  - [Sequenze di Escape](#sequenze-di-escape)
- [Garbage Collection](#garbage-collection)
- [Q & A](#q--a)
- [Extra](#extra)

---

### Setup Ambiente di Sviluppo
Per poter eseguire codice in Java, è necessario installare la Java Virtual Machine (JVM), così da poter eseguire e testare il codice.
Basta andare nel sito di [Java](https://www.oracle.com/java/technologies/downloads/), e selezionare l'ultima versione, più adatta per il proprio sistema.

**NB:** La peculiarità di Java è la possibilità di poter scrivere codice su un sistema come Linux, e poterlo eseguire tranquillamente su Windows o qualunque altro.

Per approfondire il processo della JVM per eseguire il codice Java, consiglio questo articolo di [Wikipedia](https://en.wikipedia.org/wiki/Java_virtual_machine).

---

### Tipi Primitivi

| Tipo          | Esempio                 | Grandezza    |
| ------------- | ----------------------- | ------------ |
| **Boolean**   | bool check = true;      | 1 bit        |
| **Byte**      | byte val = 100;         | 1 byte       |
| **Character** | char lettera = "c";     | 2 bytes      |
| **Short**     | short val = 500;        | 2 bytes      |
| **Integer**   | int val = 5;            | 4 bytes      |
| **Long**      | long val = 1241351866L; | 8 bytes      |
| **Float**     | float val = 15.87;      | 4 bytes      |
| **Double**    | double val = 2156.4674; | 8 bytes      |

---

### Operatori

#### Operatori Aritmetici

| Operatori | Esempio     | Significato        |
| --------- | ---------   | ------------------ |
| +         | a + b       | Addizione          |
| ++        | a++ o ++a   | Incrementa di 1    |
| -         | a - b       | Sottrazione        |
| --        | a-- o --a   | Decrementa di 1    |
| *         | a * b       | Moltiplicazione    |
| /         | a / b       | Divisione          |
| %         | a % b       | Modulo             |

#### Operatori Logici e Relazionali

| Operatori | Esempio     | Significato        |
| --------- | ---------   | ------------------ |
| <         | a < b       | Minore di          |
| <=        | a <= b      | Minore o uguale    |
| >         | a > b       | Maggiore di        |
| >=        | a >= b      | Maggiore o uguale  |
| &&        | a && b      | AND logico         |
| &#124;&#124; | a &#124;&#124; b | OR logico  |
| !            | !a       | NOT logico |

#### Operatori Bit a Bit

| Operatori | Esempio     | Significato        |
| --------- | ---------   | ------------------ |
| <<        |             | Shift a sinistra   |
| >>        |             | Shift a destra     |
| &         | a & b       | AND                |
| ^         | a ^ b       | XOR                |
| &#124;    | a &#124; b  | OR                 | 
| ~         | ~ (a)       | C1                 |

---

### Strutture di Controllo di Flusso
In informatica le strutture di controllo sono dei costrutti per la gestione del flusso di esecuzione. In Java, come in altri linguaggi, abbiamo le 5 principali, spiegate di seguito.

#### if-else
È un costutto base fondamentale, fondato sulle parole chiave *if* ed *else*, utilizzabili
singolarmente, annidati, o consecutivamente.

```java
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

```java
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

```java
while(condizione)
{
    ...
}
```

#### do-while
Il do-while a differenza del while, svolge il codice al suo interno almeno una volta,
poi verrà ripetuto solo finché la condizione sarà rispettata.
```java
do
{
    ...
}
while(codizione);
```

#### for
Il ciclo for è indicato quando il modo più naturale per esprimere la condizione di permanenza 
in un ciclo consiste nello specificare quante volte debbano essere ripetuti l'istruzione o il blocco controllati dal ciclo.

```java
for(int i = 0; i < contatore; i++)
{
    ...
}
```

---
