set term png
set output 'kartinka3.png'

set key bmargin center horizontal Right noreverse enhanced autotitle box lt black linewidth 1.000 dashtype solid
set samples 400, 400
set grid
set title "Funkcijas atvasinājumi" 
set title  font ",20" textcolor lt -1 norotate

plot "derivativess.dat" every ::1 using 1:2 with lines title "cos(sqrt(x))",\
     "derivativess.dat" every ::1 using 1:3 with lines title "cos'(sqrt(x)) (anal. forma)",\
     "derivativess.dat" every ::1 using 1:4 with lines title "cos'(sqrt(x)) (diff. forma)",\
     "derivativess.dat" every ::1 using 1:5 with lines title "cos''(sqrt(x)) (anal. forma)",\
     "derivativess.dat" every ::1 using 1:6 with lines title "cos''(sqrt(x)) (diff. forma)"
