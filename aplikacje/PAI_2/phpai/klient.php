<!DOCTYPE html>
<!--
Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
Click nbfs://nbhost/SystemFileSystem/Templates/Scripting/EmptyPHPWebPage.php to edit this template
-->
<html>

<head>
    <meta charset="UTF-8">
    <title>Dane Klienta</title>
</head>

<body>
    <a href="http://localhost/phpai/galeria.php">Galeria</a>
    <a href="http://localhost/phpai/index.php">Index</a>
    <a href="http://localhost/phpai/typy.php">Typy</a>
    <a href="http://localhost/phpai/formularz.html">Formularz
        <a href="http://localhost/phpai/formularz.php">Formularz PHP</a><br>
        <h4>Poniżej znajdują się dane odebrane z formularza:</h4>
        <p>
            Nazwisko: <?php echo $_REQUEST['nazwisko']; ?> <br />
            Wiek: <?php echo $_REQUEST['wiek']; ?> <br />
            E-mail: <?php echo $_REQUEST['email']; ?> <br />
            Kraj: <?php echo $_REQUEST['countries']; ?> <br />
        </p>
</body>

</html>