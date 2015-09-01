For individual images
find
<img src="./img/2-B52/39-DSCF6902.jpg">
convert to
<img class="lazy" data-original="./img/2-B52/39-DSCF6902.jpg"  width="1600" height="900">

first I do this
FIND FIELD
<img src="./img/2-B52/
REPLACE FIELD
<img class="lazy" data-original="./img/2-B52/

then I do this
FIND FIELD
jpg">
REPLACE FIELD
jpg"  width="1600" height="900">





For the gallery

find ./img/2-B52/26-DSC_0641.jpg
in
<img src="./img/2-B52/26-DSC_0641.jpg">
convert to
<img class="gallery-cell-image" data-flickity-lazyload(="./img/2-B52/thumbs/26-DSC_0641.jpg" srcset="./img/2-B52/26-DSC_0641.jpg 3x, ./img/2-B52/thumbs/26-DSC_0641.jpg) 1x">

first i do this: 
FIND FIELD
((?=\.)(.*)(?="))
REPLACE FIELD
\1" srcset="\1 3x, \1 1x

Just hit REPLACE till done


then
REPLACE
<img src=
with
<img class="gallery-cell-image" data-flickity-lazyload=


then I enter these
FIND FIELD
/img/2-B52
REPLACE FIELD
/img/2-B52/thumbs

Then do this till done
REPLACE
REPLACE
FIND


