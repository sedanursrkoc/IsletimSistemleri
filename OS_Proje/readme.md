/  
/	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;LİNUX KABUK PROGRAMI  
/  
/	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Beyza Selimoğlu G191210086 1A  
/	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Kübra Yılmaz B181210023 1A  
/	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Merve Sarı B181210074 1A  
/	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Sedanur Sarıkoç B181210110 1A  
  
TASARIMA GENEL BAKIŞ  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Programımız çalıştırılmaya başlandığı anda kullancının shell komutunu veya shell komutu ile birlikte içinde komutların bulunduğu 
herhangi bir txt dosya isminin girilmesi bekleniyor. Başka bir komut girildiğinde uygun bir hata mesajı döndürülüyor. Programımızda 
interaktif ve batch modu bulunmakta. Kullanıcının shell komutunu girmesi ile interaktif mod başlatıyor.
İnteraktif modda promt ekranı görüntüleniyor. Kullanıcı promt yanına en fazla 512 krakterden oluşan komut girebilmektedir.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Kullancının shell komutunun yanında herhangi bir dosya ismini belirtmesi ile birlikte batch moda giriliyor.
Batch modunda belirtilen dosya bulunuyor ise dosyadan okunan her satır (komut) çalıştırmadan önce ekrana yazdırılıyor ve 
içindeki komutlar icra ediliyor, dosya bulunmuyor ise dosya bulunmaması ile ilgili hata döndürülüyor.
Her iki modda da quit komutu kullanıldığında çıkılıyor. Batch dosyasının sonuna ulaşıldığında veya kullanıcı 
“Ctrl-D” tuşlarına iki kere basarsa yeni komut almayı durdurur. İnteraktif modda komut girişinde veya batch dosyasında, 
her satır “;” ile ayrılmış birden çok komut içeren satırı sıralı olarak çalıştırır. Kabuk, tüm bu komutların yürütülmesi 
tamamlanana kadar bir sonraki promptu yazdırmıyor veya daha fazla girdi almıyor. 

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;İnteraktif modda boş satırda enter tuşuna basılması durumunda bir alt satıra geçer ve çalışmaya devam eder. Komut içermeyen satırlarda
(;; gibi) program uygun bir hata mesajı yazdırır ve program çalışmaya devam eder. 

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Komutların icrası için “fork()”, “execvp()” ve “wait()”/”waitpid()” sistem çağrılarını kullandık.
	
ÖZEL DURUMLAR  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Kabuğumuz noktalı virgül arasındaki komutları sırasıyla çalıştırırken hatalı bir komut ile karşılaştığında ekrana hata mesajı
yazdırıyor  ve ondan sonraki komutları da çalıştırmıyor ancak program çalışmaya devam ediyor. Komut içermeyen bir ifade ile karşılaştığında 
ise ekrana hiçbir şey yazdırmaz ve ondan sonraki komutlar da çalışmaz ancak program çalışmaya devam eder.
	
BİLİNEN HATALAR VEYA SORUNLAR  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Kabuğumuzda batch modunda komutlar eş zamanlı olarak değil sırasıyla çalıştırılıyor.  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Komutlar arasında birden fazla boşluk olduğunda komutu çalışmaz ve hata mesajı yazdırılır.
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
