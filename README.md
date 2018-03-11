# Dancing Robot
Carmen Milea 244

BOM: https://docs.google.com/spreadsheets/d/1_GYeWjBXVv_4aekasxN6_g4DxXadq2Kq5P1_7F1olAA/edit#gid=819642431 
Video: 

Descriere:

1. Pentru a putea fi utilizat, robotul trebuie conectat cu ajutorul unui cablu Mini USB to USB.

2. Dupa conectare, deschidem IDE-ul Arduino -> Serial Monitor. 

3. Va fi afisat urmatorul mesaj:

**Robo is ready!!**
**Enter 1 ->  Move style 1**
**Enter 2 ->  Move style 2**
**Enter 3 ->  Move style 3**

4. Astfel, robotul este capabil sa faca 3 tipuri de miscari. Petru ca robotul sa execute o anumita miscare, trebuie introdus un numar din interval [1,3] si apasat butonul "Send".

5. Dupa aceasta, robotul va executa pentru o anumita miscarea corespunzatoare numarului ales, iar urmatorul mesaj va fi afisat (unde X este numarul ales):

**Doing move X**

6. Dupa ce robotul a terminat de executat o miscare, urmatorul mesaj va fi afisat (unde X este numarul ales):

**Done with move X**

7. Dupa ce robotul se opreste, un nou numar poate fi selectat, iar miscarea aleasa va fi executata. Daca este selectat un nou numar, insa robotul nu a terminat de executat miscarea curenta, noul numar nu va fi luat in considerare.



