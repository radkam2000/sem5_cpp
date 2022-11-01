<!DOCTYPE html>
<!--
Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
Click nbfs://nbhost/SystemFileSystem/Templates/Scripting/EmptyPHPWebPage.php to edit this template
-->
<html>
    <head>
        <meta charset="UTF-8">
        <title>"Typy w PHP"</title>
    </head>
    <body>
        <?php
            $z[0]=1234;
            $z[1]=567.789;
            $z[2]=1;
            $z[3]=0;
            $z[4]=true;
            $z[5]="0";
            $z[6]="Typy w PHP";
            $z[7]=[1, 2, 3, 4];
            $z[8]=[];
            $z[9]=["zielony", "czerwony", "niebieski"];
            $z[10]=["Agata", "Agatowska", 4.67, true];
            $data = new DateTime();
            
            function printType($zmienna){
                print("Typ $zmienna: ".gettype($zmienna));
            }
            //printType($z1);
            for($i=0; $i<7; $i++){
                print("z$i=$z[$i]");
                echo "</br>";
                printType($z[$i]);
                echo "</br></br>";
            }
            for($i=7; $i<11; $i++){
                print("z$i=Array");
                echo "</br>";
                print("Typ z$i: Array");
                echo "</br>";
                print("Liczba elementow: ".count($z[$i]));
                echo "</br></br>";
            }
            print("data= ");
            print(var_dump($data));
            echo "</br></br>";
        ?>
    </body>
</html>
