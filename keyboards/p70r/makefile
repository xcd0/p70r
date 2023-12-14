all:
	make clean
	make build
build:
	make -C ../.. p70r:default
show:
	make -C ../.. p70r:default:show_all_features
lint:
	qmk lint -kb p70r
clean:
	make -C ../.. clean

push:
	git add -A .
	git commit -m tmp
	git push
