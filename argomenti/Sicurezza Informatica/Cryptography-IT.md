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
- [](#)
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

<div align="center"><font size="5">C = P ⊕ K</div>




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
| IND      |                                                |
| IP       |                                                |
| IV       |                                                |
| KDF      |                                                |
| KPA      |                                                |
| LFSR     |                                                |
| LSB      |                                                |
| LWE      |                                                |
| MAC      |                                                |
| MD       |                                                |
| MitM     |                                                |
| MQ       |                                                |
| MQV      |                                                |
| MSB      |                                                |
| MT       |                                                |
| NFSR     |                                                |
| NIST     |                                                |
| NM       |                                                |
| NP       |                                                |
| OAEP     |                                                |
| OCB      |                                                |
| P        |                                                |
| PLD      |                                                |
| PRF      |                                                |
| PRNG     |                                                |
| PRP      |                                                |
| PSK      |                                                |
| PSS      |                                                |
| QR       |                                                |
| QRNG     |                                                |
| RFC      |                                                |
| RNG      |                                                |
| RSA      |                                                |
| SHA      |                                                |
| SIS      |                                                |
| SIV      |                                                |
|          |                                                |
|          |                                                |
|          |                                                |
|          |                                                |
|          |                                                |
|          |                                                |
|          |                                                |
|          |                                                |
|          |                                                |
|          |                                                |
|          |                                                |
|          |                                                |
|          |                                                |
|          |                                                |
|          |                                                |
|          |                                                |
|          |                                                |
|          |                                                |

                  
---

## Q & A
WIP

## Extra
