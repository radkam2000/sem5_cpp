<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Pierwszy skrypt w PHP</title>
    </head>
    <body>
        <?php
            // for($i=1; $i<9; $i++){
            //     print("<img src='obrazki/obraz$i.JPG' alt='obraz$i' />" );
            // }
            function galeria($rows, $cols)
            {
                $n=1;
                for($i=1; $i<=$rows; $i++)
                {
                    for($j=1; $j<=$cols; $j++)
                    {
                        print("<img src='obrazki/obraz$n.JPG' alt='obraz$n' width=20%; height=200dp;/>" );
                        $n++;
                    }
                    echo "</br>";
                }
            }
            galeria(2,4);
        ?>
    </body>
</html>