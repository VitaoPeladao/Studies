       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROGRAMAPAROUIMPAR.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
           77 X PIC 99.
           77 RESULT PIC 99.
       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
           DISPLAY "Insira um NUMERO".
           ACCEPT X.
           DIVIDE X BY 2 GIVING X REMAINDER RESULT
           IF RESULT = 0
               DISPLAY "Numero Par"
               CONTINUE
           ELSE
               DISPLAY "Numero Impar"
           END-IF.
           STOP RUN.
       END PROGRAM PROGRAMAPAROUIMPAR.
