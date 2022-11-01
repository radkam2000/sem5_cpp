<!DOCTYPE html>
<!--
Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
Click nbfs://nbhost/SystemFileSystem/Templates/Scripting/EmptyPHPWebPage.php to edit this template
-->
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <?php
            $z1=1234;
            $z2=567.789;
            $z3=1;
            $z4=0;
            $z5=true;
            $z6="0";
            $z7="Typy w PHP";
            $z8=[1, 2, 3, 4];
            $z9=[];
            $z10=["zielony", "czerwony", "niebieski"];
            $z11=["Agata", "Agatowska", 4.67, true];
            $z12 = new DateTime();
            //z foreach i ifami w jednej tab
            
            for($i=1; $i<8; $i++){
                print("z$i = ".${'z'.$i});
                echo "</br>";
            }
            for($i=8; $i<13; $i++){
                print("z$i = ");
                print(var_dump(${'z'.$i}));
                echo "</br>";
            }
            
            function printVariables($var){
                echo is_array($var)?"hg";
                echo is_int($var);
                echo is_string($var);
                echo is_bool($var);
                echo is_numeric($var);
                echo is_object($var);
            }
            
            print(is_bool($zm4));
            print("</br>");
            print(is_bool($zm5));
            print("</br>");
            print(is_int($zm1));
            print("</br>");
            print(is_int($zm3));
            print("</br>");
            print(is_numeric($zm2));
            print("</br>");
            print(is_string($zm7));
            print("</br>");
            print(is_array($zm8));
            print("</br>");
            print(is_array($zm10));
            print("</br>");
            print(is_array($zm11));
            print("</br>");
            print(is_object($zm12));
            print("</br>");
            print("</br>");

            print($zm4 == $zm6);
            print("</br>");
            print($zm4 === $zm6);
            print("</br>");
            print($zm5 == $zm3);
            print("</br>");
            print($zm5 === $zm3);
            print("</br>");
            print("</br>");

            var_dump($zm10);
            print("</br>");
            print_r($zm11);
            print("</br>");
        ?>
    </body>
</html>
