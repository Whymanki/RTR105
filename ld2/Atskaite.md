Algoritms tika veidots uz cos(sqrt(x)) funkcijas. 
Tas sākuma veido dialogu ar lietotāju, kur lietotājs sniedz intervālu no a(kas ir lielāks par 0) un b, precizitāti, vērtību c = f(x) kuru vēlas aprēķināt pēc dihotomijas metodes. 
Algoritmā tiek izmantota dihotomijas metode, jeb bisection method.
Ja uzdotā intervālā no līdz b ir vairākas sāknes vai sakņu vispār nav, tad programm informēs lietotāju. Tas parasti notiek, ja ir izvēlēts ļoti liels intervāls (piemēram no 0 līdz 100), jo cos(cqrt(x)) ir periodiska funkcija vai, ja ir izvēlēta nepareiza vērtība c, kura neatbilst vērtību apgabalam. Programma arī izvada iterāciju skaitu, jeb soļu skaitu, kas ir vajadzīgs, lai veiktu aprēķinus.

![image](https://user-images.githubusercontent.com/112925770/213274944-934ee0dd-df86-4f92-a102-20fba6619d9c.png)
![image](https://user-images.githubusercontent.com/112925770/213275055-9c149d2f-80a1-4ac6-b57a-4e15b2eb7ebf.png)


Avoti:
https://www.javatpoint.com/bisection-method-in-c

https://www.codewithc.com/c-program-for-bisection-method/

https://en.wikipedia.org/wiki/Bisection_method
