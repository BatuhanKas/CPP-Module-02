
# CPP MODULE 02

Bu projenin amaci, bize sayilari bit kaydirarak islemler yaptirmaktir.
## Ex 00 - Orthodox Canonical Form

Ilk egzersizde sadece Orthodox Canonical Form yapisinda bir Class yapisi olusturdum.

getRawBits fonksiyonu bana sayimi return ediyor.

setRawBits fonksiyonu benim sayima deger atiyor.

Sadece get ve set islevleri.


## Ex 01 - Bit kaydirma islemleri

Bu kisimda bitwise kaydirma operatorunu kullanarak sayilari bit kaydirdim.

int bir degeri direkt olarak "<<" operatorunu kullanarak bitwise kaydirabiliyoruz.

Fakat float bir degeri "<<" operatorunu kullanarak bit kaydiramayiz.

Bunun sebebi ise float bir degerin noktadan sonra devami olmasidir.

(1 << bits) (bits = 8) (256) yaparak 1 sayisini 8 bit kaydiriyorum. 1'i 8 bit kaydirinca 256 olur. Sonra float sayi ile carparak bit kaydiriyorum.

## Ex 02 - Operator Overloading islemleri

Burada bildigimiz operator overloading islemlerini yaptim.

+,-,*,/ bolu aritmetik operatorleri falan hep ayirdim

++p ve p++ gibi pre increment / post increment operatorleri acikladim.

[NOTION NOTLARIMIN LINKI BURADA](https://alike-dirigible-d37.notion.site/CPP-Notlarim-86e5660b50d740b5bd6b8803c8ae99f0)

yukaridaki link benim cpp notlarim. Cogu seyi yukaridaki linkte anlattim. Daha sonra burayi tekrar duzenleyecegim. Sagdaki Scroll'u kaydirarak gerekli yere direkt olarak ulasabilirsin.

Sadece bu kisimda detayli bir sekilde aciklayacagim.

## Ex 03 - 3 Noktasi bilinen bir ucgenin, Nokta ucgenin icindemi disindami oldugunu hesaplama

Bu kisimda Sarus Kuralini kullandim.

Direkt Repoda Excalidraw linki var. Onu indir ac kural zaten icerisinde var ve nasil hesapladigim orada yaziyor.

Kisaca 3 noktasi bilinen ucgenimin alanini hesapliyorum.

Daha sonra noktayi bir kenar olarak kabul edip, diger ucgenimin kenarlarini kullanarak alan hesapliyorum.

Eger ucgenimin alani ile, Noktayi kullanarak elde ettigim alan esitse, nokta ucgenin icindedir.

Fakat Noktanin alani ile ucgenin alani esit degilse, Nokta ucgenin icinde degildir.

Ozellikle ucgenin koselerine ya da dogrunun uzerine gelip gelmedigi durumlarida kontrol ettim hepsi calisiyor.

2x2 Determinant kullandim Hepsi Excalidrawda var.
