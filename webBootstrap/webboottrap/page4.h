const char htmlPage4[] PROGMEM = R"=====(
<html>
<head>
    <meta http-equiv="content-type" content="text/html;charset=UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/css/bootstrap.min.css">
    <script src="https://code.jquery.com/jquery-3.4.1.slim.min.js"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/js/bootstrap.min.js"></script>
    <title>Hello from HTTP Server ESP8266 - Page4</title>
</head>

<body>
    <div class="container">
        <h1>Wemos D1 HTTP Server Led stripe.</h1>
        <p>Geir sin bootstrap. AV</p>
        <p>
            <div class="container">
              <div class="row">
                <div class="col-sm">
                  <a class="btn btn-primary" href="/" role="button">Hvit</a>
                </div>
                <div class="col-sm">
                  <a class="btn btn-danger" href="/page2" role="button">Rød</a>
                </div>
                <div class="col-sm">
                  <a class="btn btn-success" href="/page3" role="button">Grønn</a>
                </div>
                <div class="col-sm">
                  <a class="btn btn-dark disabled" href="/page4" role="button">Av</a>
                </div>
              </div>

              <div class="row">
                <div class="col-sm">
                  
                </div>
                <div class="col-sm">
                  
                </div>
                <div class="col-sm">
                                 
                </div>
                <div class="col-sm">
                <div class="spinner-border text-dark" role="status"> <span class="sr-only">Loading...</span></div>                   
                </div>
              </div>              
            </div>          
            
            
            
        </p>

        <p><div class="alert alert-success" role="alert">Copyright (C) 2020 Geir</a>. </div></p>
    </div>
</body>

</html>
)=====";
