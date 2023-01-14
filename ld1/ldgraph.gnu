set term png
set output 'picture.png'

set key bmargin center horizontal Right noreverse enhanced autotitle box lt black linewidth 1.000 dashtype solid
set samples 400, 400
set grid
set title "Funkcija cos(sqrt(x))" 
set title  font ",20" textcolor lt -1 norotate

s0(x) = 1
s1(x) = s0(x) + (-1*x)/(2)
s2(x) = s1(x) + (1*x*x)/(4*3*2)
s3(x) = s2(x) + (-1*x*x*x)/(6*5*4*3*2)
s4(x) = s3(x) + (1*x*x*x*x)/(8*7*6*5*4*3*2)
plot [-4:4] cos(sqrt(x)), s0(x), s1(x), s2(x), s3(x)