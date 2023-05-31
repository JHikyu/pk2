Prof. Dr. Dirk Wiesmann
Programmierkurs 2
Praktikum 4
Implementieren Sie ein Dictionary A unter Verwendung von Hashing. Ein Dictionary
ist eine Menge A, die nur die folgenden Operationen unterstutzt: ¨
• insert(a): A ∪ {a}
• delete(a): A \ {a}
• member(a): true genau dann, wenn a ∈ A
Das Dictionary soll nur ganze Zahlen (int) verwalten. Verwenden Sie fur die Imple- ¨
mentierung das geschlossene Hashing (open adressing) auf der Basis eines Arrays. Das
geschlossene Hashing muss mit m Beh¨altern auskommen. Fur eine Eingabe ¨ a berechnen Sie mit der Hashfunktion h(a) = a mod m eine Beh¨alternummer (den Arrayindex).
Fur die Operation ¨ insert speichern Sie dann die Zahl an der berechneten Arrayposition. Sie mussen keine Dubletten verhindern (d.h. eine Zahl darf mehrfach eingetragen ¨
werden). Falls eine Kollision auftritt (die berechnete Arrayposition ist bereits belegt),
wird unter den ubrigen Beh ¨ ¨altern nach einem freien Platz gesucht. Es gibt verschiedene
Verfahren, die sich in der Reihenfolge der besuchten Beh¨alter unterscheiden. Sie verwenden bitte das lineare Sondieren. Beim linearen Sondieren (linear probing) werden
die ubrigen Beh ¨ ¨alter der Reihe nach auf einen freien Platz untersucht. Die Betrachtung
eines Beh¨alters wird auch als ”
Probe“ bezeichnet. Bei der Suche nach einem Schlussel ¨
mussen wir dann die folgenden F ¨ ¨alle unterscheiden:
1. Falls sich der Schlussel im aufgesuchten Beh ¨ ¨alter befindet, ist die Suche erfolgreich.
2. Falls der aufgesuchte Beh¨alter leer ist, befindet sich der Schlussel nicht in der ¨
Hash-Tabelle.
3. Falls sich ein anderer Schlussel in dem Beh ¨ ¨alter befindet, muss weitergesucht
werden. Dabei muss am Ende der Tabelle die Suche am Anfang der Tabelle
fortgefuhrt werden. ¨
Das bedeutet aber auch, dass wir bei der Delete-Operation besondere Vorkehrungen
treffen mussen. Wir k ¨ ¨onnen nicht einfach ein Element l¨oschen, da Elemente, die sp¨ater
eingefugt wurden, auf der Suche nach einem freien Platz das zu l ¨ ¨oschende Element evtl.
ubersprungen haben. Da die Suche an einer freien Position stoppt, k ¨ ¨onnten wir diese
Elemente dann sp¨ater nicht mehr finden. Bitte kennzeichnen Sie die Beh¨alter daher
mit einem Flag. Dieses Flag soll den Status eines Beh¨alters (z.B. frei oder gel¨oscht) repr¨asentieren. Die Suche uberspringt dann einfach Beh ¨ ¨alter mit einem gel¨oschten Inhalt.
Diese Beh¨alter k¨onnen sp¨ater naturlich wieder gef ¨ ullt werden. F ¨ ur die Darstellung des ¨
Status verwenden Sie bitte eine Aufz¨ahlung. Fur die Arrayelemente definieren Sie bitte ¨
eine geeignete Struktur. Verwenden Sie zudem an geeigneten Stellen die Schlusselw ¨ ¨orter
typedef und static. Wenn nicht genugend Speicherplatz zur Verf ¨ ugung steht, dann ¨
liefert die Funktion insert den Wert 0, ansonsten den Wert 1. Die Funktion delete
WS 2022/2023 1
Prof. Dr. Dirk Wiesmann
Programmierkurs 2
Praktikum 4
gibt den Wert 1 zuruck, wenn der Schl ¨ ussel ¨ a gel¨oscht werden konnte. Ansonsten wird
der Wert 0 geliefert.
Fur ein Array der L ¨ ¨ange 2 sollte die folgende Sequenz z.B. funfmal eine 1 ausgeben: ¨
printf("%d\n", insert(1));
printf("%d\n", insert(3));
printf("%d\n", delete(3));
printf("%d\n", insert(5));
printf("%d\n", member(5));
WS 2022/2023 2