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
  - [Overloading](#overloading)
  - [Ricorsione](#ricorsione)
- [Stringhe](#stringhe)
- [Modificatori di Accesso e Non](#modificatori-di-accesso-e-non)
- [Classi](#classi)
- [Polimorfismo](#polimorfismo)
- [Ereditarietà](#ereditarietà)
- [Eccezioni](#eccezioni)
- [Astrazione](#astrazione)
  - [Classe Astratta](#classe-astratta)
  - [Interfaccia](#interfaccia)
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

### Array
Sono una collezione di dati di tipo statico dello stesso tipo, come interi, double o char. La loro dichiarazione è come segue:

```java
tipo_variabile[] nome_array;

int[] array = new int[5];
```

Un esempio pratico di utilizzo può essere la rappresentazione di alcune lettere.

```java
//Dichiaro direttamente l'array con il contenuto, così lo crea con una grandezza di 3
char[] array = {'a', 'b', 'c'};

/*
Il println è una funzione che stampa a schermo quello che gli indichiamo.
In questo caso la variabile che mostrerà sarà la a, perchè il primo elemento di un array
è sempre in posizione 0, mentre l'ultimo è sempre in posizione n - 1.
*/
System.out.println("Posizione 0 =" + array[0]);
```

#### Lunghezza di un Array

```java
System.out.println(array.length());
```

---

### Funzioni
Le funzioni sono utilizzate per dividere il codice ed evitare la ripetitività, rendendolo più facilmente mantenibile e modificabile, oltre a renderlo più ordinato.

```java
tipo_restituito nome_funzione(tipo_parametro nome_parametro)
{
    ...
    return risultato;
}
```

Un esempio può essere una funzione di addizione:

```java
int addizzione(int a, int b)
{
    return a + b;
}
```

#### Overloading
Java fornisce un sistema di overloading delle funzioni, che permette di avere funzioni con stessi nomi, ma con diversi parametri e/o funzionamento.

```java
//Metodo 1
void saluta()
{
    System.out.println("Ciao");
}

//Metodo 2
void saluta(String nome)
{
    System.out.println("Ciao " + nome);
}
```

#### Ricorsione
La ricorsione è una tecnica di programmazione molto potente, che sfrutta l'idea di suddividere un problema da risolvere in sottoproblemi simili a quello originale, ma più semplici.

```java
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

### Stringhe
Le stringhe non esistono come tipo in Java, ma come classe, concetto spieato di seguito.
Si dichiara come segue:

```java 
  String stringa1 = new String("ciao");
  String stringa2 = "Ciao";
  ```

Di seguito alcune delle funzioni più importanti per le operazioni sulle stringhe:

  - Lunghezza di una stringa 
  ```java 
  stringa.length(); 
  ```
  
  - Comparare due stringhe
  ```java
  s1.compareTo(s2);
  ```
  
  - Quale carattere è presente in una data posizione
  ```java
  s1.charAt(n);
  ```
  
  - Concatena una stringa ad un'altra
  ```java
  s1.concat(s2);
  ```

---

### Modificatori di Accesso e Non
- #### Modificatori
  - default: Tutte le dichiarazioni sono visibili all'interno del package (Viene presa implicitamente se non scritta).
  - private: Tutte le dichiarazioni sono visibili all'iterno della classe.
  - public: Tutte le dichiarazioni sono visibili ovunque.
  - protected: Tutte le dichiarazioni sono visibili all'interno del package e delle sottoclassi.
  
- #### Non Modificatori
  - static: Gli attributi e i metodi appartengono alla classe, piuttosto che all'oggetto.
  - final: Gli attributi e i metodi non possono essere modificati/sovrascritti.
  - transient: Gli attributi e i metodi vengono saltati quando gli oggetti che li contengono vengono serializzati.
  - abstract: Viene utilizzati nelle classi astratte.
  - synchronized: I metodi possono avere accesso da un solo thread alla volta.
  - volatile: Il valore dell'attributo non viene salvato in una cache locale al thread, ma nella memoria principale.

---

### Classi
Una classe è un insieme di attributi e funzioni, ed ogni classe può avere quanti oggetti si vogliano, che prendono le funzionalità appunto dalla classe.
Le classi possono essere come segue:

  ```java
  public class Bicicletta
  {
      public int marcia;
      public int cadenza;
      public int velocita;
        
      public Bicicletta(int marciaIniziale, int cadenzaIniziale, int velocitaIniziale)
      {
          marcia = marciaIniziale;
          cadenza = cadenzaIniziale;
          velocita = velocitaIniziale;
      }
        
        public void setMarcia(int nuovaMarcia)
        {
            marcia = nuovaMarcia;
        } 
        public void setCadenza(int nuovaCadenza)
        {
            cadenza = nuovaCadenza;
        }   
        public void frena(int decremento)
        {
            velocita -= decremento;
        }  
        public void accelera(int incremento)
        {
            velocita += incremento;
        }
}
  ```

Esiste anche una funzione di implementazine ed estensione delle classi:

```java
class ClasseFiglio extends ClassePadre implements Interfaccia
{
    /*
    Questa classe dovrà implementare tutte le funzioni della classe padre ed i funzionamenti della interfaccia, se indicato esplicitamente da quest'ultima
    
    ClasseFiglio è una sottoclasse di ClassePadre, che a sua volta implementa Interfaccia
    */
}
```

#### Costruttore 
Ogni classe contiene almeno un costruttore, che viene invocato alla creazione dell'oggetto dal "progetto" della classe stessa.
Le dichiarazione di questi costruttori sembrano come se fossero dei metodi, e devono avere lo stesso nome della classe e non hanno un tipo di ritorno.
Ogni classe ha un costruttore default senza argomenti, anche se non viene dichiarato.

```java
/*
Facendo finta di essere all'interno della classe bicicletta:

- Un primo costruttore, che inizializza i valori a seconda di quelli inseriti
- Un secondo cosruttore senza parametri che inizializza tutto a zero
- Un terzo, che risulterebbe quello di default implicito
*/


public Bicicletta(int marciaIniziale, int cadenzaIniziale, int velocitaIniziale)
{
    marcia = marciaIniziale;
    cadenza = cadenzaIniziale;
    velocita = velocitaIniziale;
}
      
public Bicicletta()
{
    marcia = 0;
    cadenza = 0;
    velocita = 0;
}
      
public Bicicleta()
{
    super();
}
```

---

### Polimorfismo
È un concetto per cui viene concesso ad uno stesso oggetto di comportarsi differentemente a seconda della situazione
Esistono due tipi di polimorfismo:
  1. In fase di compilazione (Compile Time Polymorphism)
  2. In fase di esecuzione (Run Time Polymorphism)

#### 1. Compile Time Polymorphism
Può essere ottenuto tramite l'overloading dei metodi, come spiegato [qui](#overloading).

```java
  public class Cerchio
  {

    public void draw()
    {
      System.out.println("Disegna un cerchio default nero con 1cm di diametro.");
    }

    public void draw(int diametro)
    {
      System.out.println("Cerchio nero con diametro di " + diametro + "cm.");
    }

    public void draw(int diametro, String colore)
    { 
      System.out.println("Cerchio di colore " + colore + " e diametro di " + diametro + "cm.");
    }
  }
```
#### 2. Run Time Polymorphism
È ottenuto soltando se si lavora con sottoclassi (classi figlio) di altre superclassi, in cui tutte implementino uno stesso metodo (o più) applicando sempre il concetto di overriding.

```java
    public class Figura 
    {
	      public void draw();
    }
```
```java
    public class Cerchio extends Figura
    {
        @Override
        public void draw()
        {
            System.out.println("Disegno del cerchio");
        }
    }
```
```java
    public class Quadrato extends Figura
    {
        @Override
        public void draw()
        {
            System.out.println("Disegno del quadrato");
        }
    }
```
`Figura` è la superclasse, mentre `Cerchio` e `Quadrato` sono le due sottoclassi. Di seguito la dimostrazione del polimorfismo: 

```java
    Figura fg1 = new Cerchio();
    fg1.draw();

    Figura fg2 = new Quadrato();
    fg2.draw();
    
    //In questo caso viene riconosciuto a runtime quale metodo chiamare a seconda dell'oggetto creato.
```

---

### Ereditarietà
È il meccanismo di riutilizzo del codice. L'oggetto che viene ereditato si chiama  *superclasse*, mentre l'oggetto che eredita, *sottoclasse*. 
Si usa la parola chiave `extends` per ereditare una classe.
Si usa invece `implements` per implementare ed ereditare una interfaccia.

```java
    public class SuperClasse
    {
     
    }
```
```java
    public interface SuperInterfaccia
    {
      
    }
```
```java
    public class SottoClasse extends SuperClasse implements SuperInterfaccia
    {
      
    }
```

---

### Astrazione
L'astrazione è il concetto di nascondere i dettagli interni e descrivere i funzionamenti interni in termini semplici, solo lo "scheletro" di una classe o interfaccia.
Può essere ottenuta in due modi:
  1. Classe Astratta
  2. Interfaccia

#### 1. Classe Astratta
Una classe astratta deve essere definita  con la parola chiave `abstract`:
	- Non può essere istanziata.
	- Può avere metodi astratti e non.
	- Può avere il costruttore.
	- Può avere metodi `final` che impediscono alle sottoclassi di modificare il corpo di un metodo.

```java
    abstract class Fiore
    {
        abstract String Odore();
	
        String Nettare()
	{  
            System.out.println("Il fiore ha nettare");
        }
    }

    public class Margherita extends Fiore
    {
        private String Odore()
	{ 
            System.out.println("La Margherita ha un buon profumo");
        }
    }
```

#### 2. Interfaccia
Le interfacce sono il progetto di una classe. Al suo interno si possono avere metodi astratti, statici e default.

```java
    interface Stampa
    {  
        void stampaFoglio();  
    }  
    
    public class A4 implements Stampa
    {  
        public void stampaFoglio()
	{
            System.out.println("A4 stampato.");
        }  
    }
```

---

### Eccezioni
WIP
