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
