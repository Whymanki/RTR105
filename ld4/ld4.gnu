set term png
set out 'graph4.png'
set key bmargin center horizontal Right noreverse enhanced autotitle box lt black linewidth 1.000 dashtype solid
set samples 400, 400
set grid
set title "Integrate cos(sqrt(x))" 
set title  font ",20" textcolor lt -1 norotate
set style fill transparent solid 0.3
plot [0:10] cos(sqrt(x)) with filledcurves above y1=0 lc rgb  '#00ffff', cos(sqrt(x)) with filledcurves below y1=0 lc rgb  '#00ffff', cos(sqrt(x)) w l lc rgb '#000000'
