cd Graphik
sed 's#/home/david/projects/Graphik/Graphik/#./#' Graphik.mk > build.mk
sed -i 's#/home/david/projects/Graphik#./../#' build.mk
sed -i 's#/home/david/projects/Graphik/Graphik#./#' build.mk

make -f build.mk

rm build.mk

cd ..
cd app
sed 's#/home/david/projects/Graphik/app/#./#' app.mk > build.mk
sed -i 's#/home/david/projects/Graphik#./../#' build.mk
sed -i 's#/home/david/projects/Graphik/app#./#' build.mk


make -f build.mk

rm build.mk
cd ..
