        #include<stdio.h>
        int main()
        {
            int rodadas, i, v1, v2, aux1= 0,aux2= 0;

            scanf("%d", &rodadas);

            for(i = 0; i < rodadas; i++ )
            {
                scanf("%d%d", &v1, &v2);
            if(0 < v1, v2 < 10)
            {


                if(v1>v2)
                {
                    aux1++;
                }else {
                    aux2++;
                }
                if(rodadas == 0)
                {
                    break;
                }
            }
            }

            printf("%d %d", aux1, aux2);
            return 0;
        }
