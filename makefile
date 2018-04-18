pos.png : tray.dat
	python3 SH_graph.py

vel.png : tray.dat
	python3 SH_graph.py

phase.png : tray.dat
	python3 SH_graph.py

tray.dat : SH_gravity
	./SH_gravity

SH_gravity : SH_gravity.cpp
	g++ SH_gravity.cpp -o SH_gravity

clean:
	rm -f *.png
	rm -f *.dat
