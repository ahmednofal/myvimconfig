Vim�UnDo� �R�kM1z�
�h�����#�����6��   "   Fbool float_lessthan_equals(float a, float b, float epsilon = 0.000001)      +      !       !   !   !    \�rz    _�                             ����                                                                                                                                                                                                                                                                                                                                                             \�c�     �                   �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             \�c�    �                  5�_�                    
        ����                                                                                                                                                                                                                                                                                                                                                             \��      �   
            5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             \��      �               �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             \��    �                 �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             \��    �         !       �              5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             \��A     �         "       �         !    5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             \��J    �          "      �    cout << std::boolalpha << (( value < 1.0 || double_equals(value, 0.0)) && ( value > 0.0 || double_equals(value, 1.0)) )<< endl;5�_�                 	      �    ����                                                                                                                                                                                                                                                                                                                                                             \��S    �          "      �    std::cout << std::boolalpha << (( value < 1.0 || double_equals(value, 0.0)) && ( value > 0.0 || double_equals(value, 1.0)) )<< endl;5�_�   	                   #    ����                                                                                                                                                                                                                                                                                                                               #                 v       \�%#    �          "      �    std::cout << std::boolalpha << (( value < 1.0 || double_equals(value, 0.0)) && ( value > 0.0 || double_equals(value, 1.0)) )<< std::endl;�          "    5�_�                    !   T    ����                                                                                                                                                                                                                                                                                                                               #          o       v       \�%/     �       "   "      Y    return (double_lessthan_equals(value, 1.0) && double_biggerthan_equals(value, 0.0) );5�_�                    !   *    ����                                                                                                                                                                                                                                                                                                                               #          o       v       \�%1     �       "   "      Y    return (double_lessthan_equals(value, 1.0) && double_biggerthan_equals(value, 0.1) );5�_�                    !   +    ����                                                                                                                                                                                                                                                                                                                               #          o       v       \�%2    �       "   "      X    return (double_lessthan_equals(value, .0) && double_biggerthan_equals(value, 0.1) );5�_�                    !   ,    ����                                                                                                                                                                                                                                                                                                                               #          o       v       \�%   	 �       "   "      X    return (double_lessthan_equals(value, .9) && double_biggerthan_equals(value, 0.1) );5�_�                    !   X    ����                                                                                                                                                                                                                                                                                                                               #          o       v       \�%�   
 �       "   "      ]    return (double_lessthan_equals(value, .999999) && double_biggerthan_equals(value, 0.1) );5�_�                    !   X    ����                                                                                                                                                                                                                                                                                                                               #          o       v       \�%�    �       "   "      c    return (double_lessthan_equals(value, .999999) && double_biggerthan_equals(value, 0.0000001) );5�_�                            ����                                                                                                                                                                                                                                                                                                                               #          o       v       \�&�     �               "   #include <string>   #include <cmath>   #include <iostream>           ,std::string bracketed_str(std::string text){       return "( " + text + " )";   }       9std::string str_repr_vert(std::string x, std::string  y){   .    std::string tobebracketed = x + " , " + y;   (    return bracketed_str(tobebracketed);   }       Abool double_equals(double a, double b, double epsilon = 0.000001)   {   %    return std::abs(a - b) < epsilon;   }       Jbool double_lessthan_equals(double a, double b, double epsilon = 0.000001)   {   *    return (a < b || double_equals(a, b));   }       Lbool double_biggerthan_equals(double a, double b, double epsilon = 0.000001)   {   *    return (a > b || double_equals(a, b));   }       #bool between_1_and_0(double value){   }    std::cout << std::boolalpha << (double_lessthan_equals(value, 1.0) && double_biggerthan_equals(value, 0.0) )<< std::endl;   o    /* return (( value < 1.0 || double_equals(value, 1.0)) && ( value > 0.0 || double_equals(value, 0.0)) ); */   b    return (double_lessthan_equals(value, .999999) && double_biggerthan_equals(value, 0.000001) );   }5�_�                    !   *    ����                                                                                                                                                                                                                                                                                                                               #          o       v       \�&�     �       "   "      `    return (float_lessthan_equals(value, .999999) && float_biggerthan_equals(value, 0.000001) );5�_�                    !   )    ����                                                                                                                                                                                                                                                                                                                               #          o       v       \�&�     �       "   "      Z    return (float_lessthan_equals(value, .) && float_biggerthan_equals(value, 0.000001) );5�_�                    !   Q    ����                                                                                                                                                                                                                                                                                                                               #          o       v       \�&�    �       "   "      [    return (float_lessthan_equals(value, 1.) && float_biggerthan_equals(value, 0.000001) );5�_�                       6    ����                                                                                                                                                                                                                                                                                                                                                             \�8
     �         "      =bool float_equals(float a, float b, float epsilon = 0.000001)5�_�                       6    ����                                                                                                                                                                                                                                                                                                                                                             \�8
     �         "      <bool float_equals(float a, float b, float epsilon = 0.00001)5�_�                       6    ����                                                                                                                                                                                                                                                                                                                                                             \�8
    �         "      ;bool float_equals(float a, float b, float epsilon = 0.0001)5�_�                             ����                                                                                                                                                                                                                                                                                                                                                V       \�;#    �                 {    std::cout << std::boolalpha << (float_lessthan_equals(value, 1.0) && float_biggerthan_equals(value, 0.0) )<< std::endl;5�_�      !                 -    ����                                                                                                                                                                                                                                                                                                                               -          F       v   F    \�ru     �         "      Hbool float_biggerthan_equals(float a, float b, float epsilon = 0.000001)5�_�                   !      +    ����                                                                                                                                                                                                                                                                                                                               +          D       v   D    \�ry    �         "      Fbool float_lessthan_equals(float a, float b, float epsilon = 0.000001)5�_�                       6    ����                                                                                                                                                                                                                                                                                                                               +          D       v   D    \�qW    �         "      >bool float_equals(float a, float b, float epsilon = 0.0000001)5�_�                       +    ����                                                                                                                                                                                                                                                                                                                               -          F       v   F    \�q`     �         "      ,bool float_lessthan_equals(float a, float b)5�_�                        -    ����                                                                                                                                                                                                                                                                                                                               -          F       v   F    \�qd    �         "      .bool float_biggerthan_equals(float a, float b)5�_�   	       
            #    ����                                                                                                                                                                                                                                                                                                                               #          o       v       \�%#     �          "    �          "      }    std::cout << std::boolalpha << (double_lessthan_equals(value, 1.0) && double_biggerthan_equals(value, 0.0) )<< std::endl;5�_�   	             
      L    ����                                                                                                                                                                                                                                                                                                                                                             \�$�     �          "      �    std::cout << std::boolalpha << (( value < 1.0 || double_equals(value, 0.1)) && ( value > 0.0 || double_equals(value, 1.0)) )<< std::endl;5�_�   
                    .    ����                                                                                                                                                                                                                                                                                                                                                             \�$�     �          "      �    std::cout << std::boolalpha << (( value < .0 || double_equals(value, 0.1)) && ( value > 0.0 || double_equals(value, 1.0)) )<< std::endl;5�_�                        /    ����                                                                                                                                                                                                                                                                                                                                                             \�$�     �          "      �    std::cout << std::boolalpha << (( value < .9 || double_equals(value, 0.1)) && ( value > 0.0 || double_equals(value, 1.0)) )<< std::endl;5��