set terminal png size 600,600
set output 'histogram_ascii5.png'
set yrange [0:*]
set title "ASCII Frequency Histogram" font ",20" textcolor lt -1 norotate
set xlabel "ASCII VALUES" font ",10" textcolor lt -1 norotate
set ylabel "Freq" font ",15" textcolor lt -1 norotate
set style fill solid border 0.5
plot 'outputt.txt' using 1:xtic(2) with boxes notitle
