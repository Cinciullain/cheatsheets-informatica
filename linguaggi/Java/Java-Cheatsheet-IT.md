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
- [Astrazione](#astrazione)
  - [Classe Astratta](#classe-astratta)
  - [Interfaccia](#interfaccia)
- [Incapsulazione](#incapsulazione)
- [Eccezioni](#eccezioni)
- [Gestione dei File](#gestione-dei-file)
- [Formattazione del Testo](#formattazione-del-testo)
  - [Specificatori di Formato](#identificatori-di-formato)
  - [Sequenze di Escape](#sequenze-di-escape)
- [Java Collection Framework](#java-collection-framework)
  - [Set](#stack)
  - [List](#queue)
  - [Map](#map)
  - [Iterator](#iterator)
  - [Comparable e Comparator](#comparable-e-comparator)
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

### Incapsulazione
È un meccanismo utilizzato per l'accesso ristretto ai membri di una classe e ai metodi, e per implementare l'astrazione in OOP.
Fornisce anche un modo per nascondere i dati, in quanto quelli presenti in una classe sono nascosti dalle altre classi.
Il modo migliore per sfruttare questo meccanismo, è dichiarando tutte le variabili di una classe private, utilizzando poi metodi pubblici all'interno della stessa per poter accedere, chiamati di solito setters e getters.

Un buon esempio di incapsulazione è il POJO (Plain-Java-Object-Class):
 ```java
    public class Utente
    {
        private String username;
        private String password;

        public String getUsername()
	{
          return username;
        }

        public void setUsername(String username)
	{
          this.username = username;
        }

        public String getPassword()
	{
          return password;
        }

        public void setPassword(String password)
	{
          this.password = password;
        }
    }
 ```
 
---

### Eccezioni
Le eccezioni sono un importantissimo funzionamento in Java, e permettono di gestire in modo molto meticoloso il programma quando si va incontro ad un errore.
Si gestiscono tramite delle classi, e si possono usare quelle definite da Java, e creare delle proprie classi di per farlo, che estendono quelle base.

Per "catturare" le eccezioni, Java offre un costrutto molto particolare ed efficente:
```java
try
{
//Codice che potrebbe generare errori
}
catch(Eccezione e)
{
//Codice da eseguire nel caso avvenga l'errore
}
finally
{
//Codice che viene sempre eseguito, anche in caso di eccezione
}
```

Se si vogliono gestire eventuali errori che possono essere generati da un nostro metodo o una nostra classe, basta aggiungere la parola chiave `throws`.
Un esempio può essere:
```java
import java.io.*;

public class Classe
{
   public void preleva(double quantita) throws RemoteException, InsufficientFundsException 
   //Le due parole dopo il throws sono due classi, ipotetiche, per gestire l'eventuale eccezione
   {
      //Corpo metodo
   }
}
```

Ecco come potrebbe essere implementata una delle due classi per gestire le eccezioni:
```java
import java.io.*;

public class InsufficientFundsException extends RuntimeException
{
   private double quantita;
   
   public InsufficientFundsException(String msg)
   {
      super(msg);
   }
   
   public InsufficientFundsException(double quantita)
   {
      this.quantita = quantita;
   }
   
   public double getquantita()
   {
      return quantita;
   }
}
```

---

### Gestione dei File
È fondamentale saper gestire ed utilizzare i file, di seguito un programma per poterli sfruttare:
```java
import java.io.File;
import java.io.FileWriter; 
import java.io.FileNotFoundException; 
import java.io.IOException; 
import java.util.Scanner; 
  
public class Classe
{
    public static void main(String[] args)
    {
        try
	{
	    /*
	    Creo un oggetto collegato al file, creo uno scanner che permette di leggere da tale.
	    Faccio un ciclo che legge una riga per volta finchè non si arriva alla fine, e concludo chiudendo lo stream di lettura.
	    
	    Infine cancello il file
	    */
	    
            File file = new File("testo.txt");
            Scanner scanner = new Scanner(file);
	    
            while (scanner.hasNextLine())
	    {
                String riga = scanner.nextLine();
                System.out.println(riga);
            }
	    
            scanner.close();
	    
            if (file.delete())
	    {
                System.out.println("Il file cancellato e\': " + file.getName());                
            }
            else
	    {
                System.out.println("Impossibile cancellare");
            }
        }
        catch (FileNotFoundException e)
	{
            System.out.println("File non trovato");
            e.printStackTrace();
        }
	
	try
	{
	    /*
	    Creo un FileWriter che permette di creare un file nel caso non esiste, o sostituirlo altrimenti.
	    Uso poi un writer per poterci scrivere sopra, e poi chiudo lo stream al termine.
	    */
            FileWriter nuovoFile = new FileWriter("nuovoFile.txt");
            Writer.write("Riga scritta nel nostro file");    
            Writer.close();
        }
        catch (IOException e) {
            System.out.println(e);
            e.printStackTrace();
        }
    }
}
```

---

### Formattazione del Testo
Saper utilizzare i diversi print e scan in modo correto è fondamentale, utilizzandoli in modo completo e ordinato, così da tenere ordine nel proprio codice.

#### Specificatori di Formato

| Identificatore    | Tipo                |
| ----------------- | ------------------- |
| %c o %C           | char o CHAR         |
| %d                | int                 |
| %f                | float               |
| %x                | hex                 |
| %o                | octal               |
| %e                | exponential         |
| %a                | float hex           |
| %tx               | Date and Time       |
| %b o %B           | true o TRUE         |
| %s o %S           | string o STRING     |
| %%                | stampa il %         |

#### Sequenze di Escape

| Sequenza           | Output                   |
| ------------------ | ------------------------ |
| \r                 | Carriage Return          |
| \b                 | Backspace                |
| \f                 | Form Feed                |
| \n                 | Nuova riga               |
| \t                 | Tab (4 spazi)            |
| &#92;&#92;         | Backslash                |
| &#92;"             | Virgolette               |
| &#92;'             | Virgoletta               |
| &#92;?             | Punto di domanda         |

---

### Java Collection Framework
WIP

#### Set
WIP

#### List 
WIP

#### Map
WIP

#### Iterator
WIP

#### Comparable e Comparator
WIP

---

### Garbage Collection
Ogni avvio della JVM è accompagnato anche dal GC, un programma che si occupa di gestire l'utilizzo della memoria in modo autonomo.
Se nel nostro codice inseriamo viariabili come un int, od oggetti come String, che vengono però utilizzati solo nelle prime righe di codice, ma poi mai più utilizzati per le seguenti 500, il GC considererà queste come "garbage". Una volta accumulata una certa quantità, e con la memoria che magari si avvicina all'esaurimento, va in funzione il meccanismo del GC di rimozione e cancellazione dallo stack, così da liberare la memoria che serve per continuare ad eseguire il programma senza problemi. 

Il primo passaggio di questo processo viene chiamato ** Marking **, e consiste nel identificare i blocchi di memoria che sono utilizzati e non.
![Marking](https://www.oracle.com/webfolder/technetwork/tutorials/obe/java/gc01/css/images/show_image_h.png)


---
### Q & A
WIP

### Extra
- Libri open source di Java
  - [Introduction to Programming Using Java](https://math.hws.edu/eck/cs124/downloads/javanotes8.pdf)
  - [Java, Java, Java: Object-Oriented Problem Solving](http://www.cs.trincoll.edu/~ram/jjj/jjj-os-20170625.pdf)

