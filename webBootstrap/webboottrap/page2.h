const char htmlPage2[] PROGMEM = R"=====(
<html>
<head>
  <title>Bootstrap LED</title>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.4.1/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
  <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.16.0/umd/popper.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.4.1/js/bootstrap.min.js"></script>
</head>
<body>

<div class="jumbotron text-center">
  <h1>Wemos D1 HTTP Server Led stripe.</h1>
  <p>Geir sin bootstrap. Rødt Lys.</p> 
</div>
  
<div class="container">
            <div class="container">
              <div class="row" >
                <div class="col-sm">
                  <table class="table table-borderless text-center">
                    <tr><td><a class="btn btn-primary" href="/" role="button">Hvit</a></td></tr>
                    <tr><td></div></td></tr>
                  </table>                  
                </div>
                
                <div class="col-sm">
                  <table class="table table-borderless text-center">
                    <tr><td><a class="btn btn-danger disabled" href="/page2" role="button">Rød</a></td></tr>
                    <tr><td><div class="spinner-border text-danger" role="status"> <span class="sr-only">Loading...</span></div></td></tr>
                  </table>
                </div>
                
                <div class="col-sm">
                  <table class="table table-borderless text-center">
                    <tr><td><a class="btn btn-success" href="/page3" role="button">Grønn</a></td></tr>
                    <tr><td></td></tr>
                  </table>
                </div>
                
                <div class="col-sm">
                  <table class="table table-borderless text-center">
                    <tr><td><a class="btn btn-dark" href="/page4" role="button">Av</a></td></tr>
                    <tr><td></td></tr>
                  </table>
                </div>
          </div>
        <p><div class="alert alert-success" role="alert">Copyright (C) 2020 Geir</a>. </div></p>
    </div>
</div>

</body>
</html>
)=====";
