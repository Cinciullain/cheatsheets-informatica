# Cryptography Cheatsheet
**Download PDF: [WIP]()**

## [Esercizi](Esercizi/Esercizi-Cryptography.md)

## Indice dei Contenuti

- [Le Basi](#le-basi)
- [Cifrari Classici - Il Cifrario di Cesare](#cifrari-classici---il-cifrario-di-cesare)
- [Cifrari Classici - Il Cifrario di Vigenere](#cifrari-classici---il-cifrario-di-vigenere)
- [Come Funzionano i Cifrari](#come-funzionano-i-cifrari)
  - [Le Permutazioni (Permutations)](#le-permutazioni-permutations)
  - [Modalità di Funzionamento (Mode of Operation)](#modalit-di-funzionamento-mode-of-operation)
- [One-Time Pad Encryption](#one-time-pad-encryption)
- [Attack Models](#attack-models)
  - [Kerckhoffs's Principle](#kerckhoffss-principle)
  - [Black-Box Models](#black-box-models)
  - [Gray-Box Models](#gray-box-models)
- [Security Goals](#security-goals)
- [Security Notions](#security-notions)
  - [Semantic Security and Randomized Encryption: IND-CPA](#semantic-security-and-randomized-encryption-ind-cpa)
  - [Achieving Semantically Secure Encryption](#achieving-semantically-secure-encryption)
- [Asymmetric Encryption](#asymmetric-encryption)
- [Authenticated Encryption](#authenticated-encryption)
- [Format-Preserving Encryption](#format-preserving-encryption)
- [Fully Homomorphic Encryption](#fully-homomorphic-encryption)
- [Searchable Encryption](#searchable-encryption)
- [](#)
- [](#)
- [](#)
- [](#)
- [](#)
- [](#)
- [Abbreviazioni](#abbreviazioni)
- [Q & A](#q--a)
- [Extra](#extra)

---

## Le Basi
Quando criptiamo un messaggio, con _plaintext_ indichiamo quello non criptato e con _ciphertext_ quello criptato.
Uno cipher è quindi composto da due funzioni: 
  - **Encryption:** da plaintext a ciphertext.
  - **Decryption:** da ciphertext a plaintext.

Possiamo rappresentare questi due concetti come: _C = **E**(K, P)_ e _P = **D**(K, C)_, dove E e D rappresentano encryption e decryption, K la chiave, P il plaintext e C il ciphertext.

![Basic Encryption and Decryption](https://github.com/Cinciullain/cheatsheets-informatica/blob/main/argomenti/Sicurezza%20Informatica/Images/basic_encryption_decryption.png)

---

## Cifrari Classici - Il Cifrario di Cesare
I cifrari classici sono quelli che non lavorano direttamente sui bit, ma sulle lettere, ed uno dei più famosi è quello di Cesare.
Si basa sullo _shifting_ delle lettere rispetto all'alfabeto di n posizioni, per esempio con n = 3, ZOO diventa CRR.

![Cifrario di Cesare](https://github.com/Cinciullain/cheatsheets-informatica/blob/main/argomenti/Sicurezza%20Informatica/Images/cifrario_cesare.png)

---

## Cifrari Classici - Il Cifrario di Vigenere
Sempre basato sullo shifting, ma si utilizza una _key_ per deciderlo. 
Con K = DUH per esempio, ciclicamente le lettere verranno shiftate rispettivamente di 3, 20, 7 perchè D è 3 spazi dopo A, U 20 spazi dopo e H di 7.

![Cifrario di Vigenere](https://github.com/Cinciullain/cheatsheets-informatica/blob/main/argomenti/Sicurezza%20Informatica/Images/cifrario_vigenere.png)

Per dedurre questi tipi di cifrari, bisogna mettere in pratica la _frequency analysis_, prendendo conto di possibili parole o lettere che si ripetono, analizzando il testo.

---

## Come Funzionano i Cifrari
Un cifrario si basa su due componenti principali: le _permutations_ e la _mode of operation_.
La prima è una funzione che trasforma un oggetto, in modo tale che ad ogni applicazione si ottenga un inverso unico.
Mentre la seconda è un algoritmo che applica le permutations ad i nostri messaggi di indefinita lunghezza.

### Le Permutazioni (Permutations)
Nei cifrari più semplici, come quelli classici spiegati prima, si basano su delle semplici _sostituzioni_. 
Le sostituzioni non possono essere casuali, devono essere delle permutazioni, ovvero per l'alfabeto ogni lettera deve avere una lettere da cui viene sostituita, che però non è utilizzata per nessun'altra.
Non tutte le permutazioni sono però sicure, per esserlo, devono soddisfare tre criteri:

- **La permutazione deve essere determinata da una key**, così da mantenere la segretezza, fino alla scoperta della key.
- **Key differenti fanno ottenere permutazioni differenti**. Se così non fosse, si potrebbe decifrare anche senza avere la key.
- **La permutazione deve sembrare randomica**, così da nascondere eventuali pattern.

Ogni permutazione che rispetta questi criteri è una _secure permutation_, ciò però non basta per avere un cifrario efficente.

### Modalità di Funzionamento (Mode of Operation)
Diciamo di avere una secure permutation che tramuta A in X, B in M e N in L per esempio. La parola BANANA diventerebbe MXLXLX, e quindi si potrebbe dedurre da questo pattern a quale lettera equivale la X ad esempio.
La mode of operation (semplicemente _mode_) di un cifrario mitiga le esposizioni di duplicati e dalla creazione di patterns, come con Vigenere.

---

## One-Time Pad Encryption
Questo è il miglior tipo di cifratura, in quanto garantisce _perfect secrecy_, ovvero: anche se un attaccante avesse una potenza di calcolo illimitata, è impossibile scoprire qualcosa sul plaintext, se non la lunghezza.
Il meccanismo consiste nel prendere un plaintext P, una key randomica K (della stessa lunghezza di P), e ottenere il ciphertext C attraverso uno XOR.

<div align="center"><font size="5">C = P ⊕ K</font></div>

Per decrittarlo si deve fare P = C ⊕ K. Purtroppo però la chiave deve essere diversa ad ogni utilizzo, altrimenti si può dedurre il plaintext:

<div align="center"><font size="3">C1 ⊕ C2 = (P1 ⊕ K) ⊕ (P2 ⊕ K) = P1 ⊕ P2 ⊕ K ⊕ K = P1 ⊕ P2</font></div>

---

## Attack Models
Un _attack model_ è un set di deduzioni su come l'attaccante può interagire sul cifrario, cosa possono fare e cosa non. Gli obbiettivi di un attack model sono:

- Stabilire dei requisiti per chi progetta i crifrari, così da sapere da quali attaccanti e attacchi bisogna proteggersi.
- Fornire linee guide agli utenti, così che si capisca se il cifrario è adeguato per l'ambiente scelto.
- Fornire delle piste ai crittoanalisti che cercare di rompere i cifrari, così da capire se un dato attacco è valido. Un attacco è valido solo se attuabile nel modello in considerazione.

Gli attack models non devono necessariamente rispecchiare la realtà, sono delle approssimazioni.
Per essere utili nella crittografia, gli attack models devono comprendere che cosa gli attaccanti possano effettivamente fare per attaccare un cifrario. Un buon modello sopravvaluta le abilità degli attaccanti, mentre uno non ben fatto le sottovaluta.

### Kerckhoffs's Principle
Una deduzione fatta in tutti i modelli è il _Kerckhoffs's Principle_, dicendo che la sicurezza di un cifrario dovrebbe dipendere solo dalla segretezza della key, non del cifrario in sè.

### Black-Box Models
Consideriamo ora alcuni attack models espressi in termini di che cosa l'attacker può osservare e quali queries possono fare al cifrario.
Con _query_ intendiamo una operazione in cui dando dei dati in input, otteniamo un output senza esporre i dettagli della funzione da cui passiamo.
Una _encryption query_, per esempio, prende un plaintext e restituisce il ciphertext, senza esporre la chiave.

Questi tipi di modelli si chiamano _black-box models_, siccome l'attaccante può solo vedere ciò che entra ed esce dal cifrario. Di seguito una lista di alcuni cifrari di questo tipo, dal più "debole" al più "forte":

- _Ciphertext-only attackers_ (COA): si ha il ciphertext senza sapere il plaintext associato, e non si sa come il plaintext è stato selezionato. Non si possono effettuare queries di encryption o decryption. È di tipo passivo. 
- _Known-plaintext attackers_ (KPA): si ha il ciphertext ed il plaintext associato, ma i plaintext sono sempre randomici e non si possono decidere. È di tipo passivo.
- _Chosen-plaintext attackers_ (CPA): si possono effettuare encryption queries su plaintext di propria scelta, e vedere il ciphertext risultante. È di tipo attivo.
- _Chosen-ciphertext attackers_ (CCA): si possono effettuare encryption queries e decryption queries. Quello a cui si è interessato in questo caso è la key, per poter "rompere" il sistema.

### Gray-Box Models
A differenza del modello precedente, nel _gray-box model_ l'attacker ha accesso all'implementazione del cifrario, cosa più realistica nel mondo reale. Sono però più difficili da definire, in quanto non dipendono solo da un algoritmo, ma anche dalle proprietà fisiche e analogiche.

- _Side-channel attacks_: È un tipo di attacco _noninvasive_, in quanto si osservano o misurano le caratteristiche del cifrario, ed il modo in cui è implementato, lato software o hardware che sia. Per il lato software, attacchi tipici sono sul tempo di esecuzione, e sul comportamento del sistema che avvolge il cifrario stesso come error messages, return values, branches e così via. Per implementazioni invece su dispositivi hw come le smart cards, per esempio, si va misurare il consumo energetico, emanazioni elettromagnetiche o rumori acustici. 
- _Invasive attacks_: Sono più efficenti ma allo stesso tempo più costosi dei precedenti, in quanto coinvolge l'utilizzo di un laboratorio, microscopi, acidi, saldatrici, ecc..

---

## Security Goals
Lo scopo nella sicurezza è illustrato fin ora come: "Niente può essere imparato dal comportamento del cifrario". Rendiamo questa idea matematica:
- **Indistinguishability (IND)**: I ciphertexts devono essere indistinguibili da stringhe randomiche. Ad esempio, se un attacker scegliesse due plaintext, e ricevesse un solo ciphertext, non deve essere in grado di capire da quale dei due plaintext derivi.
- **Non-malleability (NM)**: Dato un ciphertext C1 = E(K, P1), deve essere impossibile creare un altro ciphertext, C2, il cui plaintext corrispondente, P2, è correlato a P1 in maniera significativa (Per esempio, P2 è uguale a P1 ⊕ 1, o in generale P1 ⊕ X per un qualunque valore X). 

---

## Security Notions
I security goals sono utili solo se combinati con un attack model. La convenzione è scrivere una security notion come GOAL-MODEL.

### Semantic Security and Randomized Encryption: IND-CPA
È la security notion più importante, in quanto racchiude il concetto per cui un ciphertext non deve dare alcuna informazione riguardante il plaintext, finchè non si ha la key.
Nella IND-CPA, l'inserimento di uno stesso plaintext due volte, fornisce due ciphertext diversi. Un modo per ottenere ciò è randomizzare l'encryption, e può essere espresso come C = **E**(K, R, P), dove R sono bit randomici.
Il processo di decryption rimane però deterministico, in quanto dato **D**(K, R, P), si ottiene sempre P, indipendentemente dal valore di R.

### Achieving Semantically Secure Encryption
Per raggiungere ciò, si utilizza un _deterministic random bit generator_ (DRBG), un algoritmo che restituisce random-looking bits dato qualunque valore segreto:

<div align="center"><font size="5">E(K, R, P) = (<b>DRBG</b>(K R) ⊕ P, R)</font></div>

In questo caso R è una stringa scelta randomicamente per ogni nuova encryption, e dato ad un DRBG assieme ad una key (K || R denota la stringa che consiste in K seguita da R).

---

## Asymmetric Encryption
Quelli precedenti erano tutti casi di symmetric encryption, dove è presenta una unica key. Nella _asymmetric encryption_, invece, ci sono due chiavi: una per l'encrypt e una per il decrypt.
La prima è anche chiamata _public key_, ed è considerata pubblica per tutti, mentre la seconda è anche chiamata _private key_, in quanto deve rimanere segreta. La public key può essere elaborata tramite la private key, ma non viceversa.

---

## Authenticated Encryption
L' _authenticated encryption_ (AE) è un tipo di **symmetric encryption** che restituisce un _authentication tag_ oltre al ciphertext. È rappresentato come **AE**(K, P) = (C, T), dove T è il tag, rappresentato da una stringa impossibile da dedurre senza la key.
Per la decryption vengono presi K, C e T, e restituisce P solo se T è il tag valido per la coppia plaintext-cyphertext.

![Authenticated Encryption](https://github.com/Cinciullain/cheatsheets-informatica/blob/main/argomenti/Sicurezza%20Informatica/Images/authenticated_encryption.png)

---

## Format-Preserving Encryption
Questo cifrario risolve il problema di mantenere lo stesso formato del plaintext nel ciphertext, che sia un PDF, immagine, ecc.. 
Per esempio, FPE può crittare un IP in un'altro IP, come nell'immagine, uno ZIP in uno ZIP, e così via.

![Format-Preserving Encryption](https://github.com/Cinciullain/cheatsheets-informatica/blob/main/argomenti/Sicurezza%20Informatica/Images/format-preserving_encryption.png)

---

## Fully Homomorphic Encryption
La _fully homomorphic encryption_ (FHE) è l'holy grail dei crittografi: permette ai propri utenti di sostituire un ciphertext, C = **E**(K, P), con un altro ciphertext, C' = **E**(K, **F**(P)), con **F**(P) qualunque funzione di P, senza dover decifrare C.
Purtroppo però è estremamente inefficente, ed è per questo che non viene tutt'oggi utilizzato.

---

## Searchable Encryption
WIP

---

## Abbreviazioni

| Acronimo | Nome Completo                                  |
|----------|------------------------------------------------|
| AE       | Authenticated Encryption                       |
| AEAD     | Authentication Encryption with Associated Data |
| AES      | Advanced Encryption Standard                   |
| AES-NI   | AES Native Instructions                        |
| AKA      | Authentication Key Agreement                   |
| API      | Authentication Program Interface               |
| ARX      | Add-Rotate XOR                                 |
| ASIC     | Application-SPecific Integrated Circuit        |
| CA       | Certificate Authority                          |
| CAESAR   | Competition for Authenticated Encryption: [..] |
| CBC      | Cypher Block Chaining                          |
| CCA      | Chosen-Ciphertext Attackers                    |
| CDH      | Computational Diffie-Hellman                   |
| CMAC     | Cipher-Based MAC                               |
| COA      | Ciphertext-Only-Attackers                      |
| CPA      | Chosen-Plaintext Attackers                     |
| CRT      | Chinese Remainder Theorem                      |
| CTR      | Counter Mode                                   |
| CVP      | Closest Vector Problem                         |
| DDH      | Decisional Diffie-Hellman                      |
| DES      | Data Encryption Standard                       |
| DH       | Diffie-Hellman                                 |
| DLP      | Discrete Logarithm Problem                     |
| DRBG     | Deterministic Random Bit Generator             |
| ECB      | Electronic Codebook                            |
| EC       | Elliptic Curve                                 |
| ECC      | EC Cryptography                                |
| ECDH     | EC DH                                          |
| ECDLP    | EC Discrete Logarithm Problem                  |
| ECDSA    | EC Digital Signature Algorithm                 |
| FDH      | Full Domain Hash                               |
| FHE      | Fully Homomorphic Encryption                   |
| FIPS     | Federal Information Processing Standards       |
| FPE      | Format-Preserving Encryption                   |
| FPGA     | Field-Programmable Gate Array                  |
| FSR      | Feedback Shift Register                        |
| GCD      | Greatest Common Divisor                        |
| GCM      | Galois Counter Mode                            |
| GNFS     | General Number Field Sieve                     |
| HKDF     | HMAC-Based Key Derivation Function             |
| HMAC     | Hash-Based Message Authentication Code         |
| HTTPS    | HTTP Secure                                    |
| IND      | Indistinguishablity                            |
| IP       | Internet Protocol                              |
| IV       | Initial Value                                  |
| KDF      | Key Derivation Function                        |
| KPA      | Known-Plaintext Attackers                      |
| LFSR     | Linear Feedback Shift Register                 |
| LSB      | Least Signiﬁcant Bit                           |
| LWE      | Learning With Errors                           |
| MAC      | Messsage Authentication Code                   |
| MD       | Message Digest                                 |
| MitM     | Meet-in-the-Middle                             |
| MQ       | Multivariate Quadratics                        |
| MQV      | Menezes–Qu–Vanstone                            |
| MSB      | Most Signiﬁcant Bit                            |
| MT       | Mersenne Twister                               |
| NFSR     | Nonlinear Feedback Shift Register              |
| NIST     | National Institute of Standards and Technology |
| NM       | Non-Malleability                               |
| NP       | Nondeterministic Polynomial-Time               |
| OAEP     | Optimal Asymmetric Encryption Padding          |
| OCB      | Offset Codebook                                |
| P        | Polynomial Time                                |
| PLD      | Programmable Logic Device                      |
| PRF      | Pseudorandom Function                          |
| PRNG     | Pseudorandom Number Generator                  |
| PRP      | Pseudorandom Permutation                       |
| PSK      | Pre-Shared Key                                 |
| PSS      | Probabilistic Signature Scheme                 |
| QR       | Quarter-Round                                  |
| QRNG     | Quantum Random Number Generator                |
| RFC      | Request for Comments                           |
| RNG      | Random Number Generator                        |
| RSA      | Rivest–Shamir–Adleman                          |
| SHA      | Secure Hash Algorithm                          |
| SIS      | Short Integer Solution                         |
| SIV      | Synthetic IV                                   |
| SPN      | Substitution–Permutation Network               |
| SSH      | Secure Shell                                   |
| SSL      | Secure Socket Layer                            |
| TE       | Tweakable Encryption                           |
| TLS      | Transport Layer Security                       |
| TMTO     | Time-Memory Trade-Off                          |
| UDP      | User Datagram Protocol                         |
| UH       | Universal Hash                                 |
| WEP      | Wireless Encrypted Protocol                    |
| WOTS     | Winternitz One-Time Signature                  |
| XOR      | Exclusive OR                                   |
                  
---

## Q & A
WIP

## Extra
