Koda apraksts
Sākumā programma prasa ievadīt kādu simbolu rindu. Pēc tam lasam ieejas datus un ierakstam to str masīvā. Pēc tam pievienojam masīvu strWithoutSpaces un vēl pievienojam mainīgo j . PArbaudam masīvu un , ja simbols nav atstarpe, ierakstam to masīvā strWithoutSpaces. Visi parēji cikli tiek veidoti izmantojot datus no strWithoutSpaces
un tāpēc atstarpes netiek izmantotas gala statistikā.
Lai saņemtu sakārtoto simbolu rindu alfabēta secībā izmantojam divas funkcijas (compare) un (qsort). Funkcijas compare rezultāts ir int un var būt <0, >0 vai =0.
Ja rezultāts<0, tas nozīme, ka pirmais simbols ir mazāks, nekā otrais (pēc ASCII tabulas), ja rezultāts>0, tad otrādi, Ja rezultāts ir 0, tad simboli ir vienādi.
Lai nosāktu, cik simbolu ir rindā, mēs izmantojam funkciju strlen ( no <string.h>).
Pēc tām atrodam min un max vērtības. Tā, ka rinda jau ir sakārtota augošā secībā (pēc ASCII tabulas vērtībām), mēs vienkārši ņemam pirmo un 
pēdejo vērību (char min = str[0], max = str[len - 1];)
Lai atrastu vidējo vērtību(average value), izmantojam (float avg = (float)sum / len;). Mēs liekam (float) pirms sum, lai saņemtu rezultātu floatā ( sum ir integer),
jo vidēja vērtība ne vienmēr ir vesels skaitlis.
Lai atrastu mediānu, mēs parbaudam simbolu skaitu. Ir divas situācijas, kad simbolu skaits ir pāra vai nepāra skitlis.
Lai atrastu modu, mēs izmantojam masīvus. Masīvā frequency glabās katra simbola frekvence, jeb cik reizes mēs satiekāmies ar tādu simbolu visā rindā.
For cikls parbauda katro saņemto vērtību, un katram simbolam atbilstošais indekss frequency masīvā tiek palielināts par 1.
Cits for cikls parbauda visu frequency masīvu un katrai vērtībai, kas ir lielāka par 0, pārbauda, vai tā ir jauna modas vērtība.
Masīvs mode tiek izmantots, lai saglabātu modu vērtības, un mainīgais modeCount tiek izmantots, lai saglabātu modu vērtību skaitu.
Ja pašreizējā frekvence ir lielāka par līdz šim novēroto maksimālo frekvenci, maksimālā frekvence tiek atjaunināta, modeCount tiek iestatīts 
uz 0 un pašreizējā vērtība tiek pievienota mode masīvam.
Ja pašreizējā frekvence ir vienāda ar maksimālo frekvenci, modeCount vērtība tiek palielināta un pašreizējā vērtība tiek pievienota mode masīvam. 
Ši metode ir ērta, nav tik gara un pat nosāka vairākas modas.
Programmas beigās mēs izvadam visas vērtības uz ekrānu, un arī saglabam modu skaitu un vērtības atsevišķā failā, lai pēc tām ar gnuplot palidzību uzzīmētu histogramu.
Pedēja rindā failā ir atstarpe. To mēs neizmantojam histogramā, jo ņemam tikai tās vērtības, kas nav vienādas ar 32( pēc ASCII tabulas).

![image](https://user-images.githubusercontent.com/112925770/213306000-f32e1c48-bfcb-4506-8c66-625ad0402efb.png)
![image](https://user-images.githubusercontent.com/112925770/213306050-64267b26-c464-492e-a6e4-0cffabce3b94.png)



PALDIES PAR UZMANĪBU!!! LŪDZU, IELIECIET LABU ATZĪMI!!! Programmas ir ļoti labas un strādā!!!

![image](https://user-images.githubusercontent.com/112925770/212774427-0b0b32ec-db41-4055-b957-63fc42891e5b.png)


Avoti:
J.Ziemelis Ievads algoritmu valodā C
