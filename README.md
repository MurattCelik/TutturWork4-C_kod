##### TutturWork4-C_KOD
###SHELL'DE C PROGRAMLAMA
**GCC(GNU COMPİLER COLLECTİON)** 
    
     Gerçek ismini GNU C Compiler kelimelerinden almaktadır.Kısaca GCC C derleyicisi için oluşturulmuş bir pakettir.

Unix işletim sistemlerinde C programlama yapmak istediğimizde Shell'de GCC yoksa C'yi derleyebilmek için bu paket indirilmelidir.

Paketimizi indirdikten sonra GCC sürümünü öğrenmek için aşağıdaki komutla öğrenebilriz.

**gcc -v**
 
        C kodlarımız herhangi bir text editöründe yazdıktan sonra örnek olması açısından ilk.c olarak kaydediyoruz.
        
 Daha sonra derlemek için aşağıdaki komutla derleyebiliriz.

**gcc -o ilk.c**         
 
        Ancak derleme yaparken uygulamamıza herhhabgi bir ad vermedik o yüzden otomatikmen öntanımlı olarak a.out dosyasını oluşturur.
        
Uygulamamızı derlerken kendi ismiyle derleyebilmemiz için -o seçeneği kullanılır.-o seçeneği parametre olarak dosya çıkış adını alır.

Kendi istediğimiz isimle derlemek için aşağıdaki komutla derleyebilirizi

**gcc ilk.c -o ilk**          
 
        Uygulamamızı yazarken bazı kütüphaneler mevcut ancak uyugulamamızı oluştururken gerekli kütüphaneler olmayabilir.
        
Kütüphanelere ulaşabilmek için kütüphaneleri içeren dizine gitmemiz gerekiyor bu dizin genellikle /usr/include/ dizininde oluyor.

Eğer bizim istediğimiz kütüphane yoksa bunu indirip oluşturmalıyız ve daha sonra bu kütühaneyi rahatça kullanabiliriz.
