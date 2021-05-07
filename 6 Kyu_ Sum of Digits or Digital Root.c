int digital_root(int num) {
 return num == 0 ? 0 : ( num % 9 == 0 ? 9 : ( num % 9 ));
}


/*
Diberikan n, ambil jumlah digit dari n. Jika nilai tersebut memiliki lebih dari satu digit,
lanjutkan mengurangi dengan cara ini sampai nomor satu digit dihasilkan. 
Masukan akan berupa bilangan bulat non-negatif.


Examples
    16  -->  1 + 6 = 7
   942  -->  9 + 4 + 2 = 15  -->  1 + 5 = 6
132189  -->  1 + 3 + 2 + 1 + 8 + 9 = 24  -->  2 + 4 = 6
493193  -->  4 + 9 + 3 + 1 + 9 + 3 = 29  -->  2 + 9 = 11  -->  1 + 1 = 2

*/
