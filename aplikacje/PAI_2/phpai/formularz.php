<!DOCTYPE html>
<!--
Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
Click nbfs://nbhost/SystemFileSystem/Templates/Other/html.html to edit this template
-->
<html>

<head>
    <title>Formularz PHP</title>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" type="text/css" href="index.css" media="screen" />
</head>

<body>
    <a href="http://localhost/phpai/galeria.php">Galeria</a>
    <a href="http://localhost/phpai/index.php">Index</a>
    <a href="http://localhost/phpai/typy.php">Typy</a>
    <a href="http://localhost/phpai/formularz.html">Formularz
        <a href="http://localhost/phpai/formularz.php">Formularz PHP</a><br>
        <h2>Formularz zamówienia</h2>
        <form method="POST" action="./odbierz4.php">
            <table>
                <tr>
                    <td> Nazwisko: </td>
                    <td><input name="nazwisko" /></td>
                </tr>
                <tr>
                    <td> Wiek: </td>
                    <td> <input name="wiek" /></td>
                </tr>
                <tr>
                    <td> Państwo: </td>
                    <td>
                        <select name="countries" id="countries">
                            <option value="Polska">Polska</option>
                            <option value="Anglia">Anglia</option>
                            <option value="Hiszpania">Hiszpania</option>
                        </select>
                    </td>
                </tr>
                <tr>
                    <td> Adres email: </td>
                    <td><input name="email" /></td>
                </tr>
            </table>

            <h3>Zamawiam tutorial z języka: </h3>

            <?php
            $jezyki = ["C", "CPP", "Java", "C#", "HTML", "CSS", "XML", "PHP", "JavaScript"];

            foreach ($jezyki as $jezyk) {
                print "<input type='checkbox' name='jezyki[]' value='$jezyk'/> $jezyk";
            }

            ?>

            <br>

            <h3>Sposób zapłaty: </h3>
            <p>
                <input name="eurocard" type="radio" />eurocard
                <input name="visa" type="radio" />visa
                <input name="przelew" type="radio" />przelew bankowy <br />
            </p>
            <br>

            <input type="submit" name="wyslij" value="Wyslij" />
            <input type="reset" name="reset" value="Anuluj" /><br />

        </form>

</body>

</html>