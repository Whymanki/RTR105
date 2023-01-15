set term png
set out 'picture4.png'
set key bmargin center horizontal Right noreverse enhanced autotitle box lt black linewidth 1.000 dashtype solid
set samples 400, 400
set grid
set title "Integrate x^2" 
set title  font ",20" textcolor lt -1 norotate
set style fill transparent solid 0.3
plot [0:10] x*x with filledcurves above y1=0 lc rgb  '#00ffff'
