void mymemdump(FILE * fd, char * p , int len) {

    // Add your code here.

    // You may see p as an array.

    // p[0] will return the element 0 

    // p[1] will return the element 1 and so on



    int i, j, d, k, m, counter = 0;

    char c1;

    int c;



   // fprintf(fd, "0x%016lX: ", (unsigned long) p); // Print address of the beginning of p. You need to print it every 16 bytes

       fprintf(fd, "0x%016lX: ", (unsigned long)& p[0]);





    for (i=0; i <= len; i++) {



         if((((i) % 16 == 0) && (i != 0)) || (i == len)) {

                if(i == len) {

                        j = m;

                        counter = len -m;

                }

                else {

                        j = i -16;

                        counter = 16;

                }

                k = 0;



                while(k < counter) {



                        if(k == 0) {

                                fprintf(fd, " ");

                        }

                        d = p[j];

                        c1 = p[j];

                        fprintf(fd, "%c", (d >= 32 && d <= 127)?d:'.');

                        k++;

                        j++;

                        m = i;

 }



                if((k < 16) || (m == len)) {

                        fprintf(fd, "\n");

                        return(0);

                }

                else {

                        fprintf(fd,"\n");

                        fprintf(fd, "0x%016lX: ", (unsigned long) &p[i]);

                }

        }

        c = p[i]&0xFF; // Get value at [p]. The &0xFF is to make sure you truncate to 8bits or one byte.



        // Print first byte as hexadecimal

        fprintf(fd, "%02X ", c);









      // if (i % 16 == 0 ) {

        //  fprintf(fd,"\n");

          //fprintf(fd, "0x%016lx: ", (unsigned long) p);

      }

      fprintf(fd, "\n");

    // fprintf(fd,'\n');

    }