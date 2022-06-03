### Esercizi di C
Questa sezione è dedicata agli esercizi in C, così da poter ampliare la teoria applicandola direttamente, ed esplorando la [documentazione](https://devdocs.io/c/) per poter approfondire.

Ogni esercizio è di diversa difficoltà, ognuno con concetti diversi.
Si consiglia prima di provare a svolgerli da se, e poi andando a vedere la mia soluzione che sarà riportata assieme al testo di ogni esercizio.


### Esercizio 1 - Inverti Sequenza
Prendere una stringa in ingresso, inserita da parte dell'utente, ed invertirla.

Un esempio di esecuzione è:
```
> Input: Ciao
> Output: oaiC
```

**La mia [soluzione](1_InvertiSequenza.c).**

### Esercizio 2 - Overflow di una Somma
Prendere in ingresso due numeri short, inseriti dall'utente, e creare una funzione che ne esegue la somma. Nel caso la somma causi un overflow, la funzione deve terminare il programma indicando perchè, altrimenti stampare il risultato a schermo.

**NB:** Un overflow succede quando si cerca di inserire un valore maggiore della capienza massima (o minima) di una variabile, causandone il cambio di segno. In questo caso, il massimo short è 32767, mentre il minimo -32768. 

Un esempio di esecuzione è:
```
> Primo numero: 31111 
> Secondo numero: 31111
> Overflow
```

**La mia [soluzione](2_OverflowSomma.c).**

### Esercizio 3 - Char in Intero
Convertire dei caratteri in ingresso in Interi.

Un esempio di esecuzione è:
```
> Input: abc
> Output: 5451
```

**La mia [soluzione](3_CharToInteger.c).**

### Esercizio 4 - Conta i Caratteri, Spazi e Cifre 
Prendere una stringa in ingresso, inserita da parte dell'utente, e contarne i caratteri, gli spazi e le cifre.

Un esempio di esecuzione è:
```
> Input: Oggi è 4 Agosto 2020
>
> Cifre: 0: 2     1: 0    2: 2    3: 0    4: 1    5: 0    6: 0    7: 0    8: 0    9: 0
> Spazi: 4
> Caratteri: 11
```

**La mia [soluzione](4_ContaCaratteriSpaziCifre.c).**

### Esercizio 5 - Manipolazione di Stringhe
Manipolare le stringhe in 3 modi: Compare, Copy, Length. Creare una alternativa per array e una per puntatori per ogni funzione. 

Un esempio di esecuzione è:
```
> Input 1: aaaaaaaaaa
> Input 2: aaaaaaaaab
> 
> Compare con array: -1
> Compare con puntatori: -1
> Copy con puntatori: aaaaaaaaab
> Lunghezza con array: 10, 10
> Lunghezza con puntatori: 10, 10
```

**La mia [soluzione](5_ManipolaStringhe.c).**

### Esercizio 6 - Trova Riga Maggiore
Far inserire all'utente delle righe di testo finchè non vuole terminare. Il programma deve mostrare alla fine la riga più lunga fra quelle inserite 

Un esempio di esecuzione è:
```
> Input 1: aooo
> Input 2: aoooooo
> 
> Output: aoooooo
```

**La mia [soluzione](6_TrovaRigaMaggiore.c).**

### Esercizio 7 - Piano Diviso da Rette
Far inserire da utente il numero di n rette. Poi calcolare in quante parti il piano viene diviso da tali. 
Per facilitare la comprensione, due utili documentazionei in [inglese](https://link.springer.com/content/pdf/bbm%3A978-3-642-36243-9%2F1.pdf) e [italiano](https://www.matematicamente.it/forum/divisioni-del-piano-t27628.html).

Un esempio di esecuzione è:
```
> Input: 9
> Output: 46
```

**La mia [soluzione](7_PianoDiviso.c).**
