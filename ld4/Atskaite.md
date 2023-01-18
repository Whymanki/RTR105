Algoritms tika rēķināts pēc funkcijas cos(sqrt(x)).
Sākumā programma saņem intervālus a un b, kuros jāaprēķinā integrālis un precizitāti, ar kuru jārēķinā.
Integrāļa aprēķināšanai tiek izmantotas trīs dāžadas metodes( taisnstūru metods, trapeču metods un Simpsona metods).  Lejā ir pierādījums no Wolphram alpha un arī grafiks, kurš ir attēlots ar gnuplot palidzību. Programmā mes izmantojam vertību h ,jeb platumu, kuru samazinām katru reizi ciklā. Pēc tam mēs atņemam no jauna integrāļ iepriekšējo līdz tām brīdim, kad to starpības absolūta vertība vairs nebūs lielāka par lietotāja ievadītu precizitāti.
![image](https://user-images.githubusercontent.com/112925770/213279424-ac0173af-5264-4179-9656-e88b44fe387c.png)
![image](https://user-images.githubusercontent.com/112925770/213279592-1ba84da5-43b4-4193-88b9-cbcb67686f7d.png)
![image](https://user-images.githubusercontent.com/112925770/213279633-68e6c180-5cab-4fbc-90f8-22cb6d10c385.png)


Avoti:
https://estudijas.rtu.lv/file.php/252149/RTR105_2019_2020_L20_20200118_14_51.pdf

https://www.youtube.com/watch?v=7EqRRuh-5Lk

https://www.youtube.com/watch?v=Rn9Gr52zhrY

https://www.freecodecamp.org/news/simpsons-rule/
