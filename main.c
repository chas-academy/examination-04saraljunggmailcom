        #include <stdio.h>

        float print_average(char name[]){
            int score, sum = 0;
            for (int i = 0; i < 13; i++){
                scanf("%d", &score);
                sum += score;
            }
            float average = sum / 13.0f;
             return average;
            
            }

            static void cap(char s[]){
                if (s[0] >= 'a' && s[0] <= 'z') s[0] -= 32;
                for (int i = 1; s[i]; i++)
                if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
            }
            
            int main(void) {
                char name1[11];
                char name2[11];
                char name3[11];
                char name4[11];
                char name5[11];

                scanf("%10s", name1);
                cap(name1);
                float m1 = print_average(name1);
               
                scanf("%10s", name2);
                cap(name2);
                float m2 = print_average(name2);
                
                scanf("%10s", name3);
                cap(name3);
               float m3 = print_average(name3);
              
                scanf("%10s", name4);
                cap(name4);
               float m4 = print_average(name4);

               scanf("%10s", name5);
               cap(name5);
               float m5 = print_average(name5);

                char *bestName = name1;
                float bestAvg = m1;
                if (m2 > bestAvg) { bestAvg = m2; bestName = name2;}
                if (m3 > bestAvg) { bestAvg = m3; bestName = name3;}
                if (m4 > bestAvg) { bestAvg = m4; bestName = name4;}
                if (m5 > bestAvg) { bestAvg = m5; bestName = name5;}

                printf("%s\n", bestName);

                float groupAvg = (m1 + m2 + m3 + m4 + m5) / 5.0f;
                if (m1 < groupAvg) printf("%s\n", name1);
                if (m2 < groupAvg) printf("%s\n", name2);
                if (m3 < groupAvg) printf("%s\n", name3);
                if (m4 < groupAvg) printf("%s\n", name4);
                if (m5 < groupAvg) printf("%s\n", name5);




            return 0;
        }

