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
//            $nazwa='obraz1';
//            print("<img src='obrazki/$nazwa.JPG' alt='$nazwa' />");
            function galeria($rows, $cols){
                $n = 1;
                for($i=0; $i<$rows; $i++){
                    for($j=0; $j<$cols; $j++){
                        print("<img src='obrazki/obraz$n.JPG' alt='obraz$n' width=20%/>");
                        $n++;
                    }
                    echo "</br>";
                }
            }
            //galeria(3,3);
            //galeria(4,2);
            galeria(2,4);
        ?>
    </body>
</html>
