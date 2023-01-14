set term png
set output 'picture2.png'

set key bmargin center horizontal Right noreverse enhanced autotitle box lt black linewidth 1.000 dashtype solid
set samples 400, 400
set grid
set title "Saknes" 
set title  font ",20" textcolor lt -1 norotate

x0 = 0
plot [-5:5] [-3:3] cos(x) lc rgb "dark-green", x0 lc rgb "pink"
